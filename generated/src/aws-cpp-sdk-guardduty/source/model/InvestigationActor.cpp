/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationActor.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationActor::InvestigationActor(JsonView jsonValue) { *this = jsonValue; }

InvestigationActor& InvestigationActor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessKeyId")) {
    m_accessKeyId = jsonValue.GetString("accessKeyId");
    m_accessKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("principalId")) {
    m_principalId = jsonValue.GetString("principalId");
    m_principalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userType")) {
    m_userType = jsonValue.GetString("userType");
    m_userTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgent")) {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationActor::Jsonize() const {
  JsonValue payload;

  if (m_accessKeyIdHasBeenSet) {
    payload.WithString("accessKeyId", m_accessKeyId);
  }

  if (m_principalIdHasBeenSet) {
    payload.WithString("principalId", m_principalId);
  }

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_userTypeHasBeenSet) {
    payload.WithString("userType", m_userType);
  }

  if (m_userAgentHasBeenSet) {
    payload.WithString("userAgent", m_userAgent);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
