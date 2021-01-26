/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/StartActivityStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StartActivityStreamRequest::StartActivityStreamRequest() : 
    m_resourceArnHasBeenSet(false),
    m_mode(ActivityStreamMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String StartActivityStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartActivityStream&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_modeHasBeenSet)
  {
    ss << "Mode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_mode) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StartActivityStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
