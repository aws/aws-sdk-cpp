/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/FunctionCodeLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

FunctionCodeLocation::FunctionCodeLocation() : 
    m_repositoryTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

FunctionCodeLocation::FunctionCodeLocation(JsonView jsonValue) : 
    m_repositoryTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionCodeLocation& FunctionCodeLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryType"))
  {
    m_repositoryType = jsonValue.GetString("RepositoryType");

    m_repositoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionCodeLocation::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryTypeHasBeenSet)
  {
   payload.WithString("RepositoryType", m_repositoryType);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
