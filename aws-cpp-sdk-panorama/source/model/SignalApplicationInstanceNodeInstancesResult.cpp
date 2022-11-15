/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/SignalApplicationInstanceNodeInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SignalApplicationInstanceNodeInstancesResult::SignalApplicationInstanceNodeInstancesResult()
{
}

SignalApplicationInstanceNodeInstancesResult::SignalApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SignalApplicationInstanceNodeInstancesResult& SignalApplicationInstanceNodeInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationInstanceId"))
  {
    m_applicationInstanceId = jsonValue.GetString("ApplicationInstanceId");

  }



  return *this;
}
