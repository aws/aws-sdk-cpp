/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/UpdateConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigRequest::UpdateConfigRequest() : 
    m_configDataHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configDataHasBeenSet)
  {
   payload.WithObject("configData", m_configData.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




