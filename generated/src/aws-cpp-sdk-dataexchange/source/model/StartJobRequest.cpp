/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/StartJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartJobRequest::StartJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String StartJobRequest::SerializePayload() const
{
  return {};
}




