/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CopyImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CopyImageRequest::CopyImageRequest() : 
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceImageIdHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_destinationOutpostArnHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_copyImageTags(false),
    m_copyImageTagsHasBeenSet(false)
{
}

Aws::String CopyImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyImage&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_sourceImageIdHasBeenSet)
  {
    ss << "SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }

  if(m_sourceRegionHasBeenSet)
  {
    ss << "SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
  }

  if(m_destinationOutpostArnHasBeenSet)
  {
    ss << "DestinationOutpostArn=" << StringUtils::URLEncode(m_destinationOutpostArn.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_copyImageTagsHasBeenSet)
  {
    ss << "CopyImageTags=" << std::boolalpha << m_copyImageTags << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CopyImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
