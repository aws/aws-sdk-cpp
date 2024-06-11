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
   * <p>Details of a resource that is associated to an Firewall Manager resource
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/Resource">AWS API
   * Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_FMS_API Resource();
    AWS_FMS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource's universal resource indicator (URI).</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }
    inline Resource& WithURI(const Aws::String& value) { SetURI(value); return *this;}
    inline Resource& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}
    inline Resource& WithURI(const char* value) { SetURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that the associated resource belongs
     * to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Resource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Resource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Resource& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
