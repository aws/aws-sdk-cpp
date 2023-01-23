/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListInstalledComponentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstalledComponentsResult::ListInstalledComponentsResult()
{
}

ListInstalledComponentsResult::ListInstalledComponentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstalledComponentsResult& ListInstalledComponentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("installedComponents"))
  {
    Aws::Utils::Array<JsonView> installedComponentsJsonList = jsonValue.GetArray("installedComponents");
    for(unsigned installedComponentsIndex = 0; installedComponentsIndex < installedComponentsJsonList.GetLength(); ++installedComponentsIndex)
    {
      m_installedComponents.push_back(installedComponentsJsonList[installedComponentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
