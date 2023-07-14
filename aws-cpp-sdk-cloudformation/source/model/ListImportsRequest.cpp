/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListImportsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListImportsRequest::ListImportsRequest() : 
    m_exportNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListImportsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListImports&";
  if(m_exportNameHasBeenSet)
  {
    ss << "ExportName=" << StringUtils::URLEncode(m_exportName.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListImportsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
