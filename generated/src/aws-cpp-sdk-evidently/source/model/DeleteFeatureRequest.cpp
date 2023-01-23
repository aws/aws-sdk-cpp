/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/DeleteFeatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFeatureRequest::DeleteFeatureRequest() : 
    m_featureHasBeenSet(false),
    m_projectHasBeenSet(false)
{
}

Aws::String DeleteFeatureRequest::SerializePayload() const
{
  return {};
}




