/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/ManagedMicrovmImageVersion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

ManagedMicrovmImageVersion::ManagedMicrovmImageVersion(JsonView jsonValue) { *this = jsonValue; }

ManagedMicrovmImageVersion& ManagedMicrovmImageVersion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedMicrovmImageVersion::Jsonize() const {
  JsonValue payload;

  if (m_imageArnHasBeenSet) {
    payload.WithString("imageArn", m_imageArn);
  }

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
