/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationRequest::DescribeConfigurationRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String DescribeConfigurationRequest::SerializePayload() const
{
  return {};
}




