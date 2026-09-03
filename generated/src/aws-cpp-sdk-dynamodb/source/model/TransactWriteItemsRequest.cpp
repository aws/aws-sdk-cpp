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
#include <aws/dynamodb/model/TransactWriteItemsRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TransactWriteItemsRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection TransactWriteItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TransactWriteItems"));
  return headers;
}

TransactWriteItemsRequest::EndpointParameters TransactWriteItemsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // operation context params go here
  parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(),
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  return parameters;
}
// Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> TransactWriteItemsRequest::GetOperationContextParams() const {
  Aws::Vector<Aws::String> result;
  auto& TransactItemsElems = (*this).GetTransactItems();
  for (auto& TransactItemsElem : TransactItemsElems) {
    auto& ConditionCheckElems = TransactItemsElem.GetConditionCheck().GetTableName();
    result.emplace_back(ConditionCheckElems);
    auto& PutElems = TransactItemsElem.GetPut().GetTableName();
    result.emplace_back(PutElems);
    auto& DeleteElems = TransactItemsElem.GetDelete().GetTableName();
    result.emplace_back(DeleteElems);
    auto& UpdateElems = TransactItemsElem.GetUpdate().GetTableName();
    result.emplace_back(UpdateElems);
  }
  return result;
}
