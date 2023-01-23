/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/PutPermissionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutPermissionResult::PutPermissionResult()
{
}

PutPermissionResult::PutPermissionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutPermissionResult& PutPermissionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

  }



  return *this;
}
