/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateSigninDelegateGroupsWithAccountRequest::AssociateSigninDelegateGroupsWithAccountRequest() : 
    m_accountIdHasBeenSet(false),
    m_signinDelegateGroupsHasBeenSet(false)
{
}

Aws::String AssociateSigninDelegateGroupsWithAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signinDelegateGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signinDelegateGroupsJsonList(m_signinDelegateGroups.size());
   for(unsigned signinDelegateGroupsIndex = 0; signinDelegateGroupsIndex < signinDelegateGroupsJsonList.GetLength(); ++signinDelegateGroupsIndex)
   {
     signinDelegateGroupsJsonList[signinDelegateGroupsIndex].AsObject(m_signinDelegateGroups[signinDelegateGroupsIndex].Jsonize());
   }
   payload.WithArray("SigninDelegateGroups", std::move(signinDelegateGroupsJsonList));

  }

  return payload.View().WriteReadable();
}




