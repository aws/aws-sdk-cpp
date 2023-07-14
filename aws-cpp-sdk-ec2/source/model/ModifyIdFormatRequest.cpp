/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIdFormatRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIdFormatRequest::ModifyIdFormatRequest() : 
    m_resourceHasBeenSet(false),
    m_useLongIds(false),
    m_useLongIdsHasBeenSet(false)
{
}

Aws::String ModifyIdFormatRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIdFormat&";
  if(m_resourceHasBeenSet)
  {
    ss << "Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }

  if(m_useLongIdsHasBeenSet)
  {
    ss << "UseLongIds=" << std::boolalpha << m_useLongIds << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIdFormatRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
