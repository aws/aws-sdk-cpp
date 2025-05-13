/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation-runtime/model/InputConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/OutputConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/DataAutomationConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/NotificationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation-runtime/model/Blueprint.h>
#include <aws/bedrock-data-automation-runtime/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

  /**
   * <p>Invoke Data Automation Async Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomationAsyncRequest">AWS
   * API Reference</a></p>
   */
  class InvokeDataAutomationAsyncRequest : public BedrockDataAutomationRuntimeRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationAsyncRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeDataAutomationAsync"; }

    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    InvokeDataAutomationAsyncRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    template<typename InputConfigurationT = InputConfiguration>
    void SetInputConfiguration(InputConfigurationT&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::forward<InputConfigurationT>(value); }
    template<typename InputConfigurationT = InputConfiguration>
    InvokeDataAutomationAsyncRequest& WithInputConfiguration(InputConfigurationT&& value) { SetInputConfiguration(std::forward<InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration.</p>
     */
    inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = OutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = OutputConfiguration>
    InvokeDataAutomationAsyncRequest& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data automation configuration.</p>
     */
    inline const DataAutomationConfiguration& GetDataAutomationConfiguration() const { return m_dataAutomationConfiguration; }
    inline bool DataAutomationConfigurationHasBeenSet() const { return m_dataAutomationConfigurationHasBeenSet; }
    template<typename DataAutomationConfigurationT = DataAutomationConfiguration>
    void SetDataAutomationConfiguration(DataAutomationConfigurationT&& value) { m_dataAutomationConfigurationHasBeenSet = true; m_dataAutomationConfiguration = std::forward<DataAutomationConfigurationT>(value); }
    template<typename DataAutomationConfigurationT = DataAutomationConfiguration>
    InvokeDataAutomationAsyncRequest& WithDataAutomationConfiguration(DataAutomationConfigurationT&& value) { SetDataAutomationConfiguration(std::forward<DataAutomationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    InvokeDataAutomationAsyncRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification configuration.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    InvokeDataAutomationAsyncRequest& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Blueprint list.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const { return m_blueprints; }
    inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
    template<typename BlueprintsT = Aws::Vector<Blueprint>>
    void SetBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::forward<BlueprintsT>(value); }
    template<typename BlueprintsT = Aws::Vector<Blueprint>>
    InvokeDataAutomationAsyncRequest& WithBlueprints(BlueprintsT&& value) { SetBlueprints(std::forward<BlueprintsT>(value)); return *this;}
    template<typename BlueprintsT = Blueprint>
    InvokeDataAutomationAsyncRequest& AddBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints.emplace_back(std::forward<BlueprintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Data automation profile ARN</p>
     */
    inline const Aws::String& GetDataAutomationProfileArn() const { return m_dataAutomationProfileArn; }
    inline bool DataAutomationProfileArnHasBeenSet() const { return m_dataAutomationProfileArnHasBeenSet; }
    template<typename DataAutomationProfileArnT = Aws::String>
    void SetDataAutomationProfileArn(DataAutomationProfileArnT&& value) { m_dataAutomationProfileArnHasBeenSet = true; m_dataAutomationProfileArn = std::forward<DataAutomationProfileArnT>(value); }
    template<typename DataAutomationProfileArnT = Aws::String>
    InvokeDataAutomationAsyncRequest& WithDataAutomationProfileArn(DataAutomationProfileArnT&& value) { SetDataAutomationProfileArn(std::forward<DataAutomationProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InvokeDataAutomationAsyncRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InvokeDataAutomationAsyncRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    InputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    OutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    DataAutomationConfiguration m_dataAutomationConfiguration;
    bool m_dataAutomationConfigurationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    Aws::Vector<Blueprint> m_blueprints;
    bool m_blueprintsHasBeenSet = false;

    Aws::String m_dataAutomationProfileArn;
    bool m_dataAutomationProfileArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
