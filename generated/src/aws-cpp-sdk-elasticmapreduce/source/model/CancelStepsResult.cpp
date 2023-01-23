/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CancelStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelStepsResult::CancelStepsResult()
{
}

CancelStepsResult::CancelStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelStepsResult& CancelStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CancelStepsInfoList"))
  {
    Aws::Utils::Array<JsonView> cancelStepsInfoListJsonList = jsonValue.GetArray("CancelStepsInfoList");
    for(unsigned cancelStepsInfoListIndex = 0; cancelStepsInfoListIndex < cancelStepsInfoListJsonList.GetLength(); ++cancelStepsInfoListIndex)
    {
      m_cancelStepsInfoList.push_back(cancelStepsInfoListJsonList[cancelStepsInfoListIndex].AsObject());
    }
  }



  return *this;
}
