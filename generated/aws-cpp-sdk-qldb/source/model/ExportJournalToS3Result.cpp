/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ExportJournalToS3Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportJournalToS3Result::ExportJournalToS3Result()
{
}

ExportJournalToS3Result::ExportJournalToS3Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportJournalToS3Result& ExportJournalToS3Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExportId"))
  {
    m_exportId = jsonValue.GetString("ExportId");

  }



  return *this;
}
