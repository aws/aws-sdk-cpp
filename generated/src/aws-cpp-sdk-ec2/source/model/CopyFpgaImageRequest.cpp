/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CopyFpgaImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CopyFpgaImageRequest::CopyFpgaImageRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_sourceFpgaImageIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CopyFpgaImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyFpgaImage&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_sourceFpgaImageIdHasBeenSet)
  {
    ss << "SourceFpgaImageId=" << StringUtils::URLEncode(m_sourceFpgaImageId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_sourceRegionHasBeenSet)
  {
    ss << "SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CopyFpgaImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
