/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteCustomAvailabilityZoneRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteCustomAvailabilityZoneRequest::DeleteCustomAvailabilityZoneRequest() : 
    m_customAvailabilityZoneIdHasBeenSet(false)
{
}

Aws::String DeleteCustomAvailabilityZoneRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCustomAvailabilityZone&";
  if(m_customAvailabilityZoneIdHasBeenSet)
  {
    ss << "CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteCustomAvailabilityZoneRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
