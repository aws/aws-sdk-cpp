/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/StartModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartModelRequest::StartModelRequest() : 
    m_projectNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_minInferenceUnits(0),
    m_minInferenceUnitsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_maxInferenceUnits(0),
    m_maxInferenceUnitsHasBeenSet(false)
{
}

Aws::String StartModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_minInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MinInferenceUnits", m_minInferenceUnits);

  }

  if(m_maxInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MaxInferenceUnits", m_maxInferenceUnits);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




