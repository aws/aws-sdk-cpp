/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSettingsResult::DescribeSettingsResult()
{
}

DescribeSettingsResult::DescribeSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSettingsResult& DescribeSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

  }

  if(jsonValue.ValueExists("SettingEntries"))
  {
    Aws::Utils::Array<JsonView> settingEntriesJsonList = jsonValue.GetArray("SettingEntries");
    for(unsigned settingEntriesIndex = 0; settingEntriesIndex < settingEntriesJsonList.GetLength(); ++settingEntriesIndex)
    {
      m_settingEntries.push_back(settingEntriesJsonList[settingEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
