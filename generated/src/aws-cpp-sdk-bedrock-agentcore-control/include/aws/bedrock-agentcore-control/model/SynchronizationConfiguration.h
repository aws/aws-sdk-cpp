/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FromUrlSynchronizationConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for synchronizing registry record metadata from an external
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SynchronizationConfiguration">AWS
 * API Reference</a></p>
 */
class SynchronizationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SynchronizationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SynchronizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SynchronizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for synchronizing from a URL-based source.</p>
   */
  inline const FromUrlSynchronizationConfiguration& GetFromUrl() const { return m_fromUrl; }
  inline bool FromUrlHasBeenSet() const { return m_fromUrlHasBeenSet; }
  template <typename FromUrlT = FromUrlSynchronizationConfiguration>
  void SetFromUrl(FromUrlT&& value) {
    m_fromUrlHasBeenSet = true;
    m_fromUrl = std::forward<FromUrlT>(value);
  }
  template <typename FromUrlT = FromUrlSynchronizationConfiguration>
  SynchronizationConfiguration& WithFromUrl(FromUrlT&& value) {
    SetFromUrl(std::forward<FromUrlT>(value));
    return *this;
  }
  ///@}
 private:
  FromUrlSynchronizationConfiguration m_fromUrl;
  bool m_fromUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
