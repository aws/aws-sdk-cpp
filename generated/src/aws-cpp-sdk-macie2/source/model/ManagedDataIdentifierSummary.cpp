/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ManagedDataIdentifierSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ManagedDataIdentifierSummary::ManagedDataIdentifierSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedDataIdentifierSummary& ManagedDataIdentifierSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = SensitiveDataItemCategoryMapper::GetSensitiveDataItemCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedDataIdentifierSummary::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", SensitiveDataItemCategoryMapper::GetNameForSensitiveDataItemCategory(m_category));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
