/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetAssociatedEnclaveCertificateIamRolesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetAssociatedEnclaveCertificateIamRolesRequest::GetAssociatedEnclaveCertificateIamRolesRequest() : 
    m_certificateArnHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String GetAssociatedEnclaveCertificateIamRolesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetAssociatedEnclaveCertificateIamRoles&";
  if(m_certificateArnHasBeenSet)
  {
    ss << "CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetAssociatedEnclaveCertificateIamRolesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
