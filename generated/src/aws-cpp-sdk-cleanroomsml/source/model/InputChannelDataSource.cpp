/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/InputChannelDataSource.h>
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

InputChannelDataSource::InputChannelDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

InputChannelDataSource& InputChannelDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("protectedQueryInputParameters"))
  {
    m_protectedQueryInputParameters = jsonValue.GetObject("protectedQueryInputParameters");
    m_protectedQueryInputParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue InputChannelDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_protectedQueryInputParametersHasBeenSet)
  {
   payload.WithObject("protectedQueryInputParameters", m_protectedQueryInputParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
