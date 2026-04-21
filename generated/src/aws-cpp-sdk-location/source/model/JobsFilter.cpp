/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/JobsFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

JobsFilter::JobsFilter(JsonView jsonValue) { *this = jsonValue; }

JobsFilter& JobsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobStatus")) {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue JobsFilter::Jsonize() const {
  JsonValue payload;

  if (m_jobStatusHasBeenSet) {
    payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
