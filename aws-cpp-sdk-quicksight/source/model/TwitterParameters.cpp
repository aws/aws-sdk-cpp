/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TwitterParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TwitterParameters::TwitterParameters() : 
    m_queryHasBeenSet(false),
    m_maxRows(0),
    m_maxRowsHasBeenSet(false)
{
}

TwitterParameters::TwitterParameters(JsonView jsonValue) : 
    m_queryHasBeenSet(false),
    m_maxRows(0),
    m_maxRowsHasBeenSet(false)
{
  *this = jsonValue;
}

TwitterParameters& TwitterParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Query"))
  {
    m_query = jsonValue.GetString("Query");

    m_queryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRows"))
  {
    m_maxRows = jsonValue.GetInteger("MaxRows");

    m_maxRowsHasBeenSet = true;
  }

  return *this;
}

JsonValue TwitterParameters::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("Query", m_query);

  }

  if(m_maxRowsHasBeenSet)
  {
   payload.WithInteger("MaxRows", m_maxRows);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
