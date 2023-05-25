/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CACertificate.h>
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

CACertificate::CACertificate() : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CACertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

CACertificate::CACertificate(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(CACertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

CACertificate& CACertificate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue CACertificate::Jsonize() const
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

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
