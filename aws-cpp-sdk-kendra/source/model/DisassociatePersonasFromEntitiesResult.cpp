/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DisassociatePersonasFromEntitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociatePersonasFromEntitiesResult::DisassociatePersonasFromEntitiesResult()
{
}

DisassociatePersonasFromEntitiesResult::DisassociatePersonasFromEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociatePersonasFromEntitiesResult& DisassociatePersonasFromEntitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
