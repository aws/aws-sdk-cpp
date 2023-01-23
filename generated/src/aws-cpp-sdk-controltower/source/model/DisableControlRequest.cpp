/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/DisableControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableControlRequest::DisableControlRequest() : 
    m_controlIdentifierHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
}

Aws::String DisableControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_controlIdentifierHasBeenSet)
  {
   payload.WithString("controlIdentifier", m_controlIdentifier);

  }

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithString("targetIdentifier", m_targetIdentifier);

  }

  return payload.View().WriteReadable();
}




