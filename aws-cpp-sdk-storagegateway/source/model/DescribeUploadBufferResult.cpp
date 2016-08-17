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
#include <aws/storagegateway/model/DescribeUploadBufferResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUploadBufferResult::DescribeUploadBufferResult() : 
    m_uploadBufferUsedInBytes(0),
    m_uploadBufferAllocatedInBytes(0)
{
}

DescribeUploadBufferResult::DescribeUploadBufferResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_uploadBufferUsedInBytes(0),
    m_uploadBufferAllocatedInBytes(0)
{
  *this = result;
}

DescribeUploadBufferResult& DescribeUploadBufferResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("DiskIds"))
  {
    Array<JsonValue> diskIdsJsonList = jsonValue.GetArray("DiskIds");
    for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
    {
      m_diskIds.push_back(diskIdsJsonList[diskIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("UploadBufferUsedInBytes"))
  {
    m_uploadBufferUsedInBytes = jsonValue.GetInt64("UploadBufferUsedInBytes");

  }

  if(jsonValue.ValueExists("UploadBufferAllocatedInBytes"))
  {
    m_uploadBufferAllocatedInBytes = jsonValue.GetInt64("UploadBufferAllocatedInBytes");

  }



  return *this;
}
