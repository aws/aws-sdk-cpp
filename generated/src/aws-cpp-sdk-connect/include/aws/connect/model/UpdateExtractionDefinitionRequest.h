/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExtractionConfiguration.h>
#include <aws/connect/model/ExtractionDefinitionDisplay.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateExtractionDefinitionRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateExtractionDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExtractionDefinition"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateExtractionDefinitionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the extraction definition to update.</p>
   */
  inline const Aws::String& GetExtractionDefinitionId() const { return m_extractionDefinitionId; }
  inline bool ExtractionDefinitionIdHasBeenSet() const { return m_extractionDefinitionIdHasBeenSet; }
  template <typename ExtractionDefinitionIdT = Aws::String>
  void SetExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    m_extractionDefinitionIdHasBeenSet = true;
    m_extractionDefinitionId = std::forward<ExtractionDefinitionIdT>(value);
  }
  template <typename ExtractionDefinitionIdT = Aws::String>
  UpdateExtractionDefinitionRequest& WithExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    SetExtractionDefinitionId(std::forward<ExtractionDefinitionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateExtractionDefinitionRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the extraction definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateExtractionDefinitionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines how data is extracted, including the prompt
   * hint and not-found behavior.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  inline bool ExtractionConfigurationHasBeenSet() const { return m_extractionConfigurationHasBeenSet; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  UpdateExtractionDefinitionRequest& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
    SetExtractionConfiguration(std::forward<ExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display settings for the extraction definition.</p>
   */
  inline const ExtractionDefinitionDisplay& GetDisplay() const { return m_display; }
  inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  void SetDisplay(DisplayT&& value) {
    m_displayHasBeenSet = true;
    m_display = std::forward<DisplayT>(value);
  }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  UpdateExtractionDefinitionRequest& WithDisplay(DisplayT&& value) {
    SetDisplay(std::forward<DisplayT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_extractionDefinitionId;

  Aws::String m_instanceId;

  Aws::String m_name;

  ExtractionConfiguration m_extractionConfiguration;

  ExtractionDefinitionDisplay m_display;
  bool m_clientTokenHasBeenSet = true;
  bool m_extractionDefinitionIdHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_displayHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
