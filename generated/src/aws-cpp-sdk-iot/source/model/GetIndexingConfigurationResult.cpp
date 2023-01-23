/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetIndexingConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIndexingConfigurationResult::GetIndexingConfigurationResult()
{
}

GetIndexingConfigurationResult::GetIndexingConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIndexingConfigurationResult& GetIndexingConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingIndexingConfiguration"))
  {
    m_thingIndexingConfiguration = jsonValue.GetObject("thingIndexingConfiguration");

  }

  if(jsonValue.ValueExists("thingGroupIndexingConfiguration"))
  {
    m_thingGroupIndexingConfiguration = jsonValue.GetObject("thingGroupIndexingConfiguration");

  }



  return *this;
}
