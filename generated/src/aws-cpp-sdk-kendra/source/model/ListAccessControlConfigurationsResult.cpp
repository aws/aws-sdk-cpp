/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListAccessControlConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccessControlConfigurationsResult::ListAccessControlConfigurationsResult()
{
}

ListAccessControlConfigurationsResult::ListAccessControlConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccessControlConfigurationsResult& ListAccessControlConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("AccessControlConfigurations"))
  {
    Aws::Utils::Array<JsonView> accessControlConfigurationsJsonList = jsonValue.GetArray("AccessControlConfigurations");
    for(unsigned accessControlConfigurationsIndex = 0; accessControlConfigurationsIndex < accessControlConfigurationsJsonList.GetLength(); ++accessControlConfigurationsIndex)
    {
      m_accessControlConfigurations.push_back(accessControlConfigurationsJsonList[accessControlConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
