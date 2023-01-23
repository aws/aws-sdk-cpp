/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeConfigurationRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest() : 
    m_arnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

Aws::String DescribeConfigurationRevisionRequest::SerializePayload() const
{
  return {};
}




