/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Key/value pairs to associate with this provisioning. These tags are entirely
   * discretionary and are propagated to the resources created in the
   * provisioning.</p>
   */
  class AWS_SERVICECATALOG_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Json::JsonValue& jsonValue);
    Tag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>The <code>ProvisioningArtifactParameter.TagKey</code> parameter from
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>The esired value for this key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The esired value for this key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The esired value for this key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The esired value for this key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The esired value for this key.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The esired value for this key.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The esired value for this key.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
