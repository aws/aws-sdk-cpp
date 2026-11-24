/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DescriptorSource.h>
#include <aws/agent-registry/model/SignatureAgentCardAdditionalData.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistry {
namespace Model {

/**
 * <p> Descriptor that defines the content of a signature agent card, which
 * identifies a web bot and references the JSON Web Key Set (JWKS) used to verify
 * its HTTP message signatures.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/SignatureAgentCardDescriptor">AWS
 * API Reference</a></p>
 */
class SignatureAgentCardDescriptor {
 public:
  AWS_AGENTREGISTRY_API SignatureAgentCardDescriptor() = default;
  AWS_AGENTREGISTRY_API SignatureAgentCardDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API SignatureAgentCardDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The signature agent card descriptor content, serialized as descriptor
   * payload data.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  SignatureAgentCardDescriptor& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The schema version of the descriptor payload.</p>
   */
  inline const Aws::String& GetDataSchemaVersion() const { return m_dataSchemaVersion; }
  inline bool DataSchemaVersionHasBeenSet() const { return m_dataSchemaVersionHasBeenSet; }
  template <typename DataSchemaVersionT = Aws::String>
  void SetDataSchemaVersion(DataSchemaVersionT&& value) {
    m_dataSchemaVersionHasBeenSet = true;
    m_dataSchemaVersion = std::forward<DataSchemaVersionT>(value);
  }
  template <typename DataSchemaVersionT = Aws::String>
  SignatureAgentCardDescriptor& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The source location from which the signature agent card descriptor content
   * was retrieved.</p>
   */
  inline const DescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DescriptorSource>
  SignatureAgentCardDescriptor& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Additional data for the signature agent card, such as its AWS WAF bot
   * category.</p>
   */
  inline const SignatureAgentCardAdditionalData& GetAdditionalData() const { return m_additionalData; }
  inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
  template <typename AdditionalDataT = SignatureAgentCardAdditionalData>
  void SetAdditionalData(AdditionalDataT&& value) {
    m_additionalDataHasBeenSet = true;
    m_additionalData = std::forward<AdditionalDataT>(value);
  }
  template <typename AdditionalDataT = SignatureAgentCardAdditionalData>
  SignatureAgentCardDescriptor& WithAdditionalData(AdditionalDataT&& value) {
    SetAdditionalData(std::forward<AdditionalDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_dataSchemaVersion;

  DescriptorSource m_source;

  SignatureAgentCardAdditionalData m_additionalData;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_additionalDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
