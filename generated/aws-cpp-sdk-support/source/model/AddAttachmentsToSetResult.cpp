/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/AddAttachmentsToSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddAttachmentsToSetResult::AddAttachmentsToSetResult()
{
}

AddAttachmentsToSetResult::AddAttachmentsToSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddAttachmentsToSetResult& AddAttachmentsToSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("attachmentSetId"))
  {
    m_attachmentSetId = jsonValue.GetString("attachmentSetId");

  }

  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetString("expiryTime");

  }



  return *this;
}
