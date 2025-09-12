/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rest-xml-protocol/RestXmlProtocolErrorMarshaller.h>
#include <aws/rest-xml-protocol/RestXmlProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::RestXmlProtocol;

AWSError<CoreErrors> RestXmlProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = RestXmlProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}