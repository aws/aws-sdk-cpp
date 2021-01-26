/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SqlConfiguration.h>
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

SqlConfiguration::SqlConfiguration() : 
    m_queryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption::NOT_SET),
    m_queryIdentifiersEnclosingOptionHasBeenSet(false)
{
}

SqlConfiguration::SqlConfiguration(JsonView jsonValue) : 
    m_queryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption::NOT_SET),
    m_queryIdentifiersEnclosingOptionHasBeenSet(false)
{
  *this = jsonValue;
}

SqlConfiguration& SqlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryIdentifiersEnclosingOption"))
  {
    m_queryIdentifiersEnclosingOption = QueryIdentifiersEnclosingOptionMapper::GetQueryIdentifiersEnclosingOptionForName(jsonValue.GetString("QueryIdentifiersEnclosingOption"));

    m_queryIdentifiersEnclosingOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdentifiersEnclosingOptionHasBeenSet)
  {
   payload.WithString("QueryIdentifiersEnclosingOption", QueryIdentifiersEnclosingOptionMapper::GetNameForQueryIdentifiersEnclosingOption(m_queryIdentifiersEnclosingOption));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
