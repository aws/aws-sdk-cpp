/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/ExpenseDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

ExpenseDocument::ExpenseDocument() : 
    m_expenseIndex(0),
    m_expenseIndexHasBeenSet(false),
    m_summaryFieldsHasBeenSet(false),
    m_lineItemGroupsHasBeenSet(false)
{
}

ExpenseDocument::ExpenseDocument(JsonView jsonValue) : 
    m_expenseIndex(0),
    m_expenseIndexHasBeenSet(false),
    m_summaryFieldsHasBeenSet(false),
    m_lineItemGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

ExpenseDocument& ExpenseDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExpenseIndex"))
  {
    m_expenseIndex = jsonValue.GetInteger("ExpenseIndex");

    m_expenseIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SummaryFields"))
  {
    Array<JsonView> summaryFieldsJsonList = jsonValue.GetArray("SummaryFields");
    for(unsigned summaryFieldsIndex = 0; summaryFieldsIndex < summaryFieldsJsonList.GetLength(); ++summaryFieldsIndex)
    {
      m_summaryFields.push_back(summaryFieldsJsonList[summaryFieldsIndex].AsObject());
    }
    m_summaryFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineItemGroups"))
  {
    Array<JsonView> lineItemGroupsJsonList = jsonValue.GetArray("LineItemGroups");
    for(unsigned lineItemGroupsIndex = 0; lineItemGroupsIndex < lineItemGroupsJsonList.GetLength(); ++lineItemGroupsIndex)
    {
      m_lineItemGroups.push_back(lineItemGroupsJsonList[lineItemGroupsIndex].AsObject());
    }
    m_lineItemGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpenseDocument::Jsonize() const
{
  JsonValue payload;

  if(m_expenseIndexHasBeenSet)
  {
   payload.WithInteger("ExpenseIndex", m_expenseIndex);

  }

  if(m_summaryFieldsHasBeenSet)
  {
   Array<JsonValue> summaryFieldsJsonList(m_summaryFields.size());
   for(unsigned summaryFieldsIndex = 0; summaryFieldsIndex < summaryFieldsJsonList.GetLength(); ++summaryFieldsIndex)
   {
     summaryFieldsJsonList[summaryFieldsIndex].AsObject(m_summaryFields[summaryFieldsIndex].Jsonize());
   }
   payload.WithArray("SummaryFields", std::move(summaryFieldsJsonList));

  }

  if(m_lineItemGroupsHasBeenSet)
  {
   Array<JsonValue> lineItemGroupsJsonList(m_lineItemGroups.size());
   for(unsigned lineItemGroupsIndex = 0; lineItemGroupsIndex < lineItemGroupsJsonList.GetLength(); ++lineItemGroupsIndex)
   {
     lineItemGroupsJsonList[lineItemGroupsIndex].AsObject(m_lineItemGroups[lineItemGroupsIndex].Jsonize());
   }
   payload.WithArray("LineItemGroups", std::move(lineItemGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
