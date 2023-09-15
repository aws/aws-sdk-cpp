/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/PutLaunchActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutLaunchActionResult::PutLaunchActionResult() : 
    m_active(false),
    m_category(LaunchActionCategory::NOT_SET),
    m_optional(false),
    m_order(0),
    m_type(LaunchActionType::NOT_SET)
{
}

PutLaunchActionResult::PutLaunchActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_active(false),
    m_category(LaunchActionCategory::NOT_SET),
    m_optional(false),
    m_order(0),
    m_type(LaunchActionType::NOT_SET)
{
  *this = result;
}

PutLaunchActionResult& PutLaunchActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionCode"))
  {
    m_actionCode = jsonValue.GetString("actionCode");

  }

  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

  }

  if(jsonValue.ValueExists("actionVersion"))
  {
    m_actionVersion = jsonValue.GetString("actionVersion");

  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = LaunchActionCategoryMapper::GetLaunchActionCategoryForName(jsonValue.GetString("category"));

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchActionTypeMapper::GetLaunchActionTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
