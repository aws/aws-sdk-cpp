/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotthingsgraph/model/GetUploadStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUploadStatusResult::GetUploadStatusResult() : 
    m_uploadStatus(UploadStatus::NOT_SET),
    m_namespaceVersion(0)
{
}

GetUploadStatusResult::GetUploadStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_uploadStatus(UploadStatus::NOT_SET),
    m_namespaceVersion(0)
{
  *this = result;
}

GetUploadStatusResult& GetUploadStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

  }

  if(jsonValue.ValueExists("uploadStatus"))
  {
    m_uploadStatus = UploadStatusMapper::GetUploadStatusForName(jsonValue.GetString("uploadStatus"));

  }

  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

  }

  if(jsonValue.ValueExists("namespaceVersion"))
  {
    m_namespaceVersion = jsonValue.GetInt64("namespaceVersion");

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    Array<JsonView> failureReasonJsonList = jsonValue.GetArray("failureReason");
    for(unsigned failureReasonIndex = 0; failureReasonIndex < failureReasonJsonList.GetLength(); ++failureReasonIndex)
    {
      m_failureReason.push_back(failureReasonJsonList[failureReasonIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }



  return *this;
}
