/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/SlaUpdateConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Represents the updated content of an SLA related item.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SlaUpdateContent">AWS
 * API Reference</a></p>
 */
class SlaUpdateContent {
 public:
  AWS_CONNECTCASES_API SlaUpdateContent() = default;
  AWS_CONNECTCASES_API SlaUpdateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API SlaUpdateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents the SLA configuration to update.</p>
   */
  inline const SlaUpdateConfiguration& GetSlaUpdateConfiguration() const { return m_slaUpdateConfiguration; }
  inline bool SlaUpdateConfigurationHasBeenSet() const { return m_slaUpdateConfigurationHasBeenSet; }
  template <typename SlaUpdateConfigurationT = SlaUpdateConfiguration>
  void SetSlaUpdateConfiguration(SlaUpdateConfigurationT&& value) {
    m_slaUpdateConfigurationHasBeenSet = true;
    m_slaUpdateConfiguration = std::forward<SlaUpdateConfigurationT>(value);
  }
  template <typename SlaUpdateConfigurationT = SlaUpdateConfiguration>
  SlaUpdateContent& WithSlaUpdateConfiguration(SlaUpdateConfigurationT&& value) {
    SetSlaUpdateConfiguration(std::forward<SlaUpdateConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SlaUpdateConfiguration m_slaUpdateConfiguration;
  bool m_slaUpdateConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
