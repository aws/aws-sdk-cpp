/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteAnalysisSchemeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DeleteAnalysisSchemeRequest::DeleteAnalysisSchemeRequest() : 
    m_domainNameHasBeenSet(false),
    m_analysisSchemeNameHasBeenSet(false)
{
}

Aws::String DeleteAnalysisSchemeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAnalysisScheme&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_analysisSchemeNameHasBeenSet)
  {
    ss << "AnalysisSchemeName=" << StringUtils::URLEncode(m_analysisSchemeName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DeleteAnalysisSchemeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
