/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

DeleteEndpointRequest::DeleteEndpointRequest() : 
    m_endpointArnHasBeenSet(false)
{
}

Aws::String DeleteEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteEndpoint&";
  if(m_endpointArnHasBeenSet)
  {
    ss << "EndpointArn=" << StringUtils::URLEncode(m_endpointArn.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  DeleteEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
