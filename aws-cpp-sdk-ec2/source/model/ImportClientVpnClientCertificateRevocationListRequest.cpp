/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportClientVpnClientCertificateRevocationListRequest::ImportClientVpnClientCertificateRevocationListRequest() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_certificateRevocationListHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ImportClientVpnClientCertificateRevocationListRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportClientVpnClientCertificateRevocationList&";
  if(m_clientVpnEndpointIdHasBeenSet)
  {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_certificateRevocationListHasBeenSet)
  {
    ss << "CertificateRevocationList=" << StringUtils::URLEncode(m_certificateRevocationList.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ImportClientVpnClientCertificateRevocationListRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
