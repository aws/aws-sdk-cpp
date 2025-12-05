/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeRequest.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/Blueprint.h>
#include <aws/bedrock-data-automation-runtime/model/DataAutomationConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/SyncInputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {

/**
 * <p>Invoke Data Automation Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomationRequest">AWS
 * API Reference</a></p>
 */
class InvokeDataAutomationRequest : public BedrockDataAutomationRuntimeRequest {
 public:
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeDataAutomation"; }

  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String SerializePayload() const override;

  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Input configuration.</p>
   */
  inline const SyncInputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
  inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
  template <typename InputConfigurationT = SyncInputConfiguration>
  void SetInputConfiguration(InputConfigurationT&& value) {
    m_inputConfigurationHasBeenSet = true;
    m_inputConfiguration = std::forward<InputConfigurationT>(value);
  }
  template <typename InputConfigurationT = SyncInputConfiguration>
  InvokeDataAutomationRequest& WithInputConfiguration(InputConfigurationT&& value) {
    SetInputConfiguration(std::forward<InputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Data automation configuration.</p>
   */
  inline const DataAutomationConfiguration& GetDataAutomationConfiguration() const { return m_dataAutomationConfiguration; }
  inline bool DataAutomationConfigurationHasBeenSet() const { return m_dataAutomationConfigurationHasBeenSet; }
  template <typename DataAutomationConfigurationT = DataAutomationConfiguration>
  void SetDataAutomationConfiguration(DataAutomationConfigurationT&& value) {
    m_dataAutomationConfigurationHasBeenSet = true;
    m_dataAutomationConfiguration = std::forward<DataAutomationConfigurationT>(value);
  }
  template <typename DataAutomationConfigurationT = DataAutomationConfiguration>
  InvokeDataAutomationRequest& WithDataAutomationConfiguration(DataAutomationConfigurationT&& value) {
    SetDataAutomationConfiguration(std::forward<DataAutomationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Blueprint list.</p>
   */
  inline const Aws::Vector<Blueprint>& GetBlueprints() const { return m_blueprints; }
  inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
  template <typename BlueprintsT = Aws::Vector<Blueprint>>
  void SetBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints = std::forward<BlueprintsT>(value);
  }
  template <typename BlueprintsT = Aws::Vector<Blueprint>>
  InvokeDataAutomationRequest& WithBlueprints(BlueprintsT&& value) {
    SetBlueprints(std::forward<BlueprintsT>(value));
    return *this;
  }
  template <typename BlueprintsT = Blueprint>
  InvokeDataAutomationRequest& AddBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints.emplace_back(std::forward<BlueprintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Data automation profile ARN</p>
   */
  inline const Aws::String& GetDataAutomationProfileArn() const { return m_dataAutomationProfileArn; }
  inline bool DataAutomationProfileArnHasBeenSet() const { return m_dataAutomationProfileArnHasBeenSet; }
  template <typename DataAutomationProfileArnT = Aws::String>
  void SetDataAutomationProfileArn(DataAutomationProfileArnT&& value) {
    m_dataAutomationProfileArnHasBeenSet = true;
    m_dataAutomationProfileArn = std::forward<DataAutomationProfileArnT>(value);
  }
  template <typename DataAutomationProfileArnT = Aws::String>
  InvokeDataAutomationRequest& WithDataAutomationProfileArn(DataAutomationProfileArnT&& value) {
    SetDataAutomationProfileArn(std::forward<DataAutomationProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encryption configuration.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  InvokeDataAutomationRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SyncInputConfiguration m_inputConfiguration;

  DataAutomationConfiguration m_dataAutomationConfiguration;

  Aws::Vector<Blueprint> m_blueprints;

  Aws::String m_dataAutomationProfileArn;

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_inputConfigurationHasBeenSet = false;
  bool m_dataAutomationConfigurationHasBeenSet = false;
  bool m_blueprintsHasBeenSet = false;
  bool m_dataAutomationProfileArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
