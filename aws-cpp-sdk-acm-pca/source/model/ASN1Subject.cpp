﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/acm-pca/model/ASN1Subject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

ASN1Subject::ASN1Subject() : 
    m_countryHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_organizationalUnitHasBeenSet(false),
    m_distinguishedNameQualifierHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_localityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_initialsHasBeenSet(false),
    m_pseudonymHasBeenSet(false),
    m_generationQualifierHasBeenSet(false)
{
}

ASN1Subject::ASN1Subject(JsonView jsonValue) : 
    m_countryHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_organizationalUnitHasBeenSet(false),
    m_distinguishedNameQualifierHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_localityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_initialsHasBeenSet(false),
    m_pseudonymHasBeenSet(false),
    m_generationQualifierHasBeenSet(false)
{
  *this = jsonValue;
}

ASN1Subject& ASN1Subject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Organization"))
  {
    m_organization = jsonValue.GetString("Organization");

    m_organizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnit"))
  {
    m_organizationalUnit = jsonValue.GetString("OrganizationalUnit");

    m_organizationalUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistinguishedNameQualifier"))
  {
    m_distinguishedNameQualifier = jsonValue.GetString("DistinguishedNameQualifier");

    m_distinguishedNameQualifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommonName"))
  {
    m_commonName = jsonValue.GetString("CommonName");

    m_commonNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locality"))
  {
    m_locality = jsonValue.GetString("Locality");

    m_localityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");

    m_surnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");

    m_givenNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Initials"))
  {
    m_initials = jsonValue.GetString("Initials");

    m_initialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pseudonym"))
  {
    m_pseudonym = jsonValue.GetString("Pseudonym");

    m_pseudonymHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationQualifier"))
  {
    m_generationQualifier = jsonValue.GetString("GenerationQualifier");

    m_generationQualifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ASN1Subject::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_organizationHasBeenSet)
  {
   payload.WithString("Organization", m_organization);

  }

  if(m_organizationalUnitHasBeenSet)
  {
   payload.WithString("OrganizationalUnit", m_organizationalUnit);

  }

  if(m_distinguishedNameQualifierHasBeenSet)
  {
   payload.WithString("DistinguishedNameQualifier", m_distinguishedNameQualifier);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("CommonName", m_commonName);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("SerialNumber", m_serialNumber);

  }

  if(m_localityHasBeenSet)
  {
   payload.WithString("Locality", m_locality);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_initialsHasBeenSet)
  {
   payload.WithString("Initials", m_initials);

  }

  if(m_pseudonymHasBeenSet)
  {
   payload.WithString("Pseudonym", m_pseudonym);

  }

  if(m_generationQualifierHasBeenSet)
  {
   payload.WithString("GenerationQualifier", m_generationQualifier);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
