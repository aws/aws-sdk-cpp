/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/UnsubscribeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

UnsubscribeRequest::UnsubscribeRequest() : 
    m_subscriptionArnHasBeenSet(false)
{
}

Aws::String UnsubscribeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Unsubscribe&";
  if(m_subscriptionArnHasBeenSet)
  {
    ss << "SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  UnsubscribeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
