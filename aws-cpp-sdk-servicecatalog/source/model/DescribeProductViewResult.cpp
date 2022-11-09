/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProductViewResult::DescribeProductViewResult()
{
}

DescribeProductViewResult::DescribeProductViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProductViewResult& DescribeProductViewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewSummary"))
  {
    m_productViewSummary = jsonValue.GetObject("ProductViewSummary");

  }

  if(jsonValue.ValueExists("ProvisioningArtifacts"))
  {
    Aws::Utils::Array<JsonView> provisioningArtifactsJsonList = jsonValue.GetArray("ProvisioningArtifacts");
    for(unsigned provisioningArtifactsIndex = 0; provisioningArtifactsIndex < provisioningArtifactsJsonList.GetLength(); ++provisioningArtifactsIndex)
    {
      m_provisioningArtifacts.push_back(provisioningArtifactsJsonList[provisioningArtifactsIndex].AsObject());
    }
  }



  return *this;
}
