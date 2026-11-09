/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/AzureFederatedIdentityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

AzureFederatedIdentityConfig::AzureFederatedIdentityConfig(JsonView jsonValue) { *this = jsonValue; }

AzureFederatedIdentityConfig& AzureFederatedIdentityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsIamRole")) {
    m_awsIamRole = jsonValue.GetString("AwsIamRole");
    m_awsIamRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AzureOidc")) {
    m_azureOidc = jsonValue.GetObject("AzureOidc");
    m_azureOidcHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureFederatedIdentityConfig::Jsonize() const {
  JsonValue payload;

  if (m_awsIamRoleHasBeenSet) {
    payload.WithString("AwsIamRole", m_awsIamRole);
  }

  if (m_azureOidcHasBeenSet) {
    payload.WithObject("AzureOidc", m_azureOidc.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
