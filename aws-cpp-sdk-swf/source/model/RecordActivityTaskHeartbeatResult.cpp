/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RecordActivityTaskHeartbeatResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RecordActivityTaskHeartbeatResult::RecordActivityTaskHeartbeatResult() : 
    m_cancelRequested(false)
{
}

RecordActivityTaskHeartbeatResult::RecordActivityTaskHeartbeatResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_cancelRequested(false)
{
  *this = result;
}

RecordActivityTaskHeartbeatResult& RecordActivityTaskHeartbeatResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cancelRequested"))
  {
    m_cancelRequested = jsonValue.GetBool("cancelRequested");

  }



  return *this;
}
