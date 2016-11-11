/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_transferDataHasBeenSet(false)
{
}

CertificateDescription::CertificateDescription(const JsonValue& jsonValue) : 
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
    m_transferDataHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateDescription& CertificateDescription::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("transferData"))
  {
    m_transferData = jsonValue.GetObject("transferData");

    m_transferDataHasBeenSet = true;
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

  if(m_transferDataHasBeenSet)
  {
   payload.WithObject("transferData", m_transferData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws