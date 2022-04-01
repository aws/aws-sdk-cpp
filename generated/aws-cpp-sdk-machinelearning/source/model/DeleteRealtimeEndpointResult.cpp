/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DeleteRealtimeEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteRealtimeEndpointResult::DeleteRealtimeEndpointResult()
{
}

DeleteRealtimeEndpointResult::DeleteRealtimeEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteRealtimeEndpointResult& DeleteRealtimeEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");

  }

  if(jsonValue.ValueExists("RealtimeEndpointInfo"))
  {
    m_realtimeEndpointInfo = jsonValue.GetObject("RealtimeEndpointInfo");

  }



  return *this;
}
