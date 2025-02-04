﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TimestampFormatHeadersRequest::TimestampFormatHeadersRequest() : 
    m_memberEpochSecondsHasBeenSet(false),
    m_memberHttpDateHasBeenSet(false),
    m_memberDateTimeHasBeenSet(false),
    m_defaultFormatHasBeenSet(false),
    m_targetEpochSecondsHasBeenSet(false),
    m_targetHttpDateHasBeenSet(false),
    m_targetDateTimeHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String TimestampFormatHeadersRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection TimestampFormatHeadersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_memberEpochSecondsHasBeenSet)
  {
    headers.emplace("x-memberepochseconds", StringUtils::to_string(m_memberEpochSeconds.Seconds()));
  }

  if(m_memberHttpDateHasBeenSet)
  {
    headers.emplace("x-memberhttpdate", m_memberHttpDate.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_memberDateTimeHasBeenSet)
  {
    headers.emplace("x-memberdatetime", m_memberDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_defaultFormatHasBeenSet)
  {
    headers.emplace("x-defaultformat", m_defaultFormat.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_targetEpochSecondsHasBeenSet)
  {
    headers.emplace("x-targetepochseconds", StringUtils::to_string(m_targetEpochSeconds.Seconds()));
  }

  if(m_targetHttpDateHasBeenSet)
  {
    headers.emplace("x-targethttpdate", m_targetHttpDate.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_targetDateTimeHasBeenSet)
  {
    headers.emplace("x-targetdatetime", m_targetDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




