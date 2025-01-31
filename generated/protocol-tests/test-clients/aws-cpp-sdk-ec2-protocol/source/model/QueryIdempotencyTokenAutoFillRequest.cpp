﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

QueryIdempotencyTokenAutoFillRequest::QueryIdempotencyTokenAutoFillRequest() : 
    m_token(Aws::Utils::UUID::PseudoRandomUUID()),
    m_tokenHasBeenSet(true)
{
}

Aws::String QueryIdempotencyTokenAutoFillRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=QueryIdempotencyTokenAutoFill&";
  if(m_tokenHasBeenSet)
  {
    ss << "token=" << StringUtils::URLEncode(m_token.c_str()) << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}


void  QueryIdempotencyTokenAutoFillRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
