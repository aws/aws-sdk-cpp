/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AssociateTargetsWithJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateTargetsWithJobRequest::AssociateTargetsWithJobRequest() : 
    m_targetsHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

Aws::String AssociateTargetsWithJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload.View().WriteReadable();
}




