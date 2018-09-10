﻿/*
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

#include <aws/neptune/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false)
{
}

Aws::String AddSourceIdentifierToSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddSourceIdentifierToSubscription&";
  if(m_subscriptionNameHasBeenSet)
  {
    ss << "SubscriptionName=" << StringUtils::URLEncode(m_subscriptionName.c_str()) << "&";
  }

  if(m_sourceIdentifierHasBeenSet)
  {
    ss << "SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  AddSourceIdentifierToSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
