/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/CloudDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

CloudDetails::CloudDetails(JsonView jsonValue) { *this = jsonValue; }

CloudDetails& CloudDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("provider")) {
    m_provider = CloudProviderMapper::GetCloudProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("account")) {
    m_account = jsonValue.GetString("account");
    m_accountHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudDetails::Jsonize() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithString("provider", CloudProviderMapper::GetNameForCloudProvider(m_provider));
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_accountHasBeenSet) {
    payload.WithString("account", m_account);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
