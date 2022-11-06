/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateDomainValidationOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCertificateManagerCertificateDomainValidationOption::AwsCertificateManagerCertificateDomainValidationOption() : 
    m_domainNameHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_validationDomainHasBeenSet(false),
    m_validationEmailsHasBeenSet(false),
    m_validationMethodHasBeenSet(false),
    m_validationStatusHasBeenSet(false)
{
}

AwsCertificateManagerCertificateDomainValidationOption::AwsCertificateManagerCertificateDomainValidationOption(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_validationDomainHasBeenSet(false),
    m_validationEmailsHasBeenSet(false),
    m_validationMethodHasBeenSet(false),
    m_validationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateDomainValidationOption& AwsCertificateManagerCertificateDomainValidationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRecord"))
  {
    m_resourceRecord = jsonValue.GetObject("ResourceRecord");

    m_resourceRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationDomain"))
  {
    m_validationDomain = jsonValue.GetString("ValidationDomain");

    m_validationDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationEmails"))
  {
    Aws::Utils::Array<JsonView> validationEmailsJsonList = jsonValue.GetArray("ValidationEmails");
    for(unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex)
    {
      m_validationEmails.push_back(validationEmailsJsonList[validationEmailsIndex].AsString());
    }
    m_validationEmailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationMethod"))
  {
    m_validationMethod = jsonValue.GetString("ValidationMethod");

    m_validationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationStatus"))
  {
    m_validationStatus = jsonValue.GetString("ValidationStatus");

    m_validationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateDomainValidationOption::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_resourceRecordHasBeenSet)
  {
   payload.WithObject("ResourceRecord", m_resourceRecord.Jsonize());

  }

  if(m_validationDomainHasBeenSet)
  {
   payload.WithString("ValidationDomain", m_validationDomain);

  }

  if(m_validationEmailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationEmailsJsonList(m_validationEmails.size());
   for(unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex)
   {
     validationEmailsJsonList[validationEmailsIndex].AsString(m_validationEmails[validationEmailsIndex]);
   }
   payload.WithArray("ValidationEmails", std::move(validationEmailsJsonList));

  }

  if(m_validationMethodHasBeenSet)
  {
   payload.WithString("ValidationMethod", m_validationMethod);

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("ValidationStatus", m_validationStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
