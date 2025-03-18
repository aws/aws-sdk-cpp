/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EntryDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

EntryDescription::EntryDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

EntryDescription& EntryDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntryDetail"))
  {
    m_entryDetail = jsonValue.GetObject("EntryDetail");
    m_entryDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntryRuleNumber"))
  {
    m_entryRuleNumber = jsonValue.GetInteger("EntryRuleNumber");
    m_entryRuleNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntryType"))
  {
    m_entryType = EntryTypeMapper::GetEntryTypeForName(jsonValue.GetString("EntryType"));
    m_entryTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EntryDescription::Jsonize() const
{
  JsonValue payload;

  if(m_entryDetailHasBeenSet)
  {
   payload.WithObject("EntryDetail", m_entryDetail.Jsonize());

  }

  if(m_entryRuleNumberHasBeenSet)
  {
   payload.WithInteger("EntryRuleNumber", m_entryRuleNumber);

  }

  if(m_entryTypeHasBeenSet)
  {
   payload.WithString("EntryType", EntryTypeMapper::GetNameForEntryType(m_entryType));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
