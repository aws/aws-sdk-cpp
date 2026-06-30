/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeDomainValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

AcmeDomainValidation::AcmeDomainValidation(JsonView jsonValue) { *this = jsonValue; }

AcmeDomainValidation& AcmeDomainValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcmeDomainValidationArn")) {
    m_acmeDomainValidationArn = jsonValue.GetString("AcmeDomainValidationArn");
    m_acmeDomainValidationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcmeEndpointArn")) {
    m_acmeEndpointArn = jsonValue.GetString("AcmeEndpointArn");
    m_acmeEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrevalidationType")) {
    m_prevalidationType = PrevalidationTypeMapper::GetPrevalidationTypeForName(jsonValue.GetString("PrevalidationType"));
    m_prevalidationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrevalidationDetails")) {
    m_prevalidationDetails = jsonValue.GetObject("PrevalidationDetails");
    m_prevalidationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AcmeDomainValidationStatusMapper::GetAcmeDomainValidationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureDetails")) {
    m_failureDetails = jsonValue.GetObject("FailureDetails");
    m_failureDetailsHasBeenSet = true;
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

JsonValue AcmeDomainValidation::Jsonize() const {
  JsonValue payload;

  if (m_acmeDomainValidationArnHasBeenSet) {
    payload.WithString("AcmeDomainValidationArn", m_acmeDomainValidationArn);
  }

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  if (m_prevalidationTypeHasBeenSet) {
    payload.WithString("PrevalidationType", PrevalidationTypeMapper::GetNameForPrevalidationType(m_prevalidationType));
  }

  if (m_prevalidationDetailsHasBeenSet) {
    payload.WithObject("PrevalidationDetails", m_prevalidationDetails.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AcmeDomainValidationStatusMapper::GetNameForAcmeDomainValidationStatus(m_status));
  }

  if (m_failureDetailsHasBeenSet) {
    payload.WithObject("FailureDetails", m_failureDetails.Jsonize());
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
