/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListTypeRegistrationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ListTypeRegistrationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListTypeRegistrations&";
  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(RegistryTypeMapper::GetNameForRegistryType(m_type)) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_typeArnHasBeenSet)
  {
    ss << "TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_registrationStatusFilterHasBeenSet)
  {
    ss << "RegistrationStatusFilter=" << StringUtils::URLEncode(RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatusFilter)) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListTypeRegistrationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
