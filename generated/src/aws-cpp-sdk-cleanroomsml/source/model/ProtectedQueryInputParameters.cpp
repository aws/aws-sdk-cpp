/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ProtectedQueryInputParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ProtectedQueryInputParameters::ProtectedQueryInputParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryInputParameters& ProtectedQueryInputParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sqlParameters"))
  {
    m_sqlParameters = jsonValue.GetObject("sqlParameters");
    m_sqlParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeConfiguration"))
  {
    m_computeConfiguration = jsonValue.GetObject("computeConfiguration");
    m_computeConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resultFormat"))
  {
    m_resultFormat = ResultFormatMapper::GetResultFormatForName(jsonValue.GetString("resultFormat"));
    m_resultFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryInputParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sqlParametersHasBeenSet)
  {
   payload.WithObject("sqlParameters", m_sqlParameters.Jsonize());

  }

  if(m_computeConfigurationHasBeenSet)
  {
   payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());

  }

  if(m_resultFormatHasBeenSet)
  {
   payload.WithString("resultFormat", ResultFormatMapper::GetNameForResultFormat(m_resultFormat));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
