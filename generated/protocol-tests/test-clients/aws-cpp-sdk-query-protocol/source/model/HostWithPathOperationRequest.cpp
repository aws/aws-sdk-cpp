﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/HostWithPathOperationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

HostWithPathOperationRequest::HostWithPathOperationRequest()
{
}

Aws::String HostWithPathOperationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=HostWithPathOperation&";
  ss << "Version=2020-01-08";
  return ss.str();
}


void  HostWithPathOperationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
