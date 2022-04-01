/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DescribeReservationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeReservationRequest::DescribeReservationRequest() : 
    m_reservationArnHasBeenSet(false)
{
}

Aws::String DescribeReservationRequest::SerializePayload() const
{
  return {};
}




