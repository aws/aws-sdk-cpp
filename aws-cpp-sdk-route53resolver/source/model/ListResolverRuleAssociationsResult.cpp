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

#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverRuleAssociationsResult::ListResolverRuleAssociationsResult() : 
    m_maxResults(0)
{
}

ListResolverRuleAssociationsResult::ListResolverRuleAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListResolverRuleAssociationsResult& ListResolverRuleAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

  }

  if(jsonValue.ValueExists("ResolverRuleAssociations"))
  {
    Array<JsonView> resolverRuleAssociationsJsonList = jsonValue.GetArray("ResolverRuleAssociations");
    for(unsigned resolverRuleAssociationsIndex = 0; resolverRuleAssociationsIndex < resolverRuleAssociationsJsonList.GetLength(); ++resolverRuleAssociationsIndex)
    {
      m_resolverRuleAssociations.push_back(resolverRuleAssociationsJsonList[resolverRuleAssociationsIndex].AsObject());
    }
  }



  return *this;
}
