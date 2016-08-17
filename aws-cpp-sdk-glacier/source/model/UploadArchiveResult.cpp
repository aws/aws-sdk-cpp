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
#include <aws/glacier/model/UploadArchiveResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UploadArchiveResult::UploadArchiveResult()
{
}

UploadArchiveResult::UploadArchiveResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UploadArchiveResult& UploadArchiveResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
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
