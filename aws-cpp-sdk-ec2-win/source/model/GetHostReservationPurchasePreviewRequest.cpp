/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetHostReservationPurchasePreviewRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetHostReservationPurchasePreviewRequest::GetHostReservationPurchasePreviewRequest() : 
    m_hostIdSetHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
}

Aws::String GetHostReservationPurchasePreviewRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetHostReservationPurchasePreview&";
  if(m_hostIdSetHasBeenSet)
  {
    unsigned hostIdSetCount = 1;
    for(auto& item : m_hostIdSet)
    {
      ss << "HostIdSet." << hostIdSetCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostIdSetCount++;
    }
  }

  if(m_offeringIdHasBeenSet)
  {
    ss << "OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetHostReservationPurchasePreviewRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
