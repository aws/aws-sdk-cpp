/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyFpgaImageAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyFpgaImageAttributeRequest::ModifyFpgaImageAttributeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_fpgaImageIdHasBeenSet(false),
    m_attribute(FpgaImageAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_loadPermissionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String ModifyFpgaImageAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyFpgaImageAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_fpgaImageIdHasBeenSet)
  {
    ss << "FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << FpgaImageAttributeNameMapper::GetNameForFpgaImageAttributeName(m_attribute) << "&";
  }

  if(m_operationTypeHasBeenSet)
  {
    ss << "OperationType=" << OperationTypeMapper::GetNameForOperationType(m_operationType) << "&";
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

  if(m_loadPermissionHasBeenSet)
  {
    m_loadPermission.OutputToStream(ss, "LoadPermission");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyFpgaImageAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
