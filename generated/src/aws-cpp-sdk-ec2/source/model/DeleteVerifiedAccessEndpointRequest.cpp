﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteVerifiedAccessEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteVerifiedAccessEndpointRequest::DeleteVerifiedAccessEndpointRequest() : 
    m_verifiedAccessEndpointIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteVerifiedAccessEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteVerifiedAccessEndpoint&";
  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
    ss << "VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteVerifiedAccessEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
