/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RecordColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

RecordColumn::RecordColumn() : 
    m_nameHasBeenSet(false),
    m_mappingHasBeenSet(false),
    m_sqlTypeHasBeenSet(false)
{
}

RecordColumn::RecordColumn(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_mappingHasBeenSet(false),
    m_sqlTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecordColumn& RecordColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mapping"))
  {
    m_mapping = jsonValue.GetString("Mapping");

    m_mappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlType"))
  {
    m_sqlType = jsonValue.GetString("SqlType");

    m_sqlTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mappingHasBeenSet)
  {
   payload.WithString("Mapping", m_mapping);

  }

  if(m_sqlTypeHasBeenSet)
  {
   payload.WithString("SqlType", m_sqlType);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
