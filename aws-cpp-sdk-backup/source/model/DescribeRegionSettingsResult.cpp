/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeRegionSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRegionSettingsResult::DescribeRegionSettingsResult()
{
}

DescribeRegionSettingsResult::DescribeRegionSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRegionSettingsResult& DescribeRegionSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceTypeOptInPreference"))
  {
    Aws::Map<Aws::String, JsonView> resourceTypeOptInPreferenceJsonMap = jsonValue.GetObject("ResourceTypeOptInPreference").GetAllObjects();
    for(auto& resourceTypeOptInPreferenceItem : resourceTypeOptInPreferenceJsonMap)
    {
      m_resourceTypeOptInPreference[resourceTypeOptInPreferenceItem.first] = resourceTypeOptInPreferenceItem.second.AsBool();
    }
  }



  return *this;
}
