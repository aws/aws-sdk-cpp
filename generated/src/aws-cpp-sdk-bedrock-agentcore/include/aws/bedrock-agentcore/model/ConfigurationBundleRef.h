/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A reference to a specific version of a configuration bundle.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ConfigurationBundleRef">AWS
 * API Reference</a></p>
 */
class ConfigurationBundleRef {
 public:
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleRef() = default;
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleRef(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleRef& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleArn() const { return m_bundleArn; }
  inline bool BundleArnHasBeenSet() const { return m_bundleArnHasBeenSet; }
  template <typename BundleArnT = Aws::String>
  void SetBundleArn(BundleArnT&& value) {
    m_bundleArnHasBeenSet = true;
    m_bundleArn = std::forward<BundleArnT>(value);
  }
  template <typename BundleArnT = Aws::String>
  ConfigurationBundleRef& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleVersion() const { return m_bundleVersion; }
  inline bool BundleVersionHasBeenSet() const { return m_bundleVersionHasBeenSet; }
  template <typename BundleVersionT = Aws::String>
  void SetBundleVersion(BundleVersionT&& value) {
    m_bundleVersionHasBeenSet = true;
    m_bundleVersion = std::forward<BundleVersionT>(value);
  }
  template <typename BundleVersionT = Aws::String>
  ConfigurationBundleRef& WithBundleVersion(BundleVersionT&& value) {
    SetBundleVersion(std::forward<BundleVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleArn;

  Aws::String m_bundleVersion;
  bool m_bundleArnHasBeenSet = false;
  bool m_bundleVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
