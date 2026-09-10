/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DescribeTableReplicaAutoScalingRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeTableReplicaAutoScalingRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection DescribeTableReplicaAutoScalingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeTableReplicaAutoScaling"));
  return headers;
}

DescribeTableReplicaAutoScalingRequest::EndpointParameters DescribeTableReplicaAutoScalingRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
