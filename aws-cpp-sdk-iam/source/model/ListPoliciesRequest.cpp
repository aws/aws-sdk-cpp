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
#include <aws/iam/model/ListPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

ListPoliciesRequest::ListPoliciesRequest() : 
    m_scope(PolicyScopeType::NOT_SET),
    m_scopeHasBeenSet(false),
    m_onlyAttached(false),
    m_onlyAttachedHasBeenSet(false),
    m_pathPrefixHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListPolicies&";
  if(m_scopeHasBeenSet)
  {
    ss << "Scope=" << PolicyScopeTypeMapper::GetNameForPolicyScopeType(m_scope) << "&";
  }

  if(m_onlyAttachedHasBeenSet)
  {
    ss << "OnlyAttached=" << m_onlyAttached << "&";
  }

  if(m_pathPrefixHasBeenSet)
  {
    ss << "PathPrefix=" << StringUtils::URLEncode(m_pathPrefix.c_str()) << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxItemsHasBeenSet)
  {
    ss << "MaxItems=" << m_maxItems << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

