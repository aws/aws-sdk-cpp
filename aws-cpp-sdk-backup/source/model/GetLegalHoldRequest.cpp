/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetLegalHoldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLegalHoldRequest::GetLegalHoldRequest() : 
    m_legalHoldIdHasBeenSet(false)
{
}

Aws::String GetLegalHoldRequest::SerializePayload() const
{
  return {};
}




