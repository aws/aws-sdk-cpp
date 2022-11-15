/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateTaskTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTaskTemplateResult::UpdateTaskTemplateResult() : 
    m_status(TaskTemplateStatus::NOT_SET)
{
}

UpdateTaskTemplateResult::UpdateTaskTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskTemplateStatus::NOT_SET)
{
  *this = result;
}

UpdateTaskTemplateResult& UpdateTaskTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ContactFlowId"))
  {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");

  }

  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

  }

  if(jsonValue.ValueExists("Defaults"))
  {
    m_defaults = jsonValue.GetObject("Defaults");

  }

  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskTemplateStatusMapper::GetTaskTemplateStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }



  return *this;
}
