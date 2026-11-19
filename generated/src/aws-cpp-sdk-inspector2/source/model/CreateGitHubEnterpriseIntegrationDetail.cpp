/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/CreateGitHubEnterpriseIntegrationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

CreateGitHubEnterpriseIntegrationDetail::CreateGitHubEnterpriseIntegrationDetail(JsonView jsonValue) { *this = jsonValue; }

CreateGitHubEnterpriseIntegrationDetail& CreateGitHubEnterpriseIntegrationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceUrl")) {
    m_instanceUrl = jsonValue.GetString("instanceUrl");
    m_instanceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfiguration")) {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateGitHubEnterpriseIntegrationDetail::Jsonize() const {
  JsonValue payload;

  if (m_instanceUrlHasBeenSet) {
    payload.WithString("instanceUrl", m_instanceUrl);
  }

  if (m_vpcConfigurationHasBeenSet) {
    payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
