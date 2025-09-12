/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ErrorMarshaller.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Errors.h>

using namespace Aws::Client;
using namespace Aws::QueryCompatibleJSONRPC10;

AWSError<CoreErrors> QueryCompatibleJSONRPC10ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = QueryCompatibleJSONRPC10ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}