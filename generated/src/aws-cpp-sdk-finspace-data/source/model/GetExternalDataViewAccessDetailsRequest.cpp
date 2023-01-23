/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetExternalDataViewAccessDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExternalDataViewAccessDetailsRequest::GetExternalDataViewAccessDetailsRequest() : 
    m_dataViewIdHasBeenSet(false),
    m_datasetIdHasBeenSet(false)
{
}

Aws::String GetExternalDataViewAccessDetailsRequest::SerializePayload() const
{
  return {};
}




