/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/DiversityColumn.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

DiversityColumn::DiversityColumn(JsonView jsonValue) { *this = jsonValue; }

DiversityColumn& DiversityColumn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapType")) {
    m_capType = DiversityCapTypeMapper::GetDiversityCapTypeForName(jsonValue.GetString("CapType"));
    m_capTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Target")) {
    m_target = jsonValue.GetString("Target");
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue DiversityColumn::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_capTypeHasBeenSet) {
    payload.WithString("CapType", DiversityCapTypeMapper::GetNameForDiversityCapType(m_capType));
  }

  if (m_targetHasBeenSet) {
    payload.WithString("Target", m_target);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
