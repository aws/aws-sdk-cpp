/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineAnalysisSchemeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DefineAnalysisSchemeRequest::DefineAnalysisSchemeRequest() : 
    m_domainNameHasBeenSet(false),
    m_analysisSchemeHasBeenSet(false)
{
}

Aws::String DefineAnalysisSchemeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DefineAnalysisScheme&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_analysisSchemeHasBeenSet)
  {
    m_analysisScheme.OutputToStream(ss, "AnalysisScheme");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DefineAnalysisSchemeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
