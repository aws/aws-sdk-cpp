/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/ObjectStorageFederatedIdentityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

ObjectStorageFederatedIdentityConfig::ObjectStorageFederatedIdentityConfig(JsonView jsonValue) { *this = jsonValue; }

ObjectStorageFederatedIdentityConfig& ObjectStorageFederatedIdentityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsIamRole")) {
    m_awsIamRole = jsonValue.GetString("AwsIamRole");
    m_awsIamRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExternalIdentity")) {
    m_externalIdentity = jsonValue.GetObject("ExternalIdentity");
    m_externalIdentityHasBeenSet = true;
  }
  return *this;
}

JsonValue ObjectStorageFederatedIdentityConfig::Jsonize() const {
  JsonValue payload;

  if (m_awsIamRoleHasBeenSet) {
    payload.WithString("AwsIamRole", m_awsIamRole);
  }

  if (m_externalIdentityHasBeenSet) {
    payload.WithObject("ExternalIdentity", m_externalIdentity.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
