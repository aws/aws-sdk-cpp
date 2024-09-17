/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>A resource in the organization that's available to be associated with a
   * Firewall Manager resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DiscoveredResource">AWS
   * API Reference</a></p>
   */
  class DiscoveredResource
  {
  public:
    AWS_FMS_API DiscoveredResource();
    AWS_FMS_API DiscoveredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DiscoveredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The universal resource identifier (URI) of the discovered resource.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }
    inline DiscoveredResource& WithURI(const Aws::String& value) { SetURI(value); return *this;}
    inline DiscoveredResource& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}
    inline DiscoveredResource& WithURI(const char* value) { SetURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the discovered
     * resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline DiscoveredResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DiscoveredResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DiscoveredResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the discovered resource.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline DiscoveredResource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline DiscoveredResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline DiscoveredResource& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the discovered resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DiscoveredResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DiscoveredResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DiscoveredResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
