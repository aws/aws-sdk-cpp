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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Inspector application.</p> <p>This data type is
   * used as the response element in the <a>DescribeApplication</a> action.</p>
   */
  class AWS_INSPECTOR_API Application
  {
  public:
    Application();
    Application(const Aws::Utils::Json::JsonValue& jsonValue);
    Application& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline Application& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline Application& WithApplicationArn(Aws::String&& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN specifying the Inspector application. </p>
     */
    inline Application& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline Application& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline Application& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the Inspector application. </p>
     */
    inline Application& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline Application& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline Application& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is associated with the
     * application. </p>
     */
    inline Application& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

  private:
    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet;
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
