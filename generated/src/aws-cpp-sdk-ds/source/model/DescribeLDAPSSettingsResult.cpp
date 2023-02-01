/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeLDAPSSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLDAPSSettingsResult::DescribeLDAPSSettingsResult()
{
}

DescribeLDAPSSettingsResult::DescribeLDAPSSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLDAPSSettingsResult& DescribeLDAPSSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LDAPSSettingsInfo"))
  {
    Aws::Utils::Array<JsonView> lDAPSSettingsInfoJsonList = jsonValue.GetArray("LDAPSSettingsInfo");
    for(unsigned lDAPSSettingsInfoIndex = 0; lDAPSSettingsInfoIndex < lDAPSSettingsInfoJsonList.GetLength(); ++lDAPSSettingsInfoIndex)
    {
      m_lDAPSSettingsInfo.push_back(lDAPSSettingsInfoJsonList[lDAPSSettingsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
