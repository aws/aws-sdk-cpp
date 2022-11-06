/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMailDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMailDomainResult::GetMailDomainResult() : 
    m_isTestDomain(false),
    m_isDefault(false),
    m_ownershipVerificationStatus(DnsRecordVerificationStatus::NOT_SET),
    m_dkimVerificationStatus(DnsRecordVerificationStatus::NOT_SET)
{
}

GetMailDomainResult::GetMailDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isTestDomain(false),
    m_isDefault(false),
    m_ownershipVerificationStatus(DnsRecordVerificationStatus::NOT_SET),
    m_dkimVerificationStatus(DnsRecordVerificationStatus::NOT_SET)
{
  *this = result;
}

GetMailDomainResult& GetMailDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("IsTestDomain"))
  {
    m_isTestDomain = jsonValue.GetBool("IsTestDomain");

  }

  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");

  }

  if(jsonValue.ValueExists("OwnershipVerificationStatus"))
  {
    m_ownershipVerificationStatus = DnsRecordVerificationStatusMapper::GetDnsRecordVerificationStatusForName(jsonValue.GetString("OwnershipVerificationStatus"));

  }

  if(jsonValue.ValueExists("DkimVerificationStatus"))
  {
    m_dkimVerificationStatus = DnsRecordVerificationStatusMapper::GetDnsRecordVerificationStatusForName(jsonValue.GetString("DkimVerificationStatus"));

  }



  return *this;
}
