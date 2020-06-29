/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteHsmClientCertificateRequest::DeleteHsmClientCertificateRequest() : 
    m_hsmClientCertificateIdentifierHasBeenSet(false)
{
}

Aws::String DeleteHsmClientCertificateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteHsmClientCertificate&";
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
    ss << "HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteHsmClientCertificateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
