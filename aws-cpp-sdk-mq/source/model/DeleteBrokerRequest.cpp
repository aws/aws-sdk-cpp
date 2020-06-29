/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DeleteBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBrokerRequest::DeleteBrokerRequest() : 
    m_brokerIdHasBeenSet(false)
{
}

Aws::String DeleteBrokerRequest::SerializePayload() const
{
  return {};
}




