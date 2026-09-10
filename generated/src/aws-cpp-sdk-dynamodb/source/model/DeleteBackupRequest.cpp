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
#include <aws/dynamodb/model/DeleteBackupRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteBackupRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection DeleteBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DeleteBackup"));
  return headers;
}

DeleteBackupRequest::EndpointParameters DeleteBackupRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (BackupArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetBackupArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
