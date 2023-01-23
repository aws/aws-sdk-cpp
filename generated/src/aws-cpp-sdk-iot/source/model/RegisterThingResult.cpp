/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RegisterThingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterThingResult::RegisterThingResult()
{
}

RegisterThingResult::RegisterThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterThingResult& RegisterThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificatePem"))
  {
    m_certificatePem = jsonValue.GetString("certificatePem");

  }

  if(jsonValue.ValueExists("resourceArns"))
  {
    Aws::Map<Aws::String, JsonView> resourceArnsJsonMap = jsonValue.GetObject("resourceArns").GetAllObjects();
    for(auto& resourceArnsItem : resourceArnsJsonMap)
    {
      m_resourceArns[resourceArnsItem.first] = resourceArnsItem.second.AsString();
    }
  }



  return *this;
}
