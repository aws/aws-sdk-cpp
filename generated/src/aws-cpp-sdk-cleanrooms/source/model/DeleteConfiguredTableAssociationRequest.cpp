/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfiguredTableAssociationRequest::DeleteConfiguredTableAssociationRequest() : 
    m_configuredTableAssociationIdentifierHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false)
{
}

Aws::String DeleteConfiguredTableAssociationRequest::SerializePayload() const
{
  return {};
}




