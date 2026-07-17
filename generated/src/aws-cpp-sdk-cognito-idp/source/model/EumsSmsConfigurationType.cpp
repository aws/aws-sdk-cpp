/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EumsSmsConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

EumsSmsConfigurationType::EumsSmsConfigurationType(JsonView jsonValue) { *this = jsonValue; }

EumsSmsConfigurationType& EumsSmsConfigurationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CallerArn")) {
    m_callerArn = jsonValue.GetString("CallerArn");
    m_callerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExternalId")) {
    m_externalId = jsonValue.GetString("ExternalId");
    m_externalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginationIdentity")) {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");
    m_originationIdentityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfigurationSetName")) {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");
    m_configurationSetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InEntityId")) {
    m_inEntityId = jsonValue.GetString("InEntityId");
    m_inEntityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InTemplateId")) {
    m_inTemplateId = jsonValue.GetString("InTemplateId");
    m_inTemplateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue EumsSmsConfigurationType::Jsonize() const {
  JsonValue payload;

  if (m_callerArnHasBeenSet) {
    payload.WithString("CallerArn", m_callerArn);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("ExternalId", m_externalId);
  }

  if (m_originationIdentityHasBeenSet) {
    payload.WithString("OriginationIdentity", m_originationIdentity);
  }

  if (m_configurationSetNameHasBeenSet) {
    payload.WithString("ConfigurationSetName", m_configurationSetName);
  }

  if (m_inEntityIdHasBeenSet) {
    payload.WithString("InEntityId", m_inEntityId);
  }

  if (m_inTemplateIdHasBeenSet) {
    payload.WithString("InTemplateId", m_inTemplateId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
