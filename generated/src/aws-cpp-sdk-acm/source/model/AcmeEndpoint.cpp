/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

AcmeEndpoint::AcmeEndpoint(JsonView jsonValue) { *this = jsonValue; }

AcmeEndpoint& AcmeEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcmeEndpointArn")) {
    m_acmeEndpointArn = jsonValue.GetString("AcmeEndpointArn");
    m_acmeEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndpointUrl")) {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");
    m_endpointUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AcmeEndpointStatusMapper::GetAcmeEndpointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthorizationBehavior")) {
    m_authorizationBehavior =
        AcmeAuthorizationBehaviorMapper::GetAcmeAuthorizationBehaviorForName(jsonValue.GetString("AuthorizationBehavior"));
    m_authorizationBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Contact")) {
    m_contact = AcmeContactMapper::GetAcmeContactForName(jsonValue.GetString("Contact"));
    m_contactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateAuthority")) {
    m_certificateAuthority = jsonValue.GetObject("CertificateAuthority");
    m_certificateAuthorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateTags")) {
    Aws::Utils::Array<JsonView> certificateTagsJsonList = jsonValue.GetArray("CertificateTags");
    for (unsigned certificateTagsIndex = 0; certificateTagsIndex < certificateTagsJsonList.GetLength(); ++certificateTagsIndex) {
      m_certificateTags.push_back(certificateTagsJsonList[certificateTagsIndex].AsObject());
    }
    m_certificateTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AcmeEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
  }

  if (m_endpointUrlHasBeenSet) {
    payload.WithString("EndpointUrl", m_endpointUrl);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AcmeEndpointStatusMapper::GetNameForAcmeEndpointStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_authorizationBehaviorHasBeenSet) {
    payload.WithString("AuthorizationBehavior",
                       AcmeAuthorizationBehaviorMapper::GetNameForAcmeAuthorizationBehavior(m_authorizationBehavior));
  }

  if (m_contactHasBeenSet) {
    payload.WithString("Contact", AcmeContactMapper::GetNameForAcmeContact(m_contact));
  }

  if (m_certificateAuthorityHasBeenSet) {
    payload.WithObject("CertificateAuthority", m_certificateAuthority.Jsonize());
  }

  if (m_certificateTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> certificateTagsJsonList(m_certificateTags.size());
    for (unsigned certificateTagsIndex = 0; certificateTagsIndex < certificateTagsJsonList.GetLength(); ++certificateTagsIndex) {
      certificateTagsJsonList[certificateTagsIndex].AsObject(m_certificateTags[certificateTagsIndex].Jsonize());
    }
    payload.WithArray("CertificateTags", std::move(certificateTagsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
