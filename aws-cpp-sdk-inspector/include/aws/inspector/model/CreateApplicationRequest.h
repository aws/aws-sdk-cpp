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
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API CreateApplicationRequest : public InspectorRequest
  {
  public:
    CreateApplicationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The user-defined name identifying the application that you want to create.
     * The name must be unique within the AWS account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN specifying the resource group that is used to create the
     * application.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
