/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplacecommerceanalytics/model/GenerateDataSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GenerateDataSetResult::GenerateDataSetResult()
{
}

GenerateDataSetResult::GenerateDataSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateDataSetResult& GenerateDataSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataSetRequestId"))
  {
    m_dataSetRequestId = jsonValue.GetString("dataSetRequestId");

  }



  return *this;
}
