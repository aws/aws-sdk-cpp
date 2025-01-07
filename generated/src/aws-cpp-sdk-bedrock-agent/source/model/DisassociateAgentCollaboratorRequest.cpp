/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DisassociateAgentCollaboratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateAgentCollaboratorRequest::DisassociateAgentCollaboratorRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_collaboratorIdHasBeenSet(false)
{
}

Aws::String DisassociateAgentCollaboratorRequest::SerializePayload() const
{
  return {};
}




