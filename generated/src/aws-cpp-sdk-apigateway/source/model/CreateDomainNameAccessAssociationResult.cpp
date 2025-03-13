/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDomainNameAccessAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDomainNameAccessAssociationResult::CreateDomainNameAccessAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDomainNameAccessAssociationResult& CreateDomainNameAccessAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainNameAccessAssociationArn"))
  {
    m_domainNameAccessAssociationArn = jsonValue.GetString("domainNameAccessAssociationArn");
    m_domainNameAccessAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameArn"))
  {
    m_domainNameArn = jsonValue.GetString("domainNameArn");
    m_domainNameArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessAssociationSourceType"))
  {
    m_accessAssociationSourceType = AccessAssociationSourceTypeMapper::GetAccessAssociationSourceTypeForName(jsonValue.GetString("accessAssociationSourceType"));
    m_accessAssociationSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessAssociationSource"))
  {
    m_accessAssociationSource = jsonValue.GetString("accessAssociationSource");
    m_accessAssociationSourceHasBeenSet = true;
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
