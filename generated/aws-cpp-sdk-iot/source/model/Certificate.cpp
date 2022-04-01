/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Certificate::Certificate() : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateMode(CertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

Certificate::Certificate(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateMode(CertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateId"))
  {
    m_certificateId = jsonValue.GetString("certificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateMode"))
  {
    m_certificateMode = CertificateModeMapper::GetCertificateModeForName(jsonValue.GetString("certificateMode"));

    m_certificateModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("certificateId", m_certificateId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", CertificateModeMapper::GetNameForCertificateMode(m_certificateMode));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
