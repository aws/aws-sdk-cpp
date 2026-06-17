/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DeletionProtectionConfiguration.h>
#include <aws/bedrock-agent/model/MediaExtractionConfiguration.h>
#include <aws/core/utils/Document.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Configuration for managed knowledge base connector data
 * sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ManagedKnowledgeBaseConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedKnowledgeBaseConnectorConfiguration {
 public:
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConnectorConfiguration() = default;
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A safeguard against accidental bulk deletion of indexed content.</p>
   */
  inline const DeletionProtectionConfiguration& GetDeletionProtectionConfiguration() const { return m_deletionProtectionConfiguration; }
  inline bool DeletionProtectionConfigurationHasBeenSet() const { return m_deletionProtectionConfigurationHasBeenSet; }
  template <typename DeletionProtectionConfigurationT = DeletionProtectionConfiguration>
  void SetDeletionProtectionConfiguration(DeletionProtectionConfigurationT&& value) {
    m_deletionProtectionConfigurationHasBeenSet = true;
    m_deletionProtectionConfiguration = std::forward<DeletionProtectionConfigurationT>(value);
  }
  template <typename DeletionProtectionConfigurationT = DeletionProtectionConfiguration>
  ManagedKnowledgeBaseConnectorConfiguration& WithDeletionProtectionConfiguration(DeletionProtectionConfigurationT&& value) {
    SetDeletionProtectionConfiguration(std::forward<DeletionProtectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for extracting media (images, audio, video) from data source
   * files.</p>
   */
  inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
  inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    m_mediaExtractionConfigurationHasBeenSet = true;
    m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value);
  }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  ManagedKnowledgeBaseConnectorConfiguration& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Connector-specific parameters. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-managed-connect-ds.html">Connect
   * a data source</a>.</p>
   */
  inline Aws::Utils::DocumentView GetConnectorParameters() const { return m_connectorParameters; }
  inline bool ConnectorParametersHasBeenSet() const { return m_connectorParametersHasBeenSet; }
  template <typename ConnectorParametersT = Aws::Utils::Document>
  void SetConnectorParameters(ConnectorParametersT&& value) {
    m_connectorParametersHasBeenSet = true;
    m_connectorParameters = std::forward<ConnectorParametersT>(value);
  }
  template <typename ConnectorParametersT = Aws::Utils::Document>
  ManagedKnowledgeBaseConnectorConfiguration& WithConnectorParameters(ConnectorParametersT&& value) {
    SetConnectorParameters(std::forward<ConnectorParametersT>(value));
    return *this;
  }
  ///@}
 private:
  DeletionProtectionConfiguration m_deletionProtectionConfiguration;

  MediaExtractionConfiguration m_mediaExtractionConfiguration;

  Aws::Utils::Document m_connectorParameters;
  bool m_deletionProtectionConfigurationHasBeenSet = false;
  bool m_mediaExtractionConfigurationHasBeenSet = false;
  bool m_connectorParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
