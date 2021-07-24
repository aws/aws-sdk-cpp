/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ColumnSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

ColumnSelector::ColumnSelector() : 
    m_regexHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ColumnSelector::ColumnSelector(JsonView jsonValue) : 
    m_regexHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnSelector& ColumnSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Regex"))
  {
    m_regex = jsonValue.GetString("Regex");

    m_regexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnSelector::Jsonize() const
{
  JsonValue payload;

  if(m_regexHasBeenSet)
  {
   payload.WithString("Regex", m_regex);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
