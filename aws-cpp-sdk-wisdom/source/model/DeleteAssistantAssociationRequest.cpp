/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/DeleteAssistantAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssistantAssociationRequest::DeleteAssistantAssociationRequest() : 
    m_assistantAssociationIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false)
{
}

Aws::String DeleteAssistantAssociationRequest::SerializePayload() const
{
  return {};
}




