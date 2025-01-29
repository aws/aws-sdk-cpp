﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

RecursiveXmlShapesRequest::RecursiveXmlShapesRequest()
{
}

Aws::String RecursiveXmlShapesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RecursiveXmlShapes&";
  ss << "Version=2020-01-08";
  return ss.str();
}


void  RecursiveXmlShapesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
