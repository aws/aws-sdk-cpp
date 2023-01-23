/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedCertificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedCertificate::DescribedCertificate() : 
    m_arnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_usage(CertificateUsageType::NOT_SET),
    m_usageHasBeenSet(false),
    m_status(CertificateStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_notBeforeDateHasBeenSet(false),
    m_notAfterDateHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DescribedCertificate::DescribedCertificate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_usage(CertificateUsageType::NOT_SET),
    m_usageHasBeenSet(false),
    m_status(CertificateStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_notBeforeDateHasBeenSet(false),
    m_notAfterDateHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedCertificate& DescribedCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Usage"))
  {
    m_usage = CertificateUsageTypeMapper::GetCertificateUsageTypeForName(jsonValue.GetString("Usage"));

    m_usageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateStatusTypeMapper::GetCertificateStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateChain"))
  {
    m_certificateChain = jsonValue.GetString("CertificateChain");

    m_certificateChainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveDate"))
  {
    m_activeDate = jsonValue.GetDouble("ActiveDate");

    m_activeDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InactiveDate"))
  {
    m_inactiveDate = jsonValue.GetDouble("InactiveDate");

    m_inactiveDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Serial"))
  {
    m_serial = jsonValue.GetString("Serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotBeforeDate"))
  {
    m_notBeforeDate = jsonValue.GetDouble("NotBeforeDate");

    m_notBeforeDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotAfterDate"))
  {
    m_notAfterDate = jsonValue.GetDouble("NotAfterDate");

    m_notAfterDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_usageHasBeenSet)
  {
   payload.WithString("Usage", CertificateUsageTypeMapper::GetNameForCertificateUsageType(m_usage));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateStatusTypeMapper::GetNameForCertificateStatusType(m_status));
  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("CertificateChain", m_certificateChain);

  }

  if(m_activeDateHasBeenSet)
  {
   payload.WithDouble("ActiveDate", m_activeDate.SecondsWithMSPrecision());
  }

  if(m_inactiveDateHasBeenSet)
  {
   payload.WithDouble("InactiveDate", m_inactiveDate.SecondsWithMSPrecision());
  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("Serial", m_serial);

  }

  if(m_notBeforeDateHasBeenSet)
  {
   payload.WithDouble("NotBeforeDate", m_notBeforeDate.SecondsWithMSPrecision());
  }

  if(m_notAfterDateHasBeenSet)
  {
   payload.WithDouble("NotAfterDate", m_notAfterDate.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
