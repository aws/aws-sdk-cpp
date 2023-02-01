/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchPutGeofenceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchPutGeofenceResult::BatchPutGeofenceResult()
{
}

BatchPutGeofenceResult::BatchPutGeofenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchPutGeofenceResult& BatchPutGeofenceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Successes"))
  {
    Aws::Utils::Array<JsonView> successesJsonList = jsonValue.GetArray("Successes");
    for(unsigned successesIndex = 0; successesIndex < successesJsonList.GetLength(); ++successesIndex)
    {
      m_successes.push_back(successesJsonList[successesIndex].AsObject());
    }
  }



  return *this;
}
