/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageRunDetails.h>
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

LineageRunDetails::LineageRunDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

LineageRunDetails& LineageRunDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sqlQueryRunDetails"))
  {
    m_sqlQueryRunDetails = jsonValue.GetObject("sqlQueryRunDetails");
    m_sqlQueryRunDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageRunDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sqlQueryRunDetailsHasBeenSet)
  {
   payload.WithObject("sqlQueryRunDetails", m_sqlQueryRunDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
