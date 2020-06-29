/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InitiateVaultLockResult.h>
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

InitiateVaultLockResult::InitiateVaultLockResult()
{
}

InitiateVaultLockResult::InitiateVaultLockResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InitiateVaultLockResult& InitiateVaultLockResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& lockIdIter = headers.find("x-amz-lock-id");
  if(lockIdIter != headers.end())
  {
    m_lockId = lockIdIter->second;
  }


  return *this;
}
