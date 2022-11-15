/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AnalyzeExpenseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AnalyzeExpenseResult::AnalyzeExpenseResult()
{
}

AnalyzeExpenseResult::AnalyzeExpenseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AnalyzeExpenseResult& AnalyzeExpenseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

  }

  if(jsonValue.ValueExists("ExpenseDocuments"))
  {
    Aws::Utils::Array<JsonView> expenseDocumentsJsonList = jsonValue.GetArray("ExpenseDocuments");
    for(unsigned expenseDocumentsIndex = 0; expenseDocumentsIndex < expenseDocumentsJsonList.GetLength(); ++expenseDocumentsIndex)
    {
      m_expenseDocuments.push_back(expenseDocumentsJsonList[expenseDocumentsIndex].AsObject());
    }
  }



  return *this;
}
