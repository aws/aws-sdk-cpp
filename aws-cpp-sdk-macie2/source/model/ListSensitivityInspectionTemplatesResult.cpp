/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListSensitivityInspectionTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSensitivityInspectionTemplatesResult::ListSensitivityInspectionTemplatesResult()
{
}

ListSensitivityInspectionTemplatesResult::ListSensitivityInspectionTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSensitivityInspectionTemplatesResult& ListSensitivityInspectionTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sensitivityInspectionTemplates"))
  {
    Aws::Utils::Array<JsonView> sensitivityInspectionTemplatesJsonList = jsonValue.GetArray("sensitivityInspectionTemplates");
    for(unsigned sensitivityInspectionTemplatesIndex = 0; sensitivityInspectionTemplatesIndex < sensitivityInspectionTemplatesJsonList.GetLength(); ++sensitivityInspectionTemplatesIndex)
    {
      m_sensitivityInspectionTemplates.push_back(sensitivityInspectionTemplatesJsonList[sensitivityInspectionTemplatesIndex].AsObject());
    }
  }



  return *this;
}
