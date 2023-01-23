/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CheckDNSAvailabilityRequest::CheckDNSAvailabilityRequest() : 
    m_cNAMEPrefixHasBeenSet(false)
{
}

Aws::String CheckDNSAvailabilityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CheckDNSAvailability&";
  if(m_cNAMEPrefixHasBeenSet)
  {
    ss << "CNAMEPrefix=" << StringUtils::URLEncode(m_cNAMEPrefix.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CheckDNSAvailabilityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
