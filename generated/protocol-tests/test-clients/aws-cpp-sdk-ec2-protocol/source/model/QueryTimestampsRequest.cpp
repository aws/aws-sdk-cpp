/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/QueryTimestampsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

QueryTimestampsRequest::QueryTimestampsRequest() : 
    m_normalFormatHasBeenSet(false),
    m_epochMemberHasBeenSet(false),
    m_epochTargetHasBeenSet(false)
{
}

Aws::String QueryTimestampsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=QueryTimestamps&";
  if(m_normalFormatHasBeenSet)
  {
    ss << "normalFormat=" << StringUtils::URLEncode(m_normalFormat.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_epochMemberHasBeenSet)
  {
    ss << "epochMember=" << StringUtils::URLEncode(m_epochMember.ToGmtString(Aws::Utils::DateFormat::$CppViewHelper.computeTimestampFormatInQueryString($member.value.shape)).c_str()) << "&";
  }

  if(m_epochTargetHasBeenSet)
  {
    ss << "epochTarget=" << StringUtils::URLEncode(m_epochTarget.ToGmtString(Aws::Utils::DateFormat::$CppViewHelper.computeTimestampFormatInQueryString($member.value.shape)).c_str()) << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}


void  QueryTimestampsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
