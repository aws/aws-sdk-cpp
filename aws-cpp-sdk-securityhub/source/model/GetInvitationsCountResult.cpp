/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetInvitationsCountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInvitationsCountResult::GetInvitationsCountResult() : 
    m_invitationsCount(0)
{
}

GetInvitationsCountResult::GetInvitationsCountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_invitationsCount(0)
{
  *this = result;
}

GetInvitationsCountResult& GetInvitationsCountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InvitationsCount"))
  {
    m_invitationsCount = jsonValue.GetInteger("InvitationsCount");

  }



  return *this;
}
