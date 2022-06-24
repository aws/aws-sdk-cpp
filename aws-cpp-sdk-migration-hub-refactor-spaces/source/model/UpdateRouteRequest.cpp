/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/UpdateRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRouteRequest::UpdateRouteRequest() : 
    m_activationState(RouteActivationState::NOT_SET),
    m_activationStateHasBeenSet(false),
    m_applicationIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_routeIdentifierHasBeenSet(false)
{
}

Aws::String UpdateRouteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationStateHasBeenSet)
  {
   payload.WithString("ActivationState", RouteActivationStateMapper::GetNameForRouteActivationState(m_activationState));
  }

  return payload.View().WriteReadable();
}




