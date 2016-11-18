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
#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainDetailResult::GetDomainDetailResult() : 
    m_autoRenew(false),
    m_adminPrivacy(false),
    m_registrantPrivacy(false),
    m_techPrivacy(false)
{
}

GetDomainDetailResult::GetDomainDetailResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_autoRenew(false),
    m_adminPrivacy(false),
    m_registrantPrivacy(false),
    m_techPrivacy(false)
{
  *this = result;
}

GetDomainDetailResult& GetDomainDetailResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("Nameservers"))
  {
    Array<JsonValue> nameserversJsonList = jsonValue.GetArray("Nameservers");
    for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
    {
      m_nameservers.push_back(nameserversJsonList[nameserversIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = jsonValue.GetBool("AutoRenew");

  }

  if(jsonValue.ValueExists("AdminContact"))
  {
    m_adminContact = jsonValue.GetObject("AdminContact");

  }

  if(jsonValue.ValueExists("RegistrantContact"))
  {
    m_registrantContact = jsonValue.GetObject("RegistrantContact");

  }

  if(jsonValue.ValueExists("TechContact"))
  {
    m_techContact = jsonValue.GetObject("TechContact");

  }

  if(jsonValue.ValueExists("AdminPrivacy"))
  {
    m_adminPrivacy = jsonValue.GetBool("AdminPrivacy");

  }

  if(jsonValue.ValueExists("RegistrantPrivacy"))
  {
    m_registrantPrivacy = jsonValue.GetBool("RegistrantPrivacy");

  }

  if(jsonValue.ValueExists("TechPrivacy"))
  {
    m_techPrivacy = jsonValue.GetBool("TechPrivacy");

  }

  if(jsonValue.ValueExists("RegistrarName"))
  {
    m_registrarName = jsonValue.GetString("RegistrarName");

  }

  if(jsonValue.ValueExists("WhoIsServer"))
  {
    m_whoIsServer = jsonValue.GetString("WhoIsServer");

  }

  if(jsonValue.ValueExists("RegistrarUrl"))
  {
    m_registrarUrl = jsonValue.GetString("RegistrarUrl");

  }

  if(jsonValue.ValueExists("AbuseContactEmail"))
  {
    m_abuseContactEmail = jsonValue.GetString("AbuseContactEmail");

  }

  if(jsonValue.ValueExists("AbuseContactPhone"))
  {
    m_abuseContactPhone = jsonValue.GetString("AbuseContactPhone");

  }

  if(jsonValue.ValueExists("RegistryDomainId"))
  {
    m_registryDomainId = jsonValue.GetString("RegistryDomainId");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("UpdatedDate"))
  {
    m_updatedDate = jsonValue.GetDouble("UpdatedDate");

  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");

  }

  if(jsonValue.ValueExists("Reseller"))
  {
    m_reseller = jsonValue.GetString("Reseller");

  }

  if(jsonValue.ValueExists("DnsSec"))
  {
    m_dnsSec = jsonValue.GetString("DnsSec");

  }

  if(jsonValue.ValueExists("StatusList"))
  {
    Array<JsonValue> statusListJsonList = jsonValue.GetArray("StatusList");
    for(unsigned statusListIndex = 0; statusListIndex < statusListJsonList.GetLength(); ++statusListIndex)
    {
      m_statusList.push_back(statusListJsonList[statusListIndex].AsString());
    }
  }



  return *this;
}
