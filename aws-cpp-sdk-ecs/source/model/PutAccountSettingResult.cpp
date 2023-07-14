/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PutAccountSettingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAccountSettingResult::PutAccountSettingResult()
{
}

PutAccountSettingResult::PutAccountSettingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutAccountSettingResult& PutAccountSettingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("setting"))
  {
    m_setting = jsonValue.GetObject("setting");

  }



  return *this;
}
