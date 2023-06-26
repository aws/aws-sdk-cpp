/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateDescription.h>
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

CertificateDescription::CertificateDescription() : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_caCertificateIdHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_previousOwnedByHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customerVersion(0),
    m_customerVersionHasBeenSet(false),
    m_transferDataHasBeenSet(false),
    m_generationIdHasBeenSet(false),
    m_validityHasBeenSet(false),
    m_certificateMode(CertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false)
{
}

CertificateDescription::CertificateDescription(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_caCertificateIdHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_previousOwnedByHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customerVersion(0),
    m_customerVersionHasBeenSet(false),
    m_transferDataHasBeenSet(false),
    m_generationIdHasBeenSet(false),
    m_validityHasBeenSet(false),
    m_certificateMode(CertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateDescription& CertificateDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("caCertificateId"))
  {
    m_caCertificateId = jsonValue.GetString("caCertificateId");

    m_caCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificatePem"))
  {
    m_certificatePem = jsonValue.GetString("certificatePem");

    m_certificatePemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownedBy"))
  {
    m_ownedBy = jsonValue.GetString("ownedBy");

    m_ownedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previousOwnedBy"))
  {
    m_previousOwnedBy = jsonValue.GetString("previousOwnedBy");

    m_previousOwnedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerVersion"))
  {
    m_customerVersion = jsonValue.GetInteger("customerVersion");

    m_customerVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferData"))
  {
    m_transferData = jsonValue.GetObject("transferData");

    m_transferDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");

    m_generationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validity"))
  {
    m_validity = jsonValue.GetObject("validity");

    m_validityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateMode"))
  {
    m_certificateMode = CertificateModeMapper::GetCertificateModeForName(jsonValue.GetString("certificateMode"));

    m_certificateModeHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateDescription::Jsonize() const
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

  if(m_caCertificateIdHasBeenSet)
  {
   payload.WithString("caCertificateId", m_caCertificateId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("certificatePem", m_certificatePem);

  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_previousOwnedByHasBeenSet)
  {
   payload.WithString("previousOwnedBy", m_previousOwnedBy);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_customerVersionHasBeenSet)
  {
   payload.WithInteger("customerVersion", m_customerVersion);

  }

  if(m_transferDataHasBeenSet)
  {
   payload.WithObject("transferData", m_transferData.Jsonize());

  }

  if(m_generationIdHasBeenSet)
  {
   payload.WithString("generationId", m_generationId);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithObject("validity", m_validity.Jsonize());

  }

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", CertificateModeMapper::GetNameForCertificateMode(m_certificateMode));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
