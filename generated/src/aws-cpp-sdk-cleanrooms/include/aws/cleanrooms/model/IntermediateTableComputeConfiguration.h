/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/WorkerComputeConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>The compute configuration for an intermediate table population
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableComputeConfiguration">AWS
 * API Reference</a></p>
 */
class IntermediateTableComputeConfiguration {
 public:
  AWS_CLEANROOMS_API IntermediateTableComputeConfiguration() = default;
  AWS_CLEANROOMS_API IntermediateTableComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const WorkerComputeConfiguration& GetQueryComputeConfiguration() const { return m_queryComputeConfiguration; }
  inline bool QueryComputeConfigurationHasBeenSet() const { return m_queryComputeConfigurationHasBeenSet; }
  template <typename QueryComputeConfigurationT = WorkerComputeConfiguration>
  void SetQueryComputeConfiguration(QueryComputeConfigurationT&& value) {
    m_queryComputeConfigurationHasBeenSet = true;
    m_queryComputeConfiguration = std::forward<QueryComputeConfigurationT>(value);
  }
  template <typename QueryComputeConfigurationT = WorkerComputeConfiguration>
  IntermediateTableComputeConfiguration& WithQueryComputeConfiguration(QueryComputeConfigurationT&& value) {
    SetQueryComputeConfiguration(std::forward<QueryComputeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  WorkerComputeConfiguration m_queryComputeConfiguration;
  bool m_queryComputeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
