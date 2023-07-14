/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeConfigurationRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest() : 
    m_configurationIdHasBeenSet(false),
    m_configurationRevisionHasBeenSet(false)
{
}

Aws::String DescribeConfigurationRevisionRequest::SerializePayload() const
{
  return {};
}




