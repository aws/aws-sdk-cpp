/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateSigninDelegateGroupsFromAccountRequest::DisassociateSigninDelegateGroupsFromAccountRequest() : 
    m_accountIdHasBeenSet(false),
    m_groupNamesHasBeenSet(false)
{
}

Aws::String DisassociateSigninDelegateGroupsFromAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupNamesJsonList(m_groupNames.size());
   for(unsigned groupNamesIndex = 0; groupNamesIndex < groupNamesJsonList.GetLength(); ++groupNamesIndex)
   {
     groupNamesJsonList[groupNamesIndex].AsString(m_groupNames[groupNamesIndex]);
   }
   payload.WithArray("GroupNames", std::move(groupNamesJsonList));

  }

  return payload.View().WriteReadable();
}




