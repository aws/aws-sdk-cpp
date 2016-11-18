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
#include <aws/rds/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_applyActionHasBeenSet(false),
    m_optInTypeHasBeenSet(false)
{
}

Aws::String ApplyPendingMaintenanceActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ApplyPendingMaintenanceAction&";
  if(m_resourceIdentifierHasBeenSet)
  {
    ss << "ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_applyActionHasBeenSet)
  {
    ss << "ApplyAction=" << StringUtils::URLEncode(m_applyAction.c_str()) << "&";
  }

  if(m_optInTypeHasBeenSet)
  {
    ss << "OptInType=" << StringUtils::URLEncode(m_optInType.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

