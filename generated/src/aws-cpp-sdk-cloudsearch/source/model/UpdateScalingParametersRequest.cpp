﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/UpdateScalingParametersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

Aws::String UpdateScalingParametersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateScalingParameters&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_scalingParametersHasBeenSet)
  {
    m_scalingParameters.OutputToStream(ss, "ScalingParameters");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  UpdateScalingParametersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
