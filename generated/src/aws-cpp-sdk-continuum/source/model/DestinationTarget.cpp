/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/DestinationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

DestinationTarget::DestinationTarget(JsonView jsonValue) { *this = jsonValue; }

DestinationTarget& DestinationTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationTarget::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    payload.WithObject("s3", m_s3.Jsonize());
  }

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
