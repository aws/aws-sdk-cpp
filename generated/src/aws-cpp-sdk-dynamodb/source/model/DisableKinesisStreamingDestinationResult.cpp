/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DisableKinesisStreamingDestinationResult.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableKinesisStreamingDestinationResult::DisableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DisableKinesisStreamingDestinationResult& DisableKinesisStreamingDestinationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  return *this;
}
