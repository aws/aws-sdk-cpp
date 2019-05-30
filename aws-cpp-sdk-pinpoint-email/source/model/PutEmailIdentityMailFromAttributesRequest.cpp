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

#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEmailIdentityMailFromAttributesRequest::PutEmailIdentityMailFromAttributesRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_mailFromDomainHasBeenSet(false),
    m_behaviorOnMxFailure(BehaviorOnMxFailure::NOT_SET),
    m_behaviorOnMxFailureHasBeenSet(false)
{
}

Aws::String PutEmailIdentityMailFromAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mailFromDomainHasBeenSet)
  {
   payload.WithString("MailFromDomain", m_mailFromDomain);

  }

  if(m_behaviorOnMxFailureHasBeenSet)
  {
   payload.WithString("BehaviorOnMxFailure", BehaviorOnMxFailureMapper::GetNameForBehaviorOnMxFailure(m_behaviorOnMxFailure));
  }

  return payload.View().WriteReadable();
}




