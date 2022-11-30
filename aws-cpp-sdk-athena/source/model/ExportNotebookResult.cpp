/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ExportNotebookResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportNotebookResult::ExportNotebookResult()
{
}

ExportNotebookResult::ExportNotebookResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportNotebookResult& ExportNotebookResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookMetadata"))
  {
    m_notebookMetadata = jsonValue.GetObject("NotebookMetadata");

  }

  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetString("Payload");

  }



  return *this;
}
