/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DescribeLiveSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLiveSourceRequest::DescribeLiveSourceRequest() : 
    m_liveSourceNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

Aws::String DescribeLiveSourceRequest::SerializePayload() const
{
  return {};
}




