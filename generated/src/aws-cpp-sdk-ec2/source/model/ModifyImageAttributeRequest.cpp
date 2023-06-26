/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() : 
    m_attributeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_launchPermissionHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_organizationArnsHasBeenSet(false),
    m_organizationalUnitArnsHasBeenSet(false),
    m_imdsSupportHasBeenSet(false)
{
}

Aws::String ModifyImageAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyImageAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << StringUtils::URLEncode(m_attribute.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    m_description.OutputToStream(ss, "Description");
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_launchPermissionHasBeenSet)
  {
    m_launchPermission.OutputToStream(ss, "LaunchPermission");
  }

  if(m_operationTypeHasBeenSet)
  {
    ss << "OperationType=" << OperationTypeMapper::GetNameForOperationType(m_operationType) << "&";
  }

  if(m_productCodesHasBeenSet)
  {
    unsigned productCodesCount = 1;
    for(auto& item : m_productCodes)
    {
      ss << "ProductCode." << productCodesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      productCodesCount++;
    }
  }

  if(m_userGroupsHasBeenSet)
  {
    unsigned userGroupsCount = 1;
    for(auto& item : m_userGroups)
    {
      ss << "UserGroup." << userGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userGroupsCount++;
    }
  }

  if(m_userIdsHasBeenSet)
  {
    unsigned userIdsCount = 1;
    for(auto& item : m_userIds)
    {
      ss << "UserId." << userIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userIdsCount++;
    }
  }

  if(m_valueHasBeenSet)
  {
    ss << "Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_organizationArnsHasBeenSet)
  {
    unsigned organizationArnsCount = 1;
    for(auto& item : m_organizationArns)
    {
      ss << "OrganizationArn." << organizationArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      organizationArnsCount++;
    }
  }

  if(m_organizationalUnitArnsHasBeenSet)
  {
    unsigned organizationalUnitArnsCount = 1;
    for(auto& item : m_organizationalUnitArns)
    {
      ss << "OrganizationalUnitArn." << organizationalUnitArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      organizationalUnitArnsCount++;
    }
  }

  if(m_imdsSupportHasBeenSet)
  {
    m_imdsSupport.OutputToStream(ss, "ImdsSupport");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyImageAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
