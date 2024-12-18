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
    AWS_IOT_API CreateCommandRequest();

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
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }
    inline CreateCommandRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline CreateCommandRequest& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline CreateCommandRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command. The MQTT reserved topics and validations will
     * be used for command executions according to the namespace setting.</p>
     */
    inline const CommandNamespace& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const CommandNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(CommandNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline CreateCommandRequest& WithNamespace(const CommandNamespace& value) { SetNamespace(value); return *this;}
    inline CreateCommandRequest& WithNamespace(CommandNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name in the console for the command. This name doesn't have
     * to be unique. You can update the user-friendly name after you define it.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateCommandRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateCommandRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateCommandRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text decription of the command.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCommandRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCommandRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCommandRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline const CommandPayload& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const CommandPayload& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(CommandPayload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline CreateCommandRequest& WithPayload(const CommandPayload& value) { SetPayload(value); return *this;}
    inline CreateCommandRequest& WithPayload(CommandPayload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters that are required by the
     * <code>StartCommandExecution</code> API. These parameters need to be specified
     * only when using the <code>AWS-IoT-FleetWise</code> namespace. You can either
     * specify them here or when running the command using the
     * <code>StartCommandExecution</code> API.</p>
     */
    inline const Aws::Vector<CommandParameter>& GetMandatoryParameters() const{ return m_mandatoryParameters; }
    inline bool MandatoryParametersHasBeenSet() const { return m_mandatoryParametersHasBeenSet; }
    inline void SetMandatoryParameters(const Aws::Vector<CommandParameter>& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters = value; }
    inline void SetMandatoryParameters(Aws::Vector<CommandParameter>&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters = std::move(value); }
    inline CreateCommandRequest& WithMandatoryParameters(const Aws::Vector<CommandParameter>& value) { SetMandatoryParameters(value); return *this;}
    inline CreateCommandRequest& WithMandatoryParameters(Aws::Vector<CommandParameter>&& value) { SetMandatoryParameters(std::move(value)); return *this;}
    inline CreateCommandRequest& AddMandatoryParameters(const CommandParameter& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters.push_back(value); return *this; }
    inline CreateCommandRequest& AddMandatoryParameters(CommandParameter&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that you must provide when using the
     * <code>AWS-IoT-FleetWise</code> namespace. The role grants IoT Device Management
     * the permission to access IoT FleetWise resources for generating the payload for
     * the command. This field is not required when you use the <code>AWS-IoT</code>
     * namespace.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateCommandRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateCommandRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateCommandRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name-value pairs that are used as metadata to manage a command.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCommandRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCommandRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCommandRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCommandRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    CommandNamespace m_namespace;
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
