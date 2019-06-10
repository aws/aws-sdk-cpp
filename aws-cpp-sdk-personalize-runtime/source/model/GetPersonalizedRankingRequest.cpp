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

#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPersonalizedRankingRequest::GetPersonalizedRankingRequest() : 
    m_campaignArnHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String GetPersonalizedRankingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_inputListHasBeenSet)
  {
   Array<JsonValue> inputListJsonList(m_inputList.size());
   for(unsigned inputListIndex = 0; inputListIndex < inputListJsonList.GetLength(); ++inputListIndex)
   {
     inputListJsonList[inputListIndex].AsString(m_inputList[inputListIndex]);
   }
   payload.WithArray("inputList", std::move(inputListJsonList));

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload.View().WriteReadable();
}




