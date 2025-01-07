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
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationAsyncRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline InvokeDataAutomationAsyncRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    inline void SetInputConfiguration(const InputConfiguration& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = value; }
    inline void SetInputConfiguration(InputConfiguration&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithInputConfiguration(const InputConfiguration& value) { SetInputConfiguration(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithInputConfiguration(InputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration.</p>
     */
    inline const OutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const OutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(OutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithOutputConfiguration(const OutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithOutputConfiguration(OutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data automation configuration.</p>
     */
    inline const DataAutomationConfiguration& GetDataAutomationConfiguration() const{ return m_dataAutomationConfiguration; }
    inline bool DataAutomationConfigurationHasBeenSet() const { return m_dataAutomationConfigurationHasBeenSet; }
    inline void SetDataAutomationConfiguration(const DataAutomationConfiguration& value) { m_dataAutomationConfigurationHasBeenSet = true; m_dataAutomationConfiguration = value; }
    inline void SetDataAutomationConfiguration(DataAutomationConfiguration&& value) { m_dataAutomationConfigurationHasBeenSet = true; m_dataAutomationConfiguration = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithDataAutomationConfiguration(const DataAutomationConfiguration& value) { SetDataAutomationConfiguration(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithDataAutomationConfiguration(DataAutomationConfiguration&& value) { SetDataAutomationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification configuration.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Blueprint list.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const{ return m_blueprints; }
    inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
    inline void SetBlueprints(const Aws::Vector<Blueprint>& value) { m_blueprintsHasBeenSet = true; m_blueprints = value; }
    inline void SetBlueprints(Aws::Vector<Blueprint>&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::move(value); }
    inline InvokeDataAutomationAsyncRequest& WithBlueprints(const Aws::Vector<Blueprint>& value) { SetBlueprints(value); return *this;}
    inline InvokeDataAutomationAsyncRequest& WithBlueprints(Aws::Vector<Blueprint>&& value) { SetBlueprints(std::move(value)); return *this;}
    inline InvokeDataAutomationAsyncRequest& AddBlueprints(const Blueprint& value) { m_blueprintsHasBeenSet = true; m_blueprints.push_back(value); return *this; }
    inline InvokeDataAutomationAsyncRequest& AddBlueprints(Blueprint&& value) { m_blueprintsHasBeenSet = true; m_blueprints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
