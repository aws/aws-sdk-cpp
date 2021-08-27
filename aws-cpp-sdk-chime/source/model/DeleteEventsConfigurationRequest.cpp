/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteEventsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEventsConfigurationRequest::DeleteEventsConfigurationRequest() : 
    m_accountIdHasBeenSet(false),
    m_botIdHasBeenSet(false)
{
}

Aws::String DeleteEventsConfigurationRequest::SerializePayload() const
{
  return {};
}




