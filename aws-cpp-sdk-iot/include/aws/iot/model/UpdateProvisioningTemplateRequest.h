/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API UpdateProvisioningTemplateRequest : public IoTRequest
  {
  public:
    UpdateProvisioningTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisioningTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the fleet provisioning template.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>True to enable the fleet provisioning template, otherwise false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True to enable the fleet provisioning template, otherwise false.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True to enable the fleet provisioning template, otherwise false.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True to enable the fleet provisioning template, otherwise false.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The ID of the default provisioning template version.</p>
     */
    inline int GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The ID of the default provisioning template version.</p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The ID of the default provisioning template version.</p>
     */
    inline void SetDefaultVersionId(int value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The ID of the default provisioning template version.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithDefaultVersionId(int value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = value; }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn.assign(value); }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline UpdateProvisioningTemplateRequest& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
