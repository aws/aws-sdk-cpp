/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribePrincipalMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePrincipalMappingResult::DescribePrincipalMappingResult()
{
}

DescribePrincipalMappingResult::DescribePrincipalMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePrincipalMappingResult& DescribePrincipalMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndexId"))
  {
    m_indexId = jsonValue.GetString("IndexId");

  }

  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

  }

  if(jsonValue.ValueExists("GroupOrderingIdSummaries"))
  {
    Aws::Utils::Array<JsonView> groupOrderingIdSummariesJsonList = jsonValue.GetArray("GroupOrderingIdSummaries");
    for(unsigned groupOrderingIdSummariesIndex = 0; groupOrderingIdSummariesIndex < groupOrderingIdSummariesJsonList.GetLength(); ++groupOrderingIdSummariesIndex)
    {
      m_groupOrderingIdSummaries.push_back(groupOrderingIdSummariesJsonList[groupOrderingIdSummariesIndex].AsObject());
    }
  }



  return *this;
}
