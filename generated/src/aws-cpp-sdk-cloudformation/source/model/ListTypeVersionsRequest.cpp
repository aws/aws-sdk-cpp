/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListTypeVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ListTypeVersionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListTypeVersions&";
  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(RegistryTypeMapper::GetNameForRegistryType(m_type)) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_arnHasBeenSet)
  {
    ss << "Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_deprecatedStatusHasBeenSet)
  {
    ss << "DeprecatedStatus=" << StringUtils::URLEncode(DeprecatedStatusMapper::GetNameForDeprecatedStatus(m_deprecatedStatus)) << "&";
  }

  if(m_publisherIdHasBeenSet)
  {
    ss << "PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListTypeVersionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
