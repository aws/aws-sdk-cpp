/*
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

#include <aws/apigateway/model/UpdateDomainNameResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDomainNameResult::UpdateDomainNameResult() : 
    m_domainNameStatus(DomainNameStatus::NOT_SET),
    m_securityPolicy(SecurityPolicy::NOT_SET)
{
}

UpdateDomainNameResult::UpdateDomainNameResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domainNameStatus(DomainNameStatus::NOT_SET),
    m_securityPolicy(SecurityPolicy::NOT_SET)
{
  *this = result;
}

UpdateDomainNameResult& UpdateDomainNameResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

  }

  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");

  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

  }

  if(jsonValue.ValueExists("certificateUploadDate"))
  {
    m_certificateUploadDate = jsonValue.GetDouble("certificateUploadDate");

  }

  if(jsonValue.ValueExists("regionalDomainName"))
  {
    m_regionalDomainName = jsonValue.GetString("regionalDomainName");

  }

  if(jsonValue.ValueExists("regionalHostedZoneId"))
  {
    m_regionalHostedZoneId = jsonValue.GetString("regionalHostedZoneId");

  }

  if(jsonValue.ValueExists("regionalCertificateName"))
  {
    m_regionalCertificateName = jsonValue.GetString("regionalCertificateName");

  }

  if(jsonValue.ValueExists("regionalCertificateArn"))
  {
    m_regionalCertificateArn = jsonValue.GetString("regionalCertificateArn");

  }

  if(jsonValue.ValueExists("distributionDomainName"))
  {
    m_distributionDomainName = jsonValue.GetString("distributionDomainName");

  }

  if(jsonValue.ValueExists("distributionHostedZoneId"))
  {
    m_distributionHostedZoneId = jsonValue.GetString("distributionHostedZoneId");

  }

  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");

  }

  if(jsonValue.ValueExists("domainNameStatus"))
  {
    m_domainNameStatus = DomainNameStatusMapper::GetDomainNameStatusForName(jsonValue.GetString("domainNameStatus"));

  }

  if(jsonValue.ValueExists("domainNameStatusMessage"))
  {
    m_domainNameStatusMessage = jsonValue.GetString("domainNameStatusMessage");

  }

  if(jsonValue.ValueExists("securityPolicy"))
  {
    m_securityPolicy = SecurityPolicyMapper::GetSecurityPolicyForName(jsonValue.GetString("securityPolicy"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
