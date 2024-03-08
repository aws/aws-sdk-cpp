/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/UpdateFileSystemProtectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFileSystemProtectionResult::UpdateFileSystemProtectionResult() : 
    m_replicationOverwriteProtection(ReplicationOverwriteProtection::NOT_SET)
{
}

UpdateFileSystemProtectionResult::UpdateFileSystemProtectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_replicationOverwriteProtection(ReplicationOverwriteProtection::NOT_SET)
{
  *this = result;
}

UpdateFileSystemProtectionResult& UpdateFileSystemProtectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationOverwriteProtection"))
  {
    m_replicationOverwriteProtection = ReplicationOverwriteProtectionMapper::GetReplicationOverwriteProtectionForName(jsonValue.GetString("ReplicationOverwriteProtection"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
