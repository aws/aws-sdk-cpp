/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceShareInvitationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceShareInvitationsResult::GetResourceShareInvitationsResult()
{
}

GetResourceShareInvitationsResult::GetResourceShareInvitationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceShareInvitationsResult& GetResourceShareInvitationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceShareInvitations"))
  {
    Aws::Utils::Array<JsonView> resourceShareInvitationsJsonList = jsonValue.GetArray("resourceShareInvitations");
    for(unsigned resourceShareInvitationsIndex = 0; resourceShareInvitationsIndex < resourceShareInvitationsJsonList.GetLength(); ++resourceShareInvitationsIndex)
    {
      m_resourceShareInvitations.push_back(resourceShareInvitationsJsonList[resourceShareInvitationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
