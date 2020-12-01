/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/DescribeTableDataImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTableDataImportJobResult::DescribeTableDataImportJobResult() : 
    m_jobStatus(TableDataImportJobStatus::NOT_SET)
{
}

DescribeTableDataImportJobResult::DescribeTableDataImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(TableDataImportJobStatus::NOT_SET)
{
  *this = result;
}

DescribeTableDataImportJobResult& DescribeTableDataImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = TableDataImportJobStatusMapper::GetTableDataImportJobStatusForName(jsonValue.GetString("jobStatus"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("jobMetadata"))
  {
    m_jobMetadata = jsonValue.GetObject("jobMetadata");

  }



  return *this;
}
