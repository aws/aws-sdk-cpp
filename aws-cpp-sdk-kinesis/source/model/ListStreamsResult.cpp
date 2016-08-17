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
#include <aws/kinesis/model/ListStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamsResult::ListStreamsResult() : 
    m_hasMoreStreams(false)
{
}

ListStreamsResult::ListStreamsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreStreams(false)
{
  *this = result;
}

ListStreamsResult& ListStreamsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("StreamNames"))
  {
    Array<JsonValue> streamNamesJsonList = jsonValue.GetArray("StreamNames");
    for(unsigned streamNamesIndex = 0; streamNamesIndex < streamNamesJsonList.GetLength(); ++streamNamesIndex)
    {
      m_streamNames.push_back(streamNamesJsonList[streamNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HasMoreStreams"))
  {
    m_hasMoreStreams = jsonValue.GetBool("HasMoreStreams");

  }



  return *this;
}
