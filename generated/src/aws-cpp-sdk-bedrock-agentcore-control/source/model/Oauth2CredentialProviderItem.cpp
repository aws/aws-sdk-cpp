﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Oauth2CredentialProviderItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Oauth2CredentialProviderItem::Oauth2CredentialProviderItem(JsonView jsonValue) { *this = jsonValue; }

Oauth2CredentialProviderItem& Oauth2CredentialProviderItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderVendor")) {
    m_credentialProviderVendor =
        CredentialProviderVendorTypeMapper::GetCredentialProviderVendorTypeForName(jsonValue.GetString("credentialProviderVendor"));
    m_credentialProviderVendorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderArn")) {
    m_credentialProviderArn = jsonValue.GetString("credentialProviderArn");
    m_credentialProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTime")) {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Oauth2CredentialProviderItem::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_credentialProviderVendorHasBeenSet) {
    payload.WithString("credentialProviderVendor",
                       CredentialProviderVendorTypeMapper::GetNameForCredentialProviderVendorType(m_credentialProviderVendor));
  }

  if (m_credentialProviderArnHasBeenSet) {
    payload.WithString("credentialProviderArn", m_credentialProviderArn);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
