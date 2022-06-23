/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/StopExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopExperimentRequest::StopExperimentRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String StopExperimentRequest::SerializePayload() const
{
  return {};
}




