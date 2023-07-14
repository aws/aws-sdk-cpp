/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetEventsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEventsConfigurationRequest::GetEventsConfigurationRequest() : 
    m_accountIdHasBeenSet(false),
    m_botIdHasBeenSet(false)
{
}

Aws::String GetEventsConfigurationRequest::SerializePayload() const
{
  return {};
}




