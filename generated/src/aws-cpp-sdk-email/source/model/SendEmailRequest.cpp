/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

Aws::String SendEmailRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendEmail&";
  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
    m_destination.OutputToStream(ss, "Destination");
  }

  if(m_messageHasBeenSet)
  {
    m_message.OutputToStream(ss, "Message");
  }

  if(m_replyToAddressesHasBeenSet)
  {
    if (m_replyToAddresses.empty())
    {
      ss << "ReplyToAddresses=&";
    }
    else
    {
      unsigned replyToAddressesCount = 1;
      for(auto& item : m_replyToAddresses)
      {
        ss << "ReplyToAddresses.member." << replyToAddressesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        replyToAddressesCount++;
      }
    }
  }

  if(m_returnPathHasBeenSet)
  {
    ss << "ReturnPath=" << StringUtils::URLEncode(m_returnPath.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_returnPathArnHasBeenSet)
  {
    ss << "ReturnPathArn=" << StringUtils::URLEncode(m_returnPathArn.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SendEmailRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
