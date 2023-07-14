/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

DeleteTopicRequest::DeleteTopicRequest() : 
    m_topicArnHasBeenSet(false)
{
}

Aws::String DeleteTopicRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTopic&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  DeleteTopicRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
