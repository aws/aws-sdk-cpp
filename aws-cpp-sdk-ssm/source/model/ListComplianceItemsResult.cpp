/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListComplianceItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComplianceItemsResult::ListComplianceItemsResult()
{
}

ListComplianceItemsResult::ListComplianceItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComplianceItemsResult& ListComplianceItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComplianceItems"))
  {
    Aws::Utils::Array<JsonView> complianceItemsJsonList = jsonValue.GetArray("ComplianceItems");
    for(unsigned complianceItemsIndex = 0; complianceItemsIndex < complianceItemsJsonList.GetLength(); ++complianceItemsIndex)
    {
      m_complianceItems.push_back(complianceItemsJsonList[complianceItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
