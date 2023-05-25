/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DisassociateTrackerConsumerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateTrackerConsumerRequest::DisassociateTrackerConsumerRequest() : 
    m_consumerArnHasBeenSet(false),
    m_trackerNameHasBeenSet(false)
{
}

Aws::String DisassociateTrackerConsumerRequest::SerializePayload() const
{
  return {};
}




