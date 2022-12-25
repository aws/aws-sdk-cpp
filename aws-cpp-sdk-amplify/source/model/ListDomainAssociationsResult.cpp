/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/ListDomainAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainAssociationsResult::ListDomainAssociationsResult()
{
}

ListDomainAssociationsResult::ListDomainAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainAssociationsResult& ListDomainAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainAssociations"))
  {
    Aws::Utils::Array<JsonView> domainAssociationsJsonList = jsonValue.GetArray("domainAssociations");
    for(unsigned domainAssociationsIndex = 0; domainAssociationsIndex < domainAssociationsJsonList.GetLength(); ++domainAssociationsIndex)
    {
      m_domainAssociations.push_back(domainAssociationsJsonList[domainAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
