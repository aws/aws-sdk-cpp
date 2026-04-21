/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {

/**
 * <p>Criteria for filtering jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/JobsFilter">AWS
 * API Reference</a></p>
 */
class JobsFilter {
 public:
  AWS_LOCATIONSERVICE_API JobsFilter() = default;
  AWS_LOCATIONSERVICE_API JobsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API JobsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by job status.</p>
   */
  inline JobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(JobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline JobsFilter& WithJobStatus(JobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}
 private:
  JobStatus m_jobStatus{JobStatus::NOT_SET};
  bool m_jobStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
