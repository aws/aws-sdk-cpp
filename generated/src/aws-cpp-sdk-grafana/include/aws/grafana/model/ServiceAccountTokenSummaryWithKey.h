/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure that contains the information about a service account token.</p>
   * <p>This structure is returned when creating the token. It is important to store
   * the <code>key</code> that is returned, as it is not retrievable at a later
   * time.</p> <p>If you lose the key, you can delete and recreate the token, which
   * will create a new key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ServiceAccountTokenSummaryWithKey">AWS
   * API Reference</a></p>
   */
  class ServiceAccountTokenSummaryWithKey
  {
  public:
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummaryWithKey();
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummaryWithKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummaryWithKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the service account token.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceAccountTokenSummaryWithKey& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key for the service account token. Used when making calls to the Grafana
     * HTTP APIs to authenticate and authorize the requests.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ServiceAccountTokenSummaryWithKey& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service account token.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceAccountTokenSummaryWithKey& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceAccountTokenSummaryWithKey& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
