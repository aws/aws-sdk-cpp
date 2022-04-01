/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/UpdateTeamMemberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTeamMemberResult::UpdateTeamMemberResult() : 
    m_remoteAccessAllowed(false)
{
}

UpdateTeamMemberResult::UpdateTeamMemberResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_remoteAccessAllowed(false)
{
  *this = result;
}

UpdateTeamMemberResult& UpdateTeamMemberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

  }

  if(jsonValue.ValueExists("projectRole"))
  {
    m_projectRole = jsonValue.GetString("projectRole");

  }

  if(jsonValue.ValueExists("remoteAccessAllowed"))
  {
    m_remoteAccessAllowed = jsonValue.GetBool("remoteAccessAllowed");

  }



  return *this;
}
