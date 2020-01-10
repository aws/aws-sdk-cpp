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

#include <aws/rds/model/ModifyCertificatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyCertificatesRequest::ModifyCertificatesRequest() : 
    m_certificateIdentifierHasBeenSet(false),
    m_removeCustomerOverride(false),
    m_removeCustomerOverrideHasBeenSet(false)
{
}

Aws::String ModifyCertificatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCertificates&";
  if(m_certificateIdentifierHasBeenSet)
  {
    ss << "CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }

  if(m_removeCustomerOverrideHasBeenSet)
  {
    ss << "RemoveCustomerOverride=" << std::boolalpha << m_removeCustomerOverride << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyCertificatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
