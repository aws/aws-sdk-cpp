/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ResourceLocation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Browser extension configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserExtension">AWS
 * API Reference</a></p>
 */
class BrowserExtension {
 public:
  AWS_BEDROCKAGENTCORE_API BrowserExtension() = default;
  AWS_BEDROCKAGENTCORE_API BrowserExtension(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BrowserExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location where the browser extension files are stored. This specifies the
   * source from which the extension will be loaded and installed.</p>
   */
  inline const ResourceLocation& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = ResourceLocation>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = ResourceLocation>
  BrowserExtension& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceLocation m_location;
  bool m_locationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
