/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileSystemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFileSystemResult::DeleteFileSystemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFileSystemResult& DeleteFileSystemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = FileSystemLifecycleMapper::GetFileSystemLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WindowsResponse"))
  {
    m_windowsResponse = jsonValue.GetObject("WindowsResponse");
    m_windowsResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LustreResponse"))
  {
    m_lustreResponse = jsonValue.GetObject("LustreResponse");
    m_lustreResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenZFSResponse"))
  {
    m_openZFSResponse = jsonValue.GetObject("OpenZFSResponse");
    m_openZFSResponseHasBeenSet = true;
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
