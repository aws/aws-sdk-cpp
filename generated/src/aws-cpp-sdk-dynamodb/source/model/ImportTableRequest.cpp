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
#include <aws/dynamodb/model/ImportTableRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportTableRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection ImportTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ImportTable"));
  return headers;
}

ImportTableRequest::EndpointParameters ImportTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // operation context params go here
  parameters.emplace_back(Aws::String{"ResourceArn"}, this->GetOperationContextParams(),
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  return parameters;
}
// Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> ImportTableRequest::GetOperationContextParams() const {
  Aws::Vector<Aws::String> result;
  auto& TableCreationParametersElems = (*this).GetTableCreationParameters().GetTableName();
  result.emplace_back(TableCreationParametersElems);
  return result;
}
