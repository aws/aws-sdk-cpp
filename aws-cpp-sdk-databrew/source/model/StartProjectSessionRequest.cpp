/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/StartProjectSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartProjectSessionRequest::StartProjectSessionRequest() : 
    m_nameHasBeenSet(false),
    m_assumeControl(false),
    m_assumeControlHasBeenSet(false)
{
}

Aws::String StartProjectSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assumeControlHasBeenSet)
  {
   payload.WithBool("AssumeControl", m_assumeControl);

  }

  return payload.View().WriteReadable();
}




