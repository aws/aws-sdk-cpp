/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

ConfirmSubscriptionRequest::ConfirmSubscriptionRequest() : 
    m_topicArnHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_authenticateOnUnsubscribeHasBeenSet(false)
{
}

Aws::String ConfirmSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ConfirmSubscription&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_tokenHasBeenSet)
  {
    ss << "Token=" << StringUtils::URLEncode(m_token.c_str()) << "&";
  }

  if(m_authenticateOnUnsubscribeHasBeenSet)
  {
    ss << "AuthenticateOnUnsubscribe=" << StringUtils::URLEncode(m_authenticateOnUnsubscribe.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  ConfirmSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
