/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/TerminateJobsErrorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

TerminateJobsErrorDetail::TerminateJobsErrorDetail(JsonView jsonValue) { *this = jsonValue; }

TerminateJobsErrorDetail& TerminateJobsErrorDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("job")) {
    m_job = jsonValue.GetString("job");
    m_jobHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue TerminateJobsErrorDetail::Jsonize() const {
  JsonValue payload;

  if (m_jobHasBeenSet) {
    payload.WithString("job", m_job);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
