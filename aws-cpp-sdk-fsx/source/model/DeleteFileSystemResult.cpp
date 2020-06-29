/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileSystemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFileSystemResult::DeleteFileSystemResult() : 
    m_lifecycle(FileSystemLifecycle::NOT_SET)
{
}

DeleteFileSystemResult::DeleteFileSystemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(FileSystemLifecycle::NOT_SET)
{
  *this = result;
}

DeleteFileSystemResult& DeleteFileSystemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = FileSystemLifecycleMapper::GetFileSystemLifecycleForName(jsonValue.GetString("Lifecycle"));

  }

  if(jsonValue.ValueExists("WindowsResponse"))
  {
    m_windowsResponse = jsonValue.GetObject("WindowsResponse");

  }

  if(jsonValue.ValueExists("LustreResponse"))
  {
    m_lustreResponse = jsonValue.GetObject("LustreResponse");

  }



  return *this;
}
