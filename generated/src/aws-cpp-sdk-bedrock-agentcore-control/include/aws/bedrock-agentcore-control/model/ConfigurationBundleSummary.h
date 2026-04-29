/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary information about a configuration bundle.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConfigurationBundleSummary">AWS
 * API Reference</a></p>
 */
class ConfigurationBundleSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ConfigurationBundleSummary& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  ConfigurationBundleSummary& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleName() const { return m_bundleName; }
  inline bool BundleNameHasBeenSet() const { return m_bundleNameHasBeenSet; }
  template <typename BundleNameT = Aws::String>
  void SetBundleName(BundleNameT&& value) {
    m_bundleNameHasBeenSet = true;
    m_bundleName = std::forward<BundleNameT>(value);
  }
  template <typename BundleNameT = Aws::String>
  ConfigurationBundleSummary& WithBundleName(BundleNameT&& value) {
    SetBundleName(std::forward<BundleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the configuration bundle.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConfigurationBundleSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleArn;

  Aws::String m_bundleId;

  Aws::String m_bundleName;

  Aws::String m_description;
  bool m_bundleArnHasBeenSet = false;
  bool m_bundleIdHasBeenSet = false;
  bool m_bundleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
