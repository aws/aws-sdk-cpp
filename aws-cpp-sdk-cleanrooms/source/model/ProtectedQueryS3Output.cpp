/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryS3Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryS3Output::ProtectedQueryS3Output() : 
    m_locationHasBeenSet(false)
{
}

ProtectedQueryS3Output::ProtectedQueryS3Output(JsonView jsonValue) : 
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQueryS3Output& ProtectedQueryS3Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQueryS3Output::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
