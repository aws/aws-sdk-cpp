/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DescriptorSource.h>

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
 * <p> A descriptor for a registry record that exposes an HTTP endpoint. This
 * descriptor is source-only: it identifies where the endpoint is located and
 * carries no descriptor payload data or schema version.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/HttpDescriptor">AWS
 * API Reference</a></p>
 */
class HttpDescriptor {
 public:
  AWS_AGENTREGISTRY_API HttpDescriptor() = default;
  AWS_AGENTREGISTRY_API HttpDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API HttpDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The source location of the HTTP endpoint.</p>
   */
  inline const DescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DescriptorSource>
  HttpDescriptor& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  DescriptorSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
