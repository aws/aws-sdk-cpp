/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/CertificateAuthority.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

CertificateAuthority::CertificateAuthority(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthority& CertificateAuthority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CertificateArn")) {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateData")) {
    m_certificateData = jsonValue.GetString("CertificateData");
    m_certificateDataHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAuthority::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_certificateDataHasBeenSet) {
    payload.WithString("CertificateData", m_certificateData);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
