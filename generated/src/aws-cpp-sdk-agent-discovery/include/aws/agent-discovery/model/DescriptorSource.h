/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/DescriptorSourceUrl.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>Reference to descriptor content hosted at a URL.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/DescriptorSource">AWS
 * API Reference</a></p>
 */
class DescriptorSource {
 public:
  AWS_AGENTDISCOVERY_API DescriptorSource() = default;
  AWS_AGENTDISCOVERY_API DescriptorSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API DescriptorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL that hosts the descriptor content.</p>
   */
  inline const DescriptorSourceUrl& GetFromUrl() const { return m_fromUrl; }
  inline bool FromUrlHasBeenSet() const { return m_fromUrlHasBeenSet; }
  template <typename FromUrlT = DescriptorSourceUrl>
  void SetFromUrl(FromUrlT&& value) {
    m_fromUrlHasBeenSet = true;
    m_fromUrl = std::forward<FromUrlT>(value);
  }
  template <typename FromUrlT = DescriptorSourceUrl>
  DescriptorSource& WithFromUrl(FromUrlT&& value) {
    SetFromUrl(std::forward<FromUrlT>(value));
    return *this;
  }
  ///@}
 private:
  DescriptorSourceUrl m_fromUrl;
  bool m_fromUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
