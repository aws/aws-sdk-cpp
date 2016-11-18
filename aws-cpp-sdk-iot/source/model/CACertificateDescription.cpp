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
#include <aws/iot/model/CACertificateDescription.h>
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

CACertificateDescription::CACertificateDescription() : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CACertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_autoRegistrationStatus(AutoRegistrationStatus::NOT_SET),
    m_autoRegistrationStatusHasBeenSet(false)
{
}

CACertificateDescription::CACertificateDescription(const JsonValue& jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CACertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_autoRegistrationStatus(AutoRegistrationStatus::NOT_SET),
    m_autoRegistrationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CACertificateDescription& CACertificateDescription::operator =(const JsonValue& jsonValue)
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
    m_status = CACertificateStatusMapper::GetCACertificateStatusForName(jsonValue.GetString("status"));

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

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoRegistrationStatus"))
  {
    m_autoRegistrationStatus = AutoRegistrationStatusMapper::GetAutoRegistrationStatusForName(jsonValue.GetString("autoRegistrationStatus"));

    m_autoRegistrationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CACertificateDescription::Jsonize() const
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
   payload.WithString("status", CACertificateStatusMapper::GetNameForCACertificateStatus(m_status));
  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("certificatePem", m_certificatePem);

  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_autoRegistrationStatusHasBeenSet)
  {
   payload.WithString("autoRegistrationStatus", AutoRegistrationStatusMapper::GetNameForAutoRegistrationStatus(m_autoRegistrationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws