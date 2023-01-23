/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InitiateMultipartUploadResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InitiateMultipartUploadResult::InitiateMultipartUploadResult()
{
}

InitiateMultipartUploadResult::InitiateMultipartUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InitiateMultipartUploadResult& InitiateMultipartUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
  }

  const auto& uploadIdIter = headers.find("x-amz-multipart-upload-id");
  if(uploadIdIter != headers.end())
  {
    m_uploadId = uploadIdIter->second;
  }


  return *this;
}
