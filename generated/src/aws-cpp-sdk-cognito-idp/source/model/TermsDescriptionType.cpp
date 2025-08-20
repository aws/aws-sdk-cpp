/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TermsDescriptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

TermsDescriptionType::TermsDescriptionType(JsonView jsonValue)
{
  *this = jsonValue;
}

TermsDescriptionType& TermsDescriptionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TermsId"))
  {
    m_termsId = jsonValue.GetString("TermsId");
    m_termsIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TermsName"))
  {
    m_termsName = jsonValue.GetString("TermsName");
    m_termsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enforcement"))
  {
    m_enforcement = TermsEnforcementTypeMapper::GetTermsEnforcementTypeForName(jsonValue.GetString("Enforcement"));
    m_enforcementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue TermsDescriptionType::Jsonize() const
{
  JsonValue payload;

  if(m_termsIdHasBeenSet)
  {
   payload.WithString("TermsId", m_termsId);

  }

  if(m_termsNameHasBeenSet)
  {
   payload.WithString("TermsName", m_termsName);

  }

  if(m_enforcementHasBeenSet)
  {
   payload.WithString("Enforcement", TermsEnforcementTypeMapper::GetNameForTermsEnforcementType(m_enforcement));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
