/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/GetStreamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KeyspacesStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamResult::GetStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStreamResult& GetStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("streamArn"))
  {
    m_streamArn = jsonValue.GetString("streamArn");
    m_streamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamLabel"))
  {
    m_streamLabel = jsonValue.GetString("streamLabel");
    m_streamLabelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamStatus"))
  {
    m_streamStatus = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("streamStatus"));
    m_streamStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamViewType"))
  {
    m_streamViewType = StreamViewTypeMapper::GetStreamViewTypeForName(jsonValue.GetString("streamViewType"));
    m_streamViewTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationRequestDateTime"))
  {
    m_creationRequestDateTime = jsonValue.GetDouble("creationRequestDateTime");
    m_creationRequestDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");
    m_keyspaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shards"))
  {
    Aws::Utils::Array<JsonView> shardsJsonList = jsonValue.GetArray("shards");
    for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
    {
      m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
    }
    m_shardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
