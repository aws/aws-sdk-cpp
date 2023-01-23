/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendTemplatedEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SendTemplatedEmailRequest::SendTemplatedEmailRequest() : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_returnPathHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_returnPathArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

Aws::String SendTemplatedEmailRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendTemplatedEmail&";
  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
    m_destination.OutputToStream(ss, "Destination");
  }

  if(m_replyToAddressesHasBeenSet)
  {
    unsigned replyToAddressesCount = 1;
    for(auto& item : m_replyToAddresses)
    {
      ss << "ReplyToAddresses.member." << replyToAddressesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      replyToAddressesCount++;
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
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_templateHasBeenSet)
  {
    ss << "Template=" << StringUtils::URLEncode(m_template.c_str()) << "&";
  }

  if(m_templateArnHasBeenSet)
  {
    ss << "TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if(m_templateDataHasBeenSet)
  {
    ss << "TemplateData=" << StringUtils::URLEncode(m_templateData.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SendTemplatedEmailRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
