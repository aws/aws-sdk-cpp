/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedCertificate.h>
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

ListedCertificate::ListedCertificate() : 
    m_arnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_usage(CertificateUsageType::NOT_SET),
    m_usageHasBeenSet(false),
    m_status(CertificateStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ListedCertificate::ListedCertificate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_usage(CertificateUsageType::NOT_SET),
    m_usageHasBeenSet(false),
    m_status(CertificateStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ListedCertificate& ListedCertificate::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ListedCertificate::Jsonize() const
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

  if(m_activeDateHasBeenSet)
  {
   payload.WithDouble("ActiveDate", m_activeDate.SecondsWithMSPrecision());
  }

  if(m_inactiveDateHasBeenSet)
  {
   payload.WithDouble("InactiveDate", m_inactiveDate.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
