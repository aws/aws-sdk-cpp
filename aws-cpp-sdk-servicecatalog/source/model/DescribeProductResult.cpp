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

#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProductResult::DescribeProductResult()
{
}

DescribeProductResult::DescribeProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProductResult& DescribeProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewSummary"))
  {
    m_productViewSummary = jsonValue.GetObject("ProductViewSummary");

  }

  if(jsonValue.ValueExists("ProvisioningArtifacts"))
  {
    Array<JsonView> provisioningArtifactsJsonList = jsonValue.GetArray("ProvisioningArtifacts");
    for(unsigned provisioningArtifactsIndex = 0; provisioningArtifactsIndex < provisioningArtifactsJsonList.GetLength(); ++provisioningArtifactsIndex)
    {
      m_provisioningArtifacts.push_back(provisioningArtifactsJsonList[provisioningArtifactsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Budgets"))
  {
    Array<JsonView> budgetsJsonList = jsonValue.GetArray("Budgets");
    for(unsigned budgetsIndex = 0; budgetsIndex < budgetsJsonList.GetLength(); ++budgetsIndex)
    {
      m_budgets.push_back(budgetsJsonList[budgetsIndex].AsObject());
    }
  }



  return *this;
}
