﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/JobOutputSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {

JobOutputSource::JobOutputSource(JsonView jsonValue) { *this = jsonValue; }

JobOutputSource& JobOutputSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputS3Path")) {
    m_outputS3Path = jsonValue.GetString("outputS3Path");
    m_outputS3PathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KMSArn")) {
    m_kMSArn = jsonValue.GetString("KMSArn");
    m_kMSArnHasBeenSet = true;
  }
  return *this;
}

JsonValue JobOutputSource::Jsonize() const {
  JsonValue payload;

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_outputS3PathHasBeenSet) {
    payload.WithString("outputS3Path", m_outputS3Path);
  }

  if (m_kMSArnHasBeenSet) {
    payload.WithString("KMSArn", m_kMSArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
