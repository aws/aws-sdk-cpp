/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetImpersonationRoleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImpersonationRoleResult::GetImpersonationRoleResult() : 
    m_type(ImpersonationRoleType::NOT_SET)
{
}

GetImpersonationRoleResult::GetImpersonationRoleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(ImpersonationRoleType::NOT_SET)
{
  *this = result;
}

GetImpersonationRoleResult& GetImpersonationRoleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImpersonationRoleId"))
  {
    m_impersonationRoleId = jsonValue.GetString("ImpersonationRoleId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ImpersonationRoleTypeMapper::GetImpersonationRoleTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

  }



  return *this;
}
