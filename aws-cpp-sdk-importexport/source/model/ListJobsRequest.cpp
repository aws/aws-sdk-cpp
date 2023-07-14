/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/ListJobsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils;

ListJobsRequest::ListJobsRequest() : 
    m_maxJobs(0),
    m_maxJobsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_aPIVersionHasBeenSet(false)
{
}

Aws::String ListJobsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListJobs&";
  if(m_maxJobsHasBeenSet)
  {
    ss << "MaxJobs=" << m_maxJobs << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_aPIVersionHasBeenSet)
  {
    ss << "APIVersion=" << StringUtils::URLEncode(m_aPIVersion.c_str()) << "&";
  }

  ss << "Version=2010-06-01";
  return ss.str();
}


void  ListJobsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
