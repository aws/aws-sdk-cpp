/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceErrorMarshaller.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceErrors.h>

using namespace Aws::Client;
using namespace Aws::RestXmlProtocolNamespace;

AWSError<CoreErrors> RestXmlProtocolNamespaceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RestXmlProtocolNamespaceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}