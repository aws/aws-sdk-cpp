/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BooleanCondition.h>
#include <aws/connectcases/model/CompoundCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BooleanCondition::BooleanCondition(JsonView jsonValue) { *this = jsonValue; }

BooleanCondition& BooleanCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("equalTo")) {
    m_equalTo = jsonValue.GetObject("equalTo");
    m_equalToHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notEqualTo")) {
    m_notEqualTo = jsonValue.GetObject("notEqualTo");
    m_notEqualToHasBeenSet = true;
  }
  if (jsonValue.ValueExists("andAll")) {
    m_andAll = Aws::MakeShared<CompoundCondition>("BooleanCondition", jsonValue.GetObject("andAll"));
    m_andAllHasBeenSet = true;
  }
  if (jsonValue.ValueExists("orAll")) {
    m_orAll = Aws::MakeShared<CompoundCondition>("BooleanCondition", jsonValue.GetObject("orAll"));
    m_orAllHasBeenSet = true;
  }
  return *this;
}

JsonValue BooleanCondition::Jsonize() const {
  JsonValue payload;

  if (m_equalToHasBeenSet) {
    payload.WithObject("equalTo", m_equalTo.Jsonize());
  }

  if (m_notEqualToHasBeenSet) {
    payload.WithObject("notEqualTo", m_notEqualTo.Jsonize());
  }

  if (m_andAllHasBeenSet) {
    payload.WithObject("andAll", m_andAll->Jsonize());
  }

  if (m_orAllHasBeenSet) {
    payload.WithObject("orAll", m_orAll->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
