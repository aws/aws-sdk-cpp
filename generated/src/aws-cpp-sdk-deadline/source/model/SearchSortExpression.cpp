/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchSortExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SearchSortExpression::SearchSortExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchSortExpression& SearchSortExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userJobsFirst"))
  {
    m_userJobsFirst = jsonValue.GetObject("userJobsFirst");
    m_userJobsFirstHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldSort"))
  {
    m_fieldSort = jsonValue.GetObject("fieldSort");
    m_fieldSortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterSort"))
  {
    m_parameterSort = jsonValue.GetObject("parameterSort");
    m_parameterSortHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSortExpression::Jsonize() const
{
  JsonValue payload;

  if(m_userJobsFirstHasBeenSet)
  {
   payload.WithObject("userJobsFirst", m_userJobsFirst.Jsonize());

  }

  if(m_fieldSortHasBeenSet)
  {
   payload.WithObject("fieldSort", m_fieldSort.Jsonize());

  }

  if(m_parameterSortHasBeenSet)
  {
   payload.WithObject("parameterSort", m_parameterSort.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
