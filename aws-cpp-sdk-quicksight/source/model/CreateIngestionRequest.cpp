/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateIngestionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIngestionRequest::CreateIngestionRequest() : 
    m_dataSetIdHasBeenSet(false),
    m_ingestionIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false)
{
}

Aws::String CreateIngestionRequest::SerializePayload() const
{
  return {};
}




