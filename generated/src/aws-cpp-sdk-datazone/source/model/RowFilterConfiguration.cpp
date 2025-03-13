/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RowFilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RowFilterConfiguration::RowFilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RowFilterConfiguration& RowFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowFilter"))
  {
    m_rowFilter = jsonValue.GetObject("rowFilter");
    m_rowFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitive"))
  {
    m_sensitive = jsonValue.GetBool("sensitive");
    m_sensitiveHasBeenSet = true;
  }
  return *this;
}

JsonValue RowFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rowFilterHasBeenSet)
  {
   payload.WithObject("rowFilter", m_rowFilter.Jsonize());

  }

  if(m_sensitiveHasBeenSet)
  {
   payload.WithBool("sensitive", m_sensitive);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
