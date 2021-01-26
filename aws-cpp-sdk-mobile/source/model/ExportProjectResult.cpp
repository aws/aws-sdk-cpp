/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/ExportProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportProjectResult::ExportProjectResult()
{
}

ExportProjectResult::ExportProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportProjectResult& ExportProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("downloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("downloadUrl");

  }

  if(jsonValue.ValueExists("shareUrl"))
  {
    m_shareUrl = jsonValue.GetString("shareUrl");

  }

  if(jsonValue.ValueExists("snapshotId"))
  {
    m_snapshotId = jsonValue.GetString("snapshotId");

  }



  return *this;
}
