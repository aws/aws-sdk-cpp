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

PutLaunchActionResult::PutLaunchActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutLaunchActionResult& PutLaunchActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionCode"))
  {
    m_actionCode = jsonValue.GetString("actionCode");
    m_actionCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");
    m_actionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionVersion"))
  {
    m_actionVersion = jsonValue.GetString("actionVersion");
    m_actionVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");
    m_activeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = LaunchActionCategoryMapper::GetLaunchActionCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");
    m_optionalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");
    m_orderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchActionTypeMapper::GetLaunchActionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
