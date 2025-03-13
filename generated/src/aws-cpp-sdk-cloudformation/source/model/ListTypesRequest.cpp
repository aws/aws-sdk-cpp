/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ListTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListTypes&";
  if(m_visibilityHasBeenSet)
  {
    ss << "Visibility=" << StringUtils::URLEncode(VisibilityMapper::GetNameForVisibility(m_visibility)) << "&";
  }

  if(m_provisioningTypeHasBeenSet)
  {
    ss << "ProvisioningType=" << StringUtils::URLEncode(ProvisioningTypeMapper::GetNameForProvisioningType(m_provisioningType)) << "&";
  }

  if(m_deprecatedStatusHasBeenSet)
  {
    ss << "DeprecatedStatus=" << StringUtils::URLEncode(DeprecatedStatusMapper::GetNameForDeprecatedStatus(m_deprecatedStatus)) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(RegistryTypeMapper::GetNameForRegistryType(m_type)) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    m_filters.OutputToStream(ss, "Filters");
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


void  ListTypesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
