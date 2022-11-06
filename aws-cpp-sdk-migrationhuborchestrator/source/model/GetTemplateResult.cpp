/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateResult::GetTemplateResult() : 
    m_status(TemplateStatus::NOT_SET)
{
}

GetTemplateResult::GetTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TemplateStatus::NOT_SET)
{
  *this = result;
}

GetTemplateResult& GetTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tools"))
  {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TemplateStatusMapper::GetTemplateStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }



  return *this;
}
