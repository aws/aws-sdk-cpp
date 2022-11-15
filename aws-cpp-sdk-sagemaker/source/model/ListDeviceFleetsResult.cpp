/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListDeviceFleetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeviceFleetsResult::ListDeviceFleetsResult()
{
}

ListDeviceFleetsResult::ListDeviceFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeviceFleetsResult& ListDeviceFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceFleetSummaries"))
  {
    Aws::Utils::Array<JsonView> deviceFleetSummariesJsonList = jsonValue.GetArray("DeviceFleetSummaries");
    for(unsigned deviceFleetSummariesIndex = 0; deviceFleetSummariesIndex < deviceFleetSummariesJsonList.GetLength(); ++deviceFleetSummariesIndex)
    {
      m_deviceFleetSummaries.push_back(deviceFleetSummariesJsonList[deviceFleetSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
