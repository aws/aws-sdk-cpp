/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSensitiveDataOccurrencesAvailabilityRequest::GetSensitiveDataOccurrencesAvailabilityRequest() : 
    m_findingIdHasBeenSet(false)
{
}

Aws::String GetSensitiveDataOccurrencesAvailabilityRequest::SerializePayload() const
{
  return {};
}




