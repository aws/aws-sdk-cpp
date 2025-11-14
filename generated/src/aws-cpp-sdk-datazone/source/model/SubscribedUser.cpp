/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SubscribedUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SubscribedUser::SubscribedUser(JsonView jsonValue) { *this = jsonValue; }

SubscribedUser& SubscribedUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetObject("details");
    m_detailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedUser::Jsonize() const {
  JsonValue payload;

  if (m_detailsHasBeenSet) {
    payload.WithObject("details", m_details.Jsonize());
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
