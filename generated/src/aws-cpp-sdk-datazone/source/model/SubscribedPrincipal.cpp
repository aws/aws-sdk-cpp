/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SubscribedPrincipal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SubscribedPrincipal::SubscribedPrincipal(JsonView jsonValue) { *this = jsonValue; }

SubscribedPrincipal& SubscribedPrincipal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("project")) {
    m_project = jsonValue.GetObject("project");
    m_projectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  if (jsonValue.ValueExists("group")) {
    m_group = jsonValue.GetObject("group");
    m_groupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iam")) {
    m_iam = jsonValue.GetObject("iam");
    m_iamHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedPrincipal::Jsonize() const {
  JsonValue payload;

  if (m_projectHasBeenSet) {
    payload.WithObject("project", m_project.Jsonize());
  }

  if (m_userHasBeenSet) {
    payload.WithObject("user", m_user.Jsonize());
  }

  if (m_groupHasBeenSet) {
    payload.WithObject("group", m_group.Jsonize());
  }

  if (m_iamHasBeenSet) {
    payload.WithObject("iam", m_iam.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
