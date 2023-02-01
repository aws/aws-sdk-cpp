/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DescribeAppInstanceAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppInstanceAdminRequest::DescribeAppInstanceAdminRequest() : 
    m_appInstanceAdminArnHasBeenSet(false),
    m_appInstanceArnHasBeenSet(false)
{
}

Aws::String DescribeAppInstanceAdminRequest::SerializePayload() const
{
  return {};
}




