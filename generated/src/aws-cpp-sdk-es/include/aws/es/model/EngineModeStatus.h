/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DomainEngineMode.h>
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
 * <p>The status of the engine mode for the domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/EngineModeStatus">AWS
 * API Reference</a></p>
 */
class EngineModeStatus {
 public:
  AWS_ELASTICSEARCHSERVICE_API EngineModeStatus() = default;
  AWS_ELASTICSEARCHSERVICE_API EngineModeStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API EngineModeStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The engine mode configured for the domain.</p>
   */
  inline DomainEngineMode GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  inline void SetOptions(DomainEngineMode value) {
    m_optionsHasBeenSet = true;
    m_options = value;
  }
  inline EngineModeStatus& WithOptions(DomainEngineMode value) {
    SetOptions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the engine mode for the domain.</p>
   */
  inline const OptionStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = OptionStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = OptionStatus>
  EngineModeStatus& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  DomainEngineMode m_options{DomainEngineMode::NOT_SET};

  OptionStatus m_status;
  bool m_optionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
