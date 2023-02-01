/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CustomDomain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

CustomDomain::CustomDomain() : 
    m_domainNameHasBeenSet(false),
    m_enableWWWSubdomain(false),
    m_enableWWWSubdomainHasBeenSet(false),
    m_certificateValidationRecordsHasBeenSet(false),
    m_status(CustomDomainAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CustomDomain::CustomDomain(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_enableWWWSubdomain(false),
    m_enableWWWSubdomainHasBeenSet(false),
    m_certificateValidationRecordsHasBeenSet(false),
    m_status(CustomDomainAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDomain& CustomDomain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableWWWSubdomain"))
  {
    m_enableWWWSubdomain = jsonValue.GetBool("EnableWWWSubdomain");

    m_enableWWWSubdomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateValidationRecords"))
  {
    Aws::Utils::Array<JsonView> certificateValidationRecordsJsonList = jsonValue.GetArray("CertificateValidationRecords");
    for(unsigned certificateValidationRecordsIndex = 0; certificateValidationRecordsIndex < certificateValidationRecordsJsonList.GetLength(); ++certificateValidationRecordsIndex)
    {
      m_certificateValidationRecords.push_back(certificateValidationRecordsJsonList[certificateValidationRecordsIndex].AsObject());
    }
    m_certificateValidationRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CustomDomainAssociationStatusMapper::GetCustomDomainAssociationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDomain::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_enableWWWSubdomainHasBeenSet)
  {
   payload.WithBool("EnableWWWSubdomain", m_enableWWWSubdomain);

  }

  if(m_certificateValidationRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateValidationRecordsJsonList(m_certificateValidationRecords.size());
   for(unsigned certificateValidationRecordsIndex = 0; certificateValidationRecordsIndex < certificateValidationRecordsJsonList.GetLength(); ++certificateValidationRecordsIndex)
   {
     certificateValidationRecordsJsonList[certificateValidationRecordsIndex].AsObject(m_certificateValidationRecords[certificateValidationRecordsIndex].Jsonize());
   }
   payload.WithArray("CertificateValidationRecords", std::move(certificateValidationRecordsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CustomDomainAssociationStatusMapper::GetNameForCustomDomainAssociationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
