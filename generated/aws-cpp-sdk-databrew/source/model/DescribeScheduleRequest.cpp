/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeScheduleRequest::DescribeScheduleRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DescribeScheduleRequest::SerializePayload() const
{
  return {};
}




