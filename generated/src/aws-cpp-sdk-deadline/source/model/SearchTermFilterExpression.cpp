/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchTermFilterExpression.h>
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

SearchTermFilterExpression::SearchTermFilterExpression() : 
    m_searchTermHasBeenSet(false)
{
}

SearchTermFilterExpression::SearchTermFilterExpression(JsonView jsonValue) : 
    m_searchTermHasBeenSet(false)
{
  *this = jsonValue;
}

SearchTermFilterExpression& SearchTermFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("searchTerm"))
  {
    m_searchTerm = jsonValue.GetString("searchTerm");

    m_searchTermHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchTermFilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_searchTermHasBeenSet)
  {
   payload.WithString("searchTerm", m_searchTerm);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
