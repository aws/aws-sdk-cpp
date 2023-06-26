/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DeleteConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfigRequest::DeleteConfigRequest() : 
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false)
{
}

Aws::String DeleteConfigRequest::SerializePayload() const
{
  return {};
}




