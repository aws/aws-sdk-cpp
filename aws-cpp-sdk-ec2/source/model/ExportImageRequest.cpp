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

#include <aws/ec2/model/ExportImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ExportImageRequest::ExportImageRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_s3ExportLocationHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

Aws::String ExportImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ExportImage&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_diskImageFormatHasBeenSet)
  {
    ss << "DiskImageFormat=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_s3ExportLocationHasBeenSet)
  {
    m_s3ExportLocation.OutputToStream(ss, "S3ExportLocation");
  }

  if(m_roleNameHasBeenSet)
  {
    ss << "RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ExportImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
