/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/EnableOutboundWebIdentityFederationRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String EnableOutboundWebIdentityFederationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=EnableOutboundWebIdentityFederation&";
  ss << "Version=2010-05-08";
  return ss.str();
}

void EnableOutboundWebIdentityFederationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
