/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/CreateParticipantConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateParticipantConnectionRequest::CreateParticipantConnectionRequest() : 
    m_typeHasBeenSet(false),
    m_participantTokenHasBeenSet(false),
    m_connectParticipant(false),
    m_connectParticipantHasBeenSet(false)
{
}

Aws::String CreateParticipantConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typeJsonList(m_type.size());
   for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
   {
     typeJsonList[typeIndex].AsString(ConnectionTypeMapper::GetNameForConnectionType(m_type[typeIndex]));
   }
   payload.WithArray("Type", std::move(typeJsonList));

  }

  if(m_connectParticipantHasBeenSet)
  {
   payload.WithBool("ConnectParticipant", m_connectParticipant);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateParticipantConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_participantTokenHasBeenSet)
  {
    ss << m_participantToken;
    headers.emplace("x-amz-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




