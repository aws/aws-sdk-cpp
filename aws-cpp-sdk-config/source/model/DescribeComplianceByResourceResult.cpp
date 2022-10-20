/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeComplianceByResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComplianceByResourceResult::DescribeComplianceByResourceResult()
{
}

DescribeComplianceByResourceResult::DescribeComplianceByResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComplianceByResourceResult& DescribeComplianceByResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComplianceByResources"))
  {
    Aws::Utils::Array<JsonView> complianceByResourcesJsonList = jsonValue.GetArray("ComplianceByResources");
    for(unsigned complianceByResourcesIndex = 0; complianceByResourcesIndex < complianceByResourcesJsonList.GetLength(); ++complianceByResourcesIndex)
    {
      m_complianceByResources.push_back(complianceByResourcesJsonList[complianceByResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
