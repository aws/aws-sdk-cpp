/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/RejectResourceShareInvitationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RejectResourceShareInvitationResult::RejectResourceShareInvitationResult()
{
}

RejectResourceShareInvitationResult::RejectResourceShareInvitationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RejectResourceShareInvitationResult& RejectResourceShareInvitationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceShareInvitation"))
  {
    m_resourceShareInvitation = jsonValue.GetObject("resourceShareInvitation");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }



  return *this;
}
