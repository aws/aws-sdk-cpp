/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CompleteMultipartUploadResult.h>
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

CompleteMultipartUploadResult::CompleteMultipartUploadResult()
{
}

CompleteMultipartUploadResult::CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CompleteMultipartUploadResult& CompleteMultipartUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
  }

  const auto& checksumIter = headers.find("x-amz-sha256-tree-hash");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
  }

  const auto& archiveIdIter = headers.find("x-amz-archive-id");
  if(archiveIdIter != headers.end())
  {
    m_archiveId = archiveIdIter->second;
  }


  return *this;
}
