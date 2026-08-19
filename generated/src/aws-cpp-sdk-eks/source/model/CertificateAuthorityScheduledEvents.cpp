/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CertificateAuthorityScheduledEvents.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CertificateAuthorityScheduledEvents::CertificateAuthorityScheduledEvents(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthorityScheduledEvents& CertificateAuthorityScheduledEvents::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("firstAutoActivation")) {
    m_firstAutoActivation = jsonValue.GetDouble("firstAutoActivation");
    m_firstAutoActivationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("finalAutoActivation")) {
    m_finalAutoActivation = jsonValue.GetDouble("finalAutoActivation");
    m_finalAutoActivationHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAuthorityScheduledEvents::Jsonize() const {
  JsonValue payload;

  if (m_firstAutoActivationHasBeenSet) {
    payload.WithDouble("firstAutoActivation", m_firstAutoActivation.SecondsWithMSPrecision());
  }

  if (m_finalAutoActivationHasBeenSet) {
    payload.WithDouble("finalAutoActivation", m_finalAutoActivation.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
