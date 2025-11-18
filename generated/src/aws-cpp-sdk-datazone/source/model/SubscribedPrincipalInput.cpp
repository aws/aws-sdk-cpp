/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SubscribedPrincipalInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SubscribedPrincipalInput::SubscribedPrincipalInput(JsonView jsonValue) { *this = jsonValue; }

SubscribedPrincipalInput& SubscribedPrincipalInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("group")) {
    m_group = jsonValue.GetObject("group");
    m_groupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("project")) {
    m_project = jsonValue.GetObject("project");
    m_projectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedPrincipalInput::Jsonize() const {
  JsonValue payload;

  if (m_groupHasBeenSet) {
    payload.WithObject("group", m_group.Jsonize());
  }

  if (m_projectHasBeenSet) {
    payload.WithObject("project", m_project.Jsonize());
  }

  if (m_userHasBeenSet) {
    payload.WithObject("user", m_user.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
