/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DescriptorSourceFromUrl.h>

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
 * <p> The source location from which a descriptor's content was
 * retrieved.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/DescriptorSource">AWS
 * API Reference</a></p>
 */
class DescriptorSource {
 public:
  AWS_AGENTREGISTRY_API DescriptorSource() = default;
  AWS_AGENTREGISTRY_API DescriptorSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API DescriptorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The URL-based descriptor source, populated when descriptor content is
   * synchronized from a URL.</p>
   */
  inline const DescriptorSourceFromUrl& GetFromUrl() const { return m_fromUrl; }
  inline bool FromUrlHasBeenSet() const { return m_fromUrlHasBeenSet; }
  template <typename FromUrlT = DescriptorSourceFromUrl>
  void SetFromUrl(FromUrlT&& value) {
    m_fromUrlHasBeenSet = true;
    m_fromUrl = std::forward<FromUrlT>(value);
  }
  template <typename FromUrlT = DescriptorSourceFromUrl>
  DescriptorSource& WithFromUrl(FromUrlT&& value) {
    SetFromUrl(std::forward<FromUrlT>(value));
    return *this;
  }
  ///@}
 private:
  DescriptorSourceFromUrl m_fromUrl;
  bool m_fromUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
