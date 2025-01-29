﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/XmlMapsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

XmlMapsRequest::XmlMapsRequest()
{
}

Aws::String XmlMapsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=XmlMaps&";
  ss << "Version=2020-01-08";
  return ss.str();
}


void  XmlMapsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
