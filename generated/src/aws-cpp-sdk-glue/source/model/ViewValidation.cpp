/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ViewValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ViewValidation::ViewValidation(JsonView jsonValue)
{
  *this = jsonValue;
}

ViewValidation& ViewValidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dialect"))
  {
    m_dialect = ViewDialectMapper::GetViewDialectForName(jsonValue.GetString("Dialect"));
    m_dialectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DialectVersion"))
  {
    m_dialectVersion = jsonValue.GetString("DialectVersion");
    m_dialectVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewValidationText"))
  {
    m_viewValidationText = jsonValue.GetString("ViewValidationText");
    m_viewValidationTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetDouble("UpdateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ResourceStateMapper::GetResourceStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ViewValidation::Jsonize() const
{
  JsonValue payload;

  if(m_dialectHasBeenSet)
  {
   payload.WithString("Dialect", ViewDialectMapper::GetNameForViewDialect(m_dialect));
  }

  if(m_dialectVersionHasBeenSet)
  {
   payload.WithString("DialectVersion", m_dialectVersion);

  }

  if(m_viewValidationTextHasBeenSet)
  {
   payload.WithString("ViewValidationText", m_viewValidationText);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ResourceStateMapper::GetNameForResourceState(m_state));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
