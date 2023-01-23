/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListManagedJobTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedJobTemplatesResult::ListManagedJobTemplatesResult()
{
}

ListManagedJobTemplatesResult::ListManagedJobTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedJobTemplatesResult& ListManagedJobTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("managedJobTemplates"))
  {
    Aws::Utils::Array<JsonView> managedJobTemplatesJsonList = jsonValue.GetArray("managedJobTemplates");
    for(unsigned managedJobTemplatesIndex = 0; managedJobTemplatesIndex < managedJobTemplatesJsonList.GetLength(); ++managedJobTemplatesIndex)
    {
      m_managedJobTemplates.push_back(managedJobTemplatesJsonList[managedJobTemplatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
