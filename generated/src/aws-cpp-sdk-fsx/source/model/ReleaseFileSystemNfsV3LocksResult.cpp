/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ReleaseFileSystemNfsV3LocksResult.h>
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

ReleaseFileSystemNfsV3LocksResult::ReleaseFileSystemNfsV3LocksResult()
{
}

ReleaseFileSystemNfsV3LocksResult::ReleaseFileSystemNfsV3LocksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ReleaseFileSystemNfsV3LocksResult& ReleaseFileSystemNfsV3LocksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileSystem"))
  {
    m_fileSystem = jsonValue.GetObject("FileSystem");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
