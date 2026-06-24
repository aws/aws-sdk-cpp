/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/SnapshotBuild.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

SnapshotBuild::SnapshotBuild(JsonView jsonValue) { *this = jsonValue; }

SnapshotBuild& SnapshotBuild::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memorySnapshotSizeInBytes")) {
    m_memorySnapshotSizeInBytes = jsonValue.GetInt64("memorySnapshotSizeInBytes");
    m_memorySnapshotSizeInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeInstallSizeInBytes")) {
    m_codeInstallSizeInBytes = jsonValue.GetInt64("codeInstallSizeInBytes");
    m_codeInstallSizeInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("diskSnapshotSizeInBytes")) {
    m_diskSnapshotSizeInBytes = jsonValue.GetInt64("diskSnapshotSizeInBytes");
    m_diskSnapshotSizeInBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotBuild::Jsonize() const {
  JsonValue payload;

  if (m_memorySnapshotSizeInBytesHasBeenSet) {
    payload.WithInt64("memorySnapshotSizeInBytes", m_memorySnapshotSizeInBytes);
  }

  if (m_codeInstallSizeInBytesHasBeenSet) {
    payload.WithInt64("codeInstallSizeInBytes", m_codeInstallSizeInBytes);
  }

  if (m_diskSnapshotSizeInBytesHasBeenSet) {
    payload.WithInt64("diskSnapshotSizeInBytes", m_diskSnapshotSizeInBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
