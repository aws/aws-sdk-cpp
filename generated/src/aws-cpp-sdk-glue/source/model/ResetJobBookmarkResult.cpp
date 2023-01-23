/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResetJobBookmarkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResetJobBookmarkResult::ResetJobBookmarkResult()
{
}

ResetJobBookmarkResult::ResetJobBookmarkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResetJobBookmarkResult& ResetJobBookmarkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobBookmarkEntry"))
  {
    m_jobBookmarkEntry = jsonValue.GetObject("JobBookmarkEntry");

  }



  return *this;
}
