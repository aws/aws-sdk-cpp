/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

ListAvailableSolutionStacksRequest::ListAvailableSolutionStacksRequest()
{
}

Aws::String ListAvailableSolutionStacksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListAvailableSolutionStacks&";
  ss << "Version=2010-12-01";
  return ss.str();
}


void  ListAvailableSolutionStacksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
