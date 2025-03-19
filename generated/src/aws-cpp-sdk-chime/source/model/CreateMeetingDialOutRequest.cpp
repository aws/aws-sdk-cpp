/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateMeetingDialOutRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMeetingDialOutRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromPhoneNumberHasBeenSet)
  {
   payload.WithString("FromPhoneNumber", m_fromPhoneNumber);

  }

  if(m_toPhoneNumberHasBeenSet)
  {
   payload.WithString("ToPhoneNumber", m_toPhoneNumber);

  }

  if(m_joinTokenHasBeenSet)
  {
   payload.WithString("JoinToken", m_joinToken);

  }

  return payload.View().WriteReadable();
}




