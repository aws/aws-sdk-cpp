/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetMetricWidgetImageRequest::GetMetricWidgetImageRequest() : 
    m_metricWidgetHasBeenSet(false),
    m_outputFormatHasBeenSet(false)
{
}

Aws::String GetMetricWidgetImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricWidgetImage&";
  if(m_metricWidgetHasBeenSet)
  {
    ss << "MetricWidget=" << StringUtils::URLEncode(m_metricWidget.c_str()) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
    ss << "OutputFormat=" << StringUtils::URLEncode(m_outputFormat.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricWidgetImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
