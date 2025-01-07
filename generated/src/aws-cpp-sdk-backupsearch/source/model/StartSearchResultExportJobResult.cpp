﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/StartSearchResultExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupSearch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSearchResultExportJobResult::StartSearchResultExportJobResult()
{
}

StartSearchResultExportJobResult::StartSearchResultExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartSearchResultExportJobResult& StartSearchResultExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExportJobArn"))
  {
    m_exportJobArn = jsonValue.GetString("ExportJobArn");

  }

  if(jsonValue.ValueExists("ExportJobIdentifier"))
  {
    m_exportJobIdentifier = jsonValue.GetString("ExportJobIdentifier");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
