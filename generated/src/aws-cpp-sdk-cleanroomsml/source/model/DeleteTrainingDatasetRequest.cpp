/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DeleteTrainingDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrainingDatasetRequest::DeleteTrainingDatasetRequest() : 
    m_trainingDatasetArnHasBeenSet(false)
{
}

Aws::String DeleteTrainingDatasetRequest::SerializePayload() const
{
  return {};
}




