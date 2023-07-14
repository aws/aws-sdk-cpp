﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SendRawEmailRequest::SendRawEmailRequest() : 
    m_sourceHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_rawMessageHasBeenSet(false),
    m_fromArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_returnPathArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String SendRawEmailRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendRawEmail&";
  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationsHasBeenSet)
  {
    unsigned destinationsCount = 1;
    for(auto& item : m_destinations)
    {
      ss << "Destinations.member." << destinationsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      destinationsCount++;
    }
  }

  if(m_rawMessageHasBeenSet)
  {
    m_rawMessage.OutputToStream(ss, "RawMessage");
  }

  if(m_fromArnHasBeenSet)
  {
    ss << "FromArn=" << StringUtils::URLEncode(m_fromArn.c_str()) << "&";
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

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SendRawEmailRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
