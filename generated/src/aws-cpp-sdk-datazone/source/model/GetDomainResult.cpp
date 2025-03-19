/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainResult::GetDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDomainResult& GetDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainExecutionRole"))
  {
    m_domainExecutionRole = jsonValue.GetString("domainExecutionRole");
    m_domainExecutionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainVersion"))
  {
    m_domainVersion = DomainVersionMapper::GetDomainVersionForName(jsonValue.GetString("domainVersion"));
    m_domainVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalUrl"))
  {
    m_portalUrl = jsonValue.GetString("portalUrl");
    m_portalUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rootDomainUnitId"))
  {
    m_rootDomainUnitId = jsonValue.GetString("rootDomainUnitId");
    m_rootDomainUnitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("singleSignOn"))
  {
    m_singleSignOn = jsonValue.GetObject("singleSignOn");
    m_singleSignOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
