﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/EndpointOperationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

EndpointOperationRequest::EndpointOperationRequest()
{
}

Aws::String EndpointOperationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EndpointOperation&";
  ss << "Version=2020-01-08";
  return ss.str();
}


void  EndpointOperationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
