/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/GetSessionTokenRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

GetSessionTokenRequest::GetSessionTokenRequest() : 
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_tokenCodeHasBeenSet(false)
{
}

Aws::String GetSessionTokenRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetSessionToken&";
  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if(m_serialNumberHasBeenSet)
  {
    ss << "SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }

  if(m_tokenCodeHasBeenSet)
  {
    ss << "TokenCode=" << StringUtils::URLEncode(m_tokenCode.c_str()) << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  GetSessionTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
