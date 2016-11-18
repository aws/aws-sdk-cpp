/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kinesis/model/UpdateShardCountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateShardCountResult::UpdateShardCountResult() : 
    m_currentShardCount(0),
    m_targetShardCount(0)
{
}

UpdateShardCountResult::UpdateShardCountResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_currentShardCount(0),
    m_targetShardCount(0)
{
  *this = result;
}

UpdateShardCountResult& UpdateShardCountResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

  }

  if(jsonValue.ValueExists("CurrentShardCount"))
  {
    m_currentShardCount = jsonValue.GetInteger("CurrentShardCount");

  }

  if(jsonValue.ValueExists("TargetShardCount"))
  {
    m_targetShardCount = jsonValue.GetInteger("TargetShardCount");

  }



  return *this;
}
