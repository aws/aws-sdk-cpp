/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/LatestVersionReferences.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

LatestVersionReferences::LatestVersionReferences(JsonView jsonValue) { *this = jsonValue; }

LatestVersionReferences& LatestVersionReferences::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("latestVersionArn")) {
    m_latestVersionArn = jsonValue.GetString("latestVersionArn");
    m_latestVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestMajorVersionArn")) {
    m_latestMajorVersionArn = jsonValue.GetString("latestMajorVersionArn");
    m_latestMajorVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestMinorVersionArn")) {
    m_latestMinorVersionArn = jsonValue.GetString("latestMinorVersionArn");
    m_latestMinorVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestPatchVersionArn")) {
    m_latestPatchVersionArn = jsonValue.GetString("latestPatchVersionArn");
    m_latestPatchVersionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LatestVersionReferences::Jsonize() const {
  JsonValue payload;

  if (m_latestVersionArnHasBeenSet) {
    payload.WithString("latestVersionArn", m_latestVersionArn);
  }

  if (m_latestMajorVersionArnHasBeenSet) {
    payload.WithString("latestMajorVersionArn", m_latestMajorVersionArn);
  }

  if (m_latestMinorVersionArnHasBeenSet) {
    payload.WithString("latestMinorVersionArn", m_latestMinorVersionArn);
  }

  if (m_latestPatchVersionArnHasBeenSet) {
    payload.WithString("latestPatchVersionArn", m_latestPatchVersionArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
