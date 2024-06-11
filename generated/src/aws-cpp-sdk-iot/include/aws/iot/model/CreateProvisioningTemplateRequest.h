/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ProvisioningHook.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/TemplateType.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateProvisioningTemplateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateProvisioningTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisioningTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CreateProvisioningTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateProvisioningTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateProvisioningTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProvisioningTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline CreateProvisioningTemplateRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline CreateProvisioningTemplateRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable the provisioning template, otherwise false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateProvisioningTemplateRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN for the role associated with the provisioning template. This IoT
     * role grants permission to provision a device.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = value; }
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::move(value); }
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn.assign(value); }
    inline CreateProvisioningTemplateRequest& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}
    inline CreateProvisioningTemplateRequest& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a pre-provisioning hook template. Only supports template of type
     * <code>FLEET_PROVISIONING</code>. For more information about provisioning
     * template types, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CreateProvisioningTemplate.html#iot-CreateProvisioningTemplate-request-type">type</a>.</p>
     */
    inline const ProvisioningHook& GetPreProvisioningHook() const{ return m_preProvisioningHook; }
    inline bool PreProvisioningHookHasBeenSet() const { return m_preProvisioningHookHasBeenSet; }
    inline void SetPreProvisioningHook(const ProvisioningHook& value) { m_preProvisioningHookHasBeenSet = true; m_preProvisioningHook = value; }
    inline void SetPreProvisioningHook(ProvisioningHook&& value) { m_preProvisioningHookHasBeenSet = true; m_preProvisioningHook = std::move(value); }
    inline CreateProvisioningTemplateRequest& WithPreProvisioningHook(const ProvisioningHook& value) { SetPreProvisioningHook(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithPreProvisioningHook(ProvisioningHook&& value) { SetPreProvisioningHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the provisioning template.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProvisioningTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProvisioningTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateProvisioningTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline const TemplateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TemplateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TemplateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateProvisioningTemplateRequest& WithType(const TemplateType& value) { SetType(value); return *this;}
    inline CreateProvisioningTemplateRequest& WithType(TemplateType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet = false;

    ProvisioningHook m_preProvisioningHook;
    bool m_preProvisioningHookHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TemplateType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
