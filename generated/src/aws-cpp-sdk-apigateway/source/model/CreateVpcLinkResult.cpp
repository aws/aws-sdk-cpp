/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateVpcLinkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVpcLinkResult::CreateVpcLinkResult() : 
    m_status(VpcLinkStatus::NOT_SET)
{
}

CreateVpcLinkResult::CreateVpcLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(VpcLinkStatus::NOT_SET)
{
  *this = result;
}

CreateVpcLinkResult& CreateVpcLinkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("targetArns"))
  {
    Aws::Utils::Array<JsonView> targetArnsJsonList = jsonValue.GetArray("targetArns");
    for(unsigned targetArnsIndex = 0; targetArnsIndex < targetArnsJsonList.GetLength(); ++targetArnsIndex)
    {
      m_targetArns.push_back(targetArnsJsonList[targetArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = VpcLinkStatusMapper::GetVpcLinkStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
