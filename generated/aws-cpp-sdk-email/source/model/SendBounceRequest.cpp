/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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


void  SendBounceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
