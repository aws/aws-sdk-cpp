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
#include <aws/apigateway/model/ClientCertificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

ClientCertificate::ClientCertificate() : 
    m_clientCertificateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pemEncodedCertificateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

ClientCertificate::ClientCertificate(const JsonValue& jsonValue) : 
    m_clientCertificateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pemEncodedCertificateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ClientCertificate& ClientCertificate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("clientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("clientCertificateId");

    m_clientCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pemEncodedCertificate"))
  {
    m_pemEncodedCertificate = jsonValue.GetString("pemEncodedCertificate");

    m_pemEncodedCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");

    m_expirationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_pemEncodedCertificateHasBeenSet)
  {
   payload.WithString("pemEncodedCertificate", m_pemEncodedCertificate);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws