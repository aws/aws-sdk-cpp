/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SlaFilter::SlaFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

SlaFilter& SlaFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SlaStatusMapper::GetSlaStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SlaStatusMapper::GetNameForSlaStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
