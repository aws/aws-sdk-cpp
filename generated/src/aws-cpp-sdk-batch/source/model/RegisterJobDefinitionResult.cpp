﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RegisterJobDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterJobDefinitionResult::RegisterJobDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterJobDefinitionResult& RegisterJobDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobDefinitionName"))
  {
    m_jobDefinitionName = jsonValue.GetString("jobDefinitionName");
    m_jobDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobDefinitionArn"))
  {
    m_jobDefinitionArn = jsonValue.GetString("jobDefinitionArn");
    m_jobDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");
    m_revisionHasBeenSet = true;
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
