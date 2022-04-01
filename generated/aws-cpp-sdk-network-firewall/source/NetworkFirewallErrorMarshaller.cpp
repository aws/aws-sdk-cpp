/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/network-firewall/NetworkFirewallErrorMarshaller.h>
#include <aws/network-firewall/NetworkFirewallErrors.h>

using namespace Aws::Client;
using namespace Aws::NetworkFirewall;

AWSError<CoreErrors> NetworkFirewallErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NetworkFirewallErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}