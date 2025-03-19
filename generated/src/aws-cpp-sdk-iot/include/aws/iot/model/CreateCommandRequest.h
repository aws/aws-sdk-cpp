/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandNamespace.h>
#include <aws/iot/model/CommandPayload.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/CommandParameter.h>
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
  class CreateCommandRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateCommandRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCommand"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the command. We recommend using UUID. Alpha-numeric
     * characters, hyphens, and underscores are valid for use here.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    CreateCommandRequest& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command. The MQTT reserved topics and validations will
     * be used for command executions according to the namespace setting.</p>
     */
    inline CommandNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(CommandNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline CreateCommandRequest& WithNamespace(CommandNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name in the console for the command. This name doesn't have
     * to be unique. You can update the user-friendly name after you define it.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateCommandRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text decription of the command.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCommandRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payload object for the command. You must specify this information when
     * using the <code>AWS-IoT</code> namespace.</p> <p>You can upload a static payload
     * file from your local storage that contains the instructions for the device to
     * process. The payload file can use any format. To make sure that the device
     * correctly interprets the payload, we recommend you to specify the payload
     * content type.</p>
     */
    inline const CommandPayload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = CommandPayload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = CommandPayload>
    CreateCommandRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters that are required by the
     * <code>StartCommandExecution</code> API. These parameters need to be specified
     * only when using the <code>AWS-IoT-FleetWise</code> namespace. You can either
     * specify them here or when running the command using the
     * <code>StartCommandExecution</code> API.</p>
     */
    inline const Aws::Vector<CommandParameter>& GetMandatoryParameters() const { return m_mandatoryParameters; }
    inline bool MandatoryParametersHasBeenSet() const { return m_mandatoryParametersHasBeenSet; }
    template<typename MandatoryParametersT = Aws::Vector<CommandParameter>>
    void SetMandatoryParameters(MandatoryParametersT&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters = std::forward<MandatoryParametersT>(value); }
    template<typename MandatoryParametersT = Aws::Vector<CommandParameter>>
    CreateCommandRequest& WithMandatoryParameters(MandatoryParametersT&& value) { SetMandatoryParameters(std::forward<MandatoryParametersT>(value)); return *this;}
    template<typename MandatoryParametersT = CommandParameter>
    CreateCommandRequest& AddMandatoryParameters(MandatoryParametersT&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters.emplace_back(std::forward<MandatoryParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that you must provide when using the
     * <code>AWS-IoT-FleetWise</code> namespace. The role grants IoT Device Management
     * the permission to access IoT FleetWise resources for generating the payload for
     * the command. This field is not required when you use the <code>AWS-IoT</code>
     * namespace.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateCommandRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name-value pairs that are used as metadata to manage a command.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCommandRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCommandRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    CommandNamespace m_namespace{CommandNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CommandPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::Vector<CommandParameter> m_mandatoryParameters;
    bool m_mandatoryParametersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
