/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/MemberDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

MemberDetails::MemberDetails(JsonView jsonValue) { *this = jsonValue; }

MemberDetails& MemberDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  if (jsonValue.ValueExists("group")) {
    m_group = jsonValue.GetObject("group");
    m_groupHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberDetails::Jsonize() const {
  JsonValue payload;

  if (m_userHasBeenSet) {
    payload.WithObject("user", m_user.Jsonize());
  }

  if (m_groupHasBeenSet) {
    payload.WithObject("group", m_group.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
