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
    m_validationDomainHasBeenSet(false),
    m_validationStatus(DomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_validationMethod(ValidationMethod::NOT_SET),
    m_validationMethodHasBeenSet(false)
{
}

DomainValidation::DomainValidation(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_validationEmailsHasBeenSet(false),
    m_validationDomainHasBeenSet(false),
    m_validationStatus(DomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_validationMethod(ValidationMethod::NOT_SET),
    m_validationMethodHasBeenSet(false)
{
  *this = jsonValue;
}

DomainValidation& DomainValidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationEmails"))
  {
    Array<JsonView> validationEmailsJsonList = jsonValue.GetArray("ValidationEmails");
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

  if(jsonValue.ValueExists("ValidationStatus"))
  {
    m_validationStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("ValidationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRecord"))
  {
    m_resourceRecord = jsonValue.GetObject("ResourceRecord");

    m_resourceRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationMethod"))
  {
    m_validationMethod = ValidationMethodMapper::GetValidationMethodForName(jsonValue.GetString("ValidationMethod"));

    m_validationMethodHasBeenSet = true;
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

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("ValidationStatus", DomainStatusMapper::GetNameForDomainStatus(m_validationStatus));
  }

  if(m_resourceRecordHasBeenSet)
  {
   payload.WithObject("ResourceRecord", m_resourceRecord.Jsonize());

  }

  if(m_validationMethodHasBeenSet)
  {
   payload.WithString("ValidationMethod", ValidationMethodMapper::GetNameForValidationMethod(m_validationMethod));
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
