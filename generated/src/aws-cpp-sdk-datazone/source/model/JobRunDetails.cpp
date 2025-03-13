/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/JobRunDetails.h>
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

JobRunDetails::JobRunDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

JobRunDetails& JobRunDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lineageRunDetails"))
  {
    m_lineageRunDetails = jsonValue.GetObject("lineageRunDetails");
    m_lineageRunDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobRunDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lineageRunDetailsHasBeenSet)
  {
   payload.WithObject("lineageRunDetails", m_lineageRunDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
