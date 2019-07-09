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

#include <aws/monitoring/model/DeleteAnomalyDetectorRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest() : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statHasBeenSet(false)
{
}

Aws::String DeleteAnomalyDetectorRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAnomalyDetector&";
  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_statHasBeenSet)
  {
    ss << "Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DeleteAnomalyDetectorRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
