﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DisassociateEntitiesFromExperienceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateEntitiesFromExperienceResult::DisassociateEntitiesFromExperienceResult()
{
}

DisassociateEntitiesFromExperienceResult::DisassociateEntitiesFromExperienceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateEntitiesFromExperienceResult& DisassociateEntitiesFromExperienceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedEntityList"))
  {
    Aws::Utils::Array<JsonView> failedEntityListJsonList = jsonValue.GetArray("FailedEntityList");
    for(unsigned failedEntityListIndex = 0; failedEntityListIndex < failedEntityListJsonList.GetLength(); ++failedEntityListIndex)
    {
      m_failedEntityList.push_back(failedEntityListJsonList[failedEntityListIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
