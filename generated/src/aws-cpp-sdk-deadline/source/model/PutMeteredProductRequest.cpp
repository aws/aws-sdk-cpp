/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/PutMeteredProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMeteredProductRequest::PutMeteredProductRequest() : 
    m_licenseEndpointIdHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

Aws::String PutMeteredProductRequest::SerializePayload() const
{
  return {};
}




