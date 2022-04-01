/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelConversionTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelConversionTaskRequest::CancelConversionTaskRequest() : 
    m_conversionTaskIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_reasonMessageHasBeenSet(false)
{
}

Aws::String CancelConversionTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelConversionTask&";
  if(m_conversionTaskIdHasBeenSet)
  {
    ss << "ConversionTaskId=" << StringUtils::URLEncode(m_conversionTaskId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_reasonMessageHasBeenSet)
  {
    ss << "ReasonMessage=" << StringUtils::URLEncode(m_reasonMessage.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelConversionTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
