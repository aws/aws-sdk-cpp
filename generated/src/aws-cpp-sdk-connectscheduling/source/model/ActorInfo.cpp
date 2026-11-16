/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/ActorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {

ActorInfo::ActorInfo(JsonView jsonValue) { *this = jsonValue; }

ActorInfo& ActorInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConnectUserArn")) {
    m_connectUserArn = jsonValue.GetString("ConnectUserArn");
    m_connectUserArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AWSIdentityArn")) {
    m_aWSIdentityArn = jsonValue.GetString("AWSIdentityArn");
    m_aWSIdentityArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ActorInfo::Jsonize() const {
  JsonValue payload;

  if (m_connectUserArnHasBeenSet) {
    payload.WithString("ConnectUserArn", m_connectUserArn);
  }

  if (m_aWSIdentityArnHasBeenSet) {
    payload.WithString("AWSIdentityArn", m_aWSIdentityArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
