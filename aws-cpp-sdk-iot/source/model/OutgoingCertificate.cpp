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
#include <aws/iot/model/OutgoingCertificate.h>
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

OutgoingCertificate::OutgoingCertificate() : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_transferredToHasBeenSet(false),
    m_transferDateHasBeenSet(false),
    m_transferMessageHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

OutgoingCertificate::OutgoingCertificate(const JsonValue& jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_transferredToHasBeenSet(false),
    m_transferDateHasBeenSet(false),
    m_transferMessageHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

OutgoingCertificate& OutgoingCertificate::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("transferredTo"))
  {
    m_transferredTo = jsonValue.GetString("transferredTo");

    m_transferredToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferDate"))
  {
    m_transferDate = jsonValue.GetDouble("transferDate");

    m_transferDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferMessage"))
  {
    m_transferMessage = jsonValue.GetString("transferMessage");

    m_transferMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue OutgoingCertificate::Jsonize() const
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

  if(m_transferredToHasBeenSet)
  {
   payload.WithString("transferredTo", m_transferredTo);

  }

  if(m_transferDateHasBeenSet)
  {
   payload.WithDouble("transferDate", m_transferDate.SecondsWithMSPrecision());
  }

  if(m_transferMessageHasBeenSet)
  {
   payload.WithString("transferMessage", m_transferMessage);

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