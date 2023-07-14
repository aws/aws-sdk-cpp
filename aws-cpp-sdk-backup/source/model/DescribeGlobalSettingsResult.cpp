/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeGlobalSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGlobalSettingsResult::DescribeGlobalSettingsResult()
{
}

DescribeGlobalSettingsResult::DescribeGlobalSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGlobalSettingsResult& DescribeGlobalSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GlobalSettings"))
  {
    Aws::Map<Aws::String, JsonView> globalSettingsJsonMap = jsonValue.GetObject("GlobalSettings").GetAllObjects();
    for(auto& globalSettingsItem : globalSettingsJsonMap)
    {
      m_globalSettings[globalSettingsItem.first] = globalSettingsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

  }



  return *this;
}
