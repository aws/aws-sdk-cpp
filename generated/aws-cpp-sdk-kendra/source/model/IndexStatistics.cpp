/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/IndexStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

IndexStatistics::IndexStatistics() : 
    m_faqStatisticsHasBeenSet(false),
    m_textDocumentStatisticsHasBeenSet(false)
{
}

IndexStatistics::IndexStatistics(JsonView jsonValue) : 
    m_faqStatisticsHasBeenSet(false),
    m_textDocumentStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

IndexStatistics& IndexStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaqStatistics"))
  {
    m_faqStatistics = jsonValue.GetObject("FaqStatistics");

    m_faqStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextDocumentStatistics"))
  {
    m_textDocumentStatistics = jsonValue.GetObject("TextDocumentStatistics");

    m_textDocumentStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_faqStatisticsHasBeenSet)
  {
   payload.WithObject("FaqStatistics", m_faqStatistics.Jsonize());

  }

  if(m_textDocumentStatisticsHasBeenSet)
  {
   payload.WithObject("TextDocumentStatistics", m_textDocumentStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
