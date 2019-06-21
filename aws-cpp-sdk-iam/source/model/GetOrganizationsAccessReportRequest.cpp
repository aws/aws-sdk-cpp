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

#include <aws/iam/model/GetOrganizationsAccessReportRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

GetOrganizationsAccessReportRequest::GetOrganizationsAccessReportRequest() : 
    m_jobIdHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_sortKey(SortKeyType::NOT_SET),
    m_sortKeyHasBeenSet(false)
{
}

Aws::String GetOrganizationsAccessReportRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetOrganizationsAccessReport&";
  if(m_jobIdHasBeenSet)
  {
    ss << "JobId=" << StringUtils::URLEncode(m_jobId.c_str()) << "&";
  }

  if(m_maxItemsHasBeenSet)
  {
    ss << "MaxItems=" << m_maxItems << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_sortKeyHasBeenSet)
  {
    ss << "SortKey=" << SortKeyTypeMapper::GetNameForSortKeyType(m_sortKey) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  GetOrganizationsAccessReportRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
