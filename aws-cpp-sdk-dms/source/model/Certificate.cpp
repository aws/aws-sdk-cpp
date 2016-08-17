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
#include <aws/dms/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Certificate::Certificate() : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificateCreationDateHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateOwnerHasBeenSet(false),
    m_validFromDateHasBeenSet(false),
    m_validToDateHasBeenSet(false),
    m_signingAlgorithmHasBeenSet(false),
    m_keyLength(0),
    m_keyLengthHasBeenSet(false)
{
}

Certificate::Certificate(const JsonValue& jsonValue) : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificateCreationDateHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateOwnerHasBeenSet(false),
    m_validFromDateHasBeenSet(false),
    m_validToDateHasBeenSet(false),
    m_signingAlgorithmHasBeenSet(false),
    m_keyLength(0),
    m_keyLengthHasBeenSet(false)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CertificateIdentifier"))
  {
    m_certificateIdentifier = jsonValue.GetString("CertificateIdentifier");

    m_certificateIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateCreationDate"))
  {
    m_certificateCreationDate = jsonValue.GetDouble("CertificateCreationDate");

    m_certificateCreationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificatePem"))
  {
    m_certificatePem = jsonValue.GetString("CertificatePem");

    m_certificatePemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateOwner"))
  {
    m_certificateOwner = jsonValue.GetString("CertificateOwner");

    m_certificateOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidFromDate"))
  {
    m_validFromDate = jsonValue.GetDouble("ValidFromDate");

    m_validFromDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidToDate"))
  {
    m_validToDate = jsonValue.GetDouble("ValidToDate");

    m_validToDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningAlgorithm"))
  {
    m_signingAlgorithm = jsonValue.GetString("SigningAlgorithm");

    m_signingAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyLength"))
  {
    m_keyLength = jsonValue.GetInteger("KeyLength");

    m_keyLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateIdentifierHasBeenSet)
  {
   payload.WithString("CertificateIdentifier", m_certificateIdentifier);

  }

  if(m_certificateCreationDateHasBeenSet)
  {
   payload.WithDouble("CertificateCreationDate", m_certificateCreationDate.SecondsWithMSPrecision());
  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("CertificatePem", m_certificatePem);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_certificateOwnerHasBeenSet)
  {
   payload.WithString("CertificateOwner", m_certificateOwner);

  }

  if(m_validFromDateHasBeenSet)
  {
   payload.WithDouble("ValidFromDate", m_validFromDate.SecondsWithMSPrecision());
  }

  if(m_validToDateHasBeenSet)
  {
   payload.WithDouble("ValidToDate", m_validToDate.SecondsWithMSPrecision());
  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", m_signingAlgorithm);

  }

  if(m_keyLengthHasBeenSet)
  {
   payload.WithInteger("KeyLength", m_keyLength);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws