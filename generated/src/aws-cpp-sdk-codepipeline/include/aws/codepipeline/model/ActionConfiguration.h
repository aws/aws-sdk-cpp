/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodePipeline {
namespace Model {

/**
 * <p>Represents information about an action configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionConfiguration">AWS
 * API Reference</a></p>
 */
class ActionConfiguration {
 public:
  AWS_CODEPIPELINE_API ActionConfiguration() = default;
  AWS_CODEPIPELINE_API ActionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API ActionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The configuration data for the action.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
  ActionConfiguration& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  template <typename ConfigurationKeyT = Aws::String, typename ConfigurationValueT = Aws::String>
  ActionConfiguration& AddConfiguration(ConfigurationKeyT&& key, ConfigurationValueT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration.emplace(std::forward<ConfigurationKeyT>(key), std::forward<ConfigurationValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_configuration;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
