/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
