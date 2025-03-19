/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ProvisioningHook.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateProvisioningTemplateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateProvisioningTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisioningTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateProvisioningTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateProvisioningTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable the provisioning template, otherwise false.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateProvisioningTemplateRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the default provisioning template version.</p>
     */
    inline int GetDefaultVersionId() const { return m_defaultVersionId; }
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }
    inline void SetDefaultVersionId(int value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }
    inline UpdateProvisioningTemplateRequest& WithDefaultVersionId(int value) { SetDefaultVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const { return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    template<typename ProvisioningRoleArnT = Aws::String>
    void SetProvisioningRoleArn(ProvisioningRoleArnT&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::forward<ProvisioningRoleArnT>(value); }
    template<typename ProvisioningRoleArnT = Aws::String>
    UpdateProvisioningTemplateRequest& WithProvisioningRoleArn(ProvisioningRoleArnT&& value) { SetProvisioningRoleArn(std::forward<ProvisioningRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the pre-provisioning hook template. Only supports template of type
     * <code>FLEET_PROVISIONING</code>. For more information about provisioning
     * template types, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CreateProvisioningTemplate.html#iot-CreateProvisioningTemplate-request-type">type</a>.</p>
     */
    inline const ProvisioningHook& GetPreProvisioningHook() const { return m_preProvisioningHook; }
    inline bool PreProvisioningHookHasBeenSet() const { return m_preProvisioningHookHasBeenSet; }
    template<typename PreProvisioningHookT = ProvisioningHook>
    void SetPreProvisioningHook(PreProvisioningHookT&& value) { m_preProvisioningHookHasBeenSet = true; m_preProvisioningHook = std::forward<PreProvisioningHookT>(value); }
    template<typename PreProvisioningHookT = ProvisioningHook>
    UpdateProvisioningTemplateRequest& WithPreProvisioningHook(PreProvisioningHookT&& value) { SetPreProvisioningHook(std::forward<PreProvisioningHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes pre-provisioning hook template.</p>
     */
    inline bool GetRemovePreProvisioningHook() const { return m_removePreProvisioningHook; }
    inline bool RemovePreProvisioningHookHasBeenSet() const { return m_removePreProvisioningHookHasBeenSet; }
    inline void SetRemovePreProvisioningHook(bool value) { m_removePreProvisioningHookHasBeenSet = true; m_removePreProvisioningHook = value; }
    inline UpdateProvisioningTemplateRequest& WithRemovePreProvisioningHook(bool value) { SetRemovePreProvisioningHook(value); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_defaultVersionId{0};
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet = false;

    ProvisioningHook m_preProvisioningHook;
    bool m_preProvisioningHookHasBeenSet = false;

    bool m_removePreProvisioningHook{false};
    bool m_removePreProvisioningHookHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
