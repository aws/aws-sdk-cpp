/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AutomatedSnapshotPauseOptions.h>
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
 * <p>The status of automated snapshot pause options for the specified
 * Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutomatedSnapshotPauseOptionsStatus">AWS
 * API Reference</a></p>
 */
class AutomatedSnapshotPauseOptionsStatus {
 public:
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptionsStatus() = default;
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Automated snapshot pause options for the specified Elasticsearch domain.</p>
   */
  inline const AutomatedSnapshotPauseOptions& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = AutomatedSnapshotPauseOptions>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = AutomatedSnapshotPauseOptions>
  AutomatedSnapshotPauseOptionsStatus& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the automated snapshot pause options for the specified
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
  AutomatedSnapshotPauseOptionsStatus& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  AutomatedSnapshotPauseOptions m_options;

  OptionStatus m_status;
  bool m_optionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
