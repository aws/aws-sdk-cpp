/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListTargetsForPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetsForPolicyResult::ListTargetsForPolicyResult()
{
}

ListTargetsForPolicyResult::ListTargetsForPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTargetsForPolicyResult& ListTargetsForPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextMarker"))
  {
    m_nextMarker = jsonValue.GetString("nextMarker");

  }



  return *this;
}
