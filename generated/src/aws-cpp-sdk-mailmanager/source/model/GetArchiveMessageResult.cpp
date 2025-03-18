﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetArchiveMessageResult::GetArchiveMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetArchiveMessageResult& GetArchiveMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Envelope"))
  {
    m_envelope = jsonValue.GetObject("Envelope");
    m_envelopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageDownloadLink"))
  {
    m_messageDownloadLink = jsonValue.GetString("MessageDownloadLink");
    m_messageDownloadLinkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");
    m_metadataHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
