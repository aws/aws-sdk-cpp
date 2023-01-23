/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQuerySQLParameters.h>
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

ProtectedQuerySQLParameters::ProtectedQuerySQLParameters() : 
    m_queryStringHasBeenSet(false)
{
}

ProtectedQuerySQLParameters::ProtectedQuerySQLParameters(JsonView jsonValue) : 
    m_queryStringHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQuerySQLParameters& ProtectedQuerySQLParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQuerySQLParameters::Jsonize() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
