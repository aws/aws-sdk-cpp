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
#include <aws/acm/model/DomainValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

DomainValidation::DomainValidation() : 
    m_domainNameHasBeenSet(false),
    m_validationEmailsHasBeenSet(false),
    m_validationDomainHasBeenSet(false)
{
}

DomainValidation::DomainValidation(const JsonValue& jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_validationEmailsHasBeenSet(false),
    m_validationDomainHasBeenSet(false)
{
  *this = jsonValue;
}

DomainValidation& DomainValidation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationEmails"))
  {
    Array<JsonValue> validationEmailsJsonList = jsonValue.GetArray("ValidationEmails");
    for(unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex)
    {
      m_validationEmails.push_back(validationEmailsJsonList[validationEmailsIndex].AsString());
    }
    m_validationEmailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationDomain"))
  {
    m_validationDomain = jsonValue.GetString("ValidationDomain");

    m_validationDomainHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainValidation::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_validationEmailsHasBeenSet)
  {
   Array<JsonValue> validationEmailsJsonList(m_validationEmails.size());
   for(unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex)
   {
     validationEmailsJsonList[validationEmailsIndex].AsString(m_validationEmails[validationEmailsIndex]);
   }
   payload.WithArray("ValidationEmails", std::move(validationEmailsJsonList));

  }

  if(m_validationDomainHasBeenSet)
  {
   payload.WithString("ValidationDomain", m_validationDomain);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws