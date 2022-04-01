/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DeletePrefetchScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePrefetchScheduleRequest::DeletePrefetchScheduleRequest() : 
    m_nameHasBeenSet(false),
    m_playbackConfigurationNameHasBeenSet(false)
{
}

Aws::String DeletePrefetchScheduleRequest::SerializePayload() const
{
  return {};
}




