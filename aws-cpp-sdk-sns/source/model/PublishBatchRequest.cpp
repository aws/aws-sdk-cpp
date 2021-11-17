/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PublishBatchRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

PublishBatchRequest::PublishBatchRequest() : 
    m_topicArnHasBeenSet(false),
    m_publishBatchRequestEntriesHasBeenSet(false)
{
}

Aws::String PublishBatchRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PublishBatch&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_publishBatchRequestEntriesHasBeenSet)
  {
    unsigned publishBatchRequestEntriesCount = 1;
    for(auto& item : m_publishBatchRequestEntries)
    {
      item.OutputToStream(ss, "PublishBatchRequestEntries.member.", publishBatchRequestEntriesCount, "");
      publishBatchRequestEntriesCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  PublishBatchRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
