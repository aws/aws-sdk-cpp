/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksSeccompProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

EksSeccompProfile::EksSeccompProfile(JsonView jsonValue) { *this = jsonValue; }

EksSeccompProfile& EksSeccompProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = EksSeccompProfileTypeMapper::GetEksSeccompProfileTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localhostProfile")) {
    m_localhostProfile = jsonValue.GetString("localhostProfile");
    m_localhostProfileHasBeenSet = true;
  }
  return *this;
}

JsonValue EksSeccompProfile::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", EksSeccompProfileTypeMapper::GetNameForEksSeccompProfileType(m_type));
  }

  if (m_localhostProfileHasBeenSet) {
    payload.WithString("localhostProfile", m_localhostProfile);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
