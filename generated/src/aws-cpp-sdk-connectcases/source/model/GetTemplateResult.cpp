/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/GetTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("layoutConfiguration"))
  {
    m_layoutConfiguration = jsonValue.GetObject("layoutConfiguration");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("requiredFields"))
  {
    Aws::Utils::Array<JsonView> requiredFieldsJsonList = jsonValue.GetArray("requiredFields");
    for(unsigned requiredFieldsIndex = 0; requiredFieldsIndex < requiredFieldsJsonList.GetLength(); ++requiredFieldsIndex)
    {
      m_requiredFields.push_back(requiredFieldsJsonList[requiredFieldsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TemplateStatusMapper::GetTemplateStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");

  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

  }



  return *this;
}
