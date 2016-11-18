/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_launchPermissionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String ModifyImageAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyImageAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << StringUtils::URLEncode(m_attribute.c_str()) << "&";
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

  if(m_valueHasBeenSet)
  {
    ss << "Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_launchPermissionHasBeenSet)
  {
    m_launchPermission.OutputToStream(ss, "LaunchPermission");
  }

  if(m_descriptionHasBeenSet)
  {
    m_description.OutputToStream(ss, "Description");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

