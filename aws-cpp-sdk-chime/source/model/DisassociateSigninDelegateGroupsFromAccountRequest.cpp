/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> groupNamesJsonList(m_groupNames.size());
   for(unsigned groupNamesIndex = 0; groupNamesIndex < groupNamesJsonList.GetLength(); ++groupNamesIndex)
   {
     groupNamesJsonList[groupNamesIndex].AsString(m_groupNames[groupNamesIndex]);
   }
   payload.WithArray("GroupNames", std::move(groupNamesJsonList));

  }

  return payload.View().WriteReadable();
}




