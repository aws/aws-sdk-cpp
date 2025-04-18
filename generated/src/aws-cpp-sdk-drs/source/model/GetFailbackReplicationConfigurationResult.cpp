﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/GetFailbackReplicationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFailbackReplicationConfigurationResult::GetFailbackReplicationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFailbackReplicationConfigurationResult& GetFailbackReplicationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bandwidthThrottling"))
  {
    m_bandwidthThrottling = jsonValue.GetInt64("bandwidthThrottling");
    m_bandwidthThrottlingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryInstanceID"))
  {
    m_recoveryInstanceID = jsonValue.GetString("recoveryInstanceID");
    m_recoveryInstanceIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usePrivateIP"))
  {
    m_usePrivateIP = jsonValue.GetBool("usePrivateIP");
    m_usePrivateIPHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
