/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/GetHostReservationPurchasePreviewRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetHostReservationPurchasePreviewRequest::GetHostReservationPurchasePreviewRequest() : 
    m_offeringIdHasBeenSet(false),
    m_hostIdSetHasBeenSet(false)
{
}

Aws::String GetHostReservationPurchasePreviewRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetHostReservationPurchasePreview&";
  if(m_offeringIdHasBeenSet)
  {
    ss << "OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetHostReservationPurchasePreviewRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
