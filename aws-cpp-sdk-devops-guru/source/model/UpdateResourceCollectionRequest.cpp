/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateResourceCollectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceCollectionRequest::UpdateResourceCollectionRequest() : 
    m_action(UpdateResourceCollectionAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
}

Aws::String UpdateResourceCollectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", UpdateResourceCollectionActionMapper::GetNameForUpdateResourceCollectionAction(m_action));
  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  return payload.View().WriteReadable();
}




