/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SendRawEmailRequest::SendRawEmailRequest() : 
    m_sourceHasBeenSet(false),
    m_destinationsHasBeenSet(false)
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
      ss << "Destinations." << destinationsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      destinationsCount++;
    }
  }
  m_rawMessage.OutputToStream(ss, "RawMessage.");
  ss << "Version=2010-12-01";
  return ss.str();
}

