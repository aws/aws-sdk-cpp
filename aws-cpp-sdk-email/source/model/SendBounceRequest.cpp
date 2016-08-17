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
#include <aws/email/model/SendBounceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SendBounceRequest::SendBounceRequest() : 
    m_originalMessageIdHasBeenSet(false),
    m_bounceSenderHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_messageDsnHasBeenSet(false),
    m_bouncedRecipientInfoListHasBeenSet(false),
    m_bounceSenderArnHasBeenSet(false)
{
}

Aws::String SendBounceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendBounce&";
  if(m_originalMessageIdHasBeenSet)
  {
    ss << "OriginalMessageId=" << StringUtils::URLEncode(m_originalMessageId.c_str()) << "&";
  }

  if(m_bounceSenderHasBeenSet)
  {
    ss << "BounceSender=" << StringUtils::URLEncode(m_bounceSender.c_str()) << "&";
  }

  if(m_explanationHasBeenSet)
  {
    ss << "Explanation=" << StringUtils::URLEncode(m_explanation.c_str()) << "&";
  }

  if(m_messageDsnHasBeenSet)
  {
    m_messageDsn.OutputToStream(ss, "MessageDsn");
  }

  if(m_bouncedRecipientInfoListHasBeenSet)
  {
    unsigned bouncedRecipientInfoListCount = 1;
    for(auto& item : m_bouncedRecipientInfoList)
    {
      item.OutputToStream(ss, "BouncedRecipientInfoList.member.", bouncedRecipientInfoListCount, "");
      bouncedRecipientInfoListCount++;
    }
  }

  if(m_bounceSenderArnHasBeenSet)
  {
    ss << "BounceSenderArn=" << StringUtils::URLEncode(m_bounceSenderArn.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}

