/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DeleteTestSuiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTestSuiteRequest::DeleteTestSuiteRequest() : 
    m_testSuiteIdHasBeenSet(false)
{
}

Aws::String DeleteTestSuiteRequest::SerializePayload() const
{
  return {};
}




