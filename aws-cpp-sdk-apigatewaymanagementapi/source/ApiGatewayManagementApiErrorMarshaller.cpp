/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrorMarshaller.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrors.h>

using namespace Aws::Client;
using namespace Aws::ApiGatewayManagementApi;

AWSError<CoreErrors> ApiGatewayManagementApiErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ApiGatewayManagementApiErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}