/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListMetricValuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMetricValuesResult::ListMetricValuesResult()
{
}

ListMetricValuesResult::ListMetricValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMetricValuesResult& ListMetricValuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricDatumList"))
  {
    Aws::Utils::Array<JsonView> metricDatumListJsonList = jsonValue.GetArray("metricDatumList");
    for(unsigned metricDatumListIndex = 0; metricDatumListIndex < metricDatumListJsonList.GetLength(); ++metricDatumListIndex)
    {
      m_metricDatumList.push_back(metricDatumListJsonList[metricDatumListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
