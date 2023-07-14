/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBrokerRequest::DescribeBrokerRequest() : 
    m_brokerIdHasBeenSet(false)
{
}

Aws::String DescribeBrokerRequest::SerializePayload() const
{
  return {};
}




