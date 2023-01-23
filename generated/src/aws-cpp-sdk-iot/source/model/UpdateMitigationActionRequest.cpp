/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateMitigationActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMitigationActionRequest::UpdateMitigationActionRequest() : 
    m_actionNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_actionParamsHasBeenSet(false)
{
}

Aws::String UpdateMitigationActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_actionParamsHasBeenSet)
  {
   payload.WithObject("actionParams", m_actionParams.Jsonize());

  }

  return payload.View().WriteReadable();
}




