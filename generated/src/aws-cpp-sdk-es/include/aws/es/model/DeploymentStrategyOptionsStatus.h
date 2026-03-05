/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DeploymentStrategyOptions.h>
#include <aws/es/model/OptionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>Specifies the status of deployment strategy options for the specified
 * Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeploymentStrategyOptionsStatus">AWS
 * API Reference</a></p>
 */
class DeploymentStrategyOptionsStatus {
 public:
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOptionsStatus() = default;
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies deployment strategy options for the specified Elasticsearch
   * domain.</p>
   */
  inline const DeploymentStrategyOptions& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = DeploymentStrategyOptions>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = DeploymentStrategyOptions>
  DeploymentStrategyOptionsStatus& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the status of the deployment strategy options for the specified
   * Elasticsearch domain.</p>
   */
  inline const OptionStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = OptionStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = OptionStatus>
  DeploymentStrategyOptionsStatus& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  DeploymentStrategyOptions m_options;

  OptionStatus m_status;
  bool m_optionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
