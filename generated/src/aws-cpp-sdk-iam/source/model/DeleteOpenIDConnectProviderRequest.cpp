﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/DeleteOpenIDConnectProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String DeleteOpenIDConnectProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteOpenIDConnectProvider&";
  if(m_openIDConnectProviderArnHasBeenSet)
  {
    ss << "OpenIDConnectProviderArn=" << StringUtils::URLEncode(m_openIDConnectProviderArn.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  DeleteOpenIDConnectProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
