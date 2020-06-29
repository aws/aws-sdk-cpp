/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetRetentionSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRetentionSettingsResult::GetRetentionSettingsResult()
{
}

GetRetentionSettingsResult::GetRetentionSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRetentionSettingsResult& GetRetentionSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RetentionSettings"))
  {
    m_retentionSettings = jsonValue.GetObject("RetentionSettings");

  }

  if(jsonValue.ValueExists("InitiateDeletionTimestamp"))
  {
    m_initiateDeletionTimestamp = jsonValue.GetString("InitiateDeletionTimestamp");

  }



  return *this;
}
