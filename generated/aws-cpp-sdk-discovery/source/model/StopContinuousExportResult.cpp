/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StopContinuousExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopContinuousExportResult::StopContinuousExportResult()
{
}

StopContinuousExportResult::StopContinuousExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StopContinuousExportResult& StopContinuousExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetDouble("stopTime");

  }



  return *this;
}
