﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeAnalysisSchemesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeAnalysisSchemesRequest::DescribeAnalysisSchemesRequest() : 
    m_domainNameHasBeenSet(false),
    m_analysisSchemeNamesHasBeenSet(false),
    m_deployed(false),
    m_deployedHasBeenSet(false)
{
}

Aws::String DescribeAnalysisSchemesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAnalysisSchemes&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_analysisSchemeNamesHasBeenSet)
  {
    unsigned analysisSchemeNamesCount = 1;
    for(auto& item : m_analysisSchemeNames)
    {
      ss << "AnalysisSchemeNames.member." << analysisSchemeNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      analysisSchemeNamesCount++;
    }
  }

  if(m_deployedHasBeenSet)
  {
    ss << "Deployed=" << std::boolalpha << m_deployed << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DescribeAnalysisSchemesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
