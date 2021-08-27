/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/SwapEnvironmentCNAMEsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

SwapEnvironmentCNAMEsRequest::SwapEnvironmentCNAMEsRequest() : 
    m_sourceEnvironmentIdHasBeenSet(false),
    m_sourceEnvironmentNameHasBeenSet(false),
    m_destinationEnvironmentIdHasBeenSet(false),
    m_destinationEnvironmentNameHasBeenSet(false)
{
}

Aws::String SwapEnvironmentCNAMEsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SwapEnvironmentCNAMEs&";
  if(m_sourceEnvironmentIdHasBeenSet)
  {
    ss << "SourceEnvironmentId=" << StringUtils::URLEncode(m_sourceEnvironmentId.c_str()) << "&";
  }

  if(m_sourceEnvironmentNameHasBeenSet)
  {
    ss << "SourceEnvironmentName=" << StringUtils::URLEncode(m_sourceEnvironmentName.c_str()) << "&";
  }

  if(m_destinationEnvironmentIdHasBeenSet)
  {
    ss << "DestinationEnvironmentId=" << StringUtils::URLEncode(m_destinationEnvironmentId.c_str()) << "&";
  }

  if(m_destinationEnvironmentNameHasBeenSet)
  {
    ss << "DestinationEnvironmentName=" << StringUtils::URLEncode(m_destinationEnvironmentName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SwapEnvironmentCNAMEsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
