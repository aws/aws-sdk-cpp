/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SparkGlueArgs.h>
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

SparkGlueArgs::SparkGlueArgs(JsonView jsonValue)
{
  *this = jsonValue;
}

SparkGlueArgs& SparkGlueArgs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connection"))
  {
    m_connection = jsonValue.GetString("connection");
    m_connectionHasBeenSet = true;
  }
  return *this;
}

JsonValue SparkGlueArgs::Jsonize() const
{
  JsonValue payload;

  if(m_connectionHasBeenSet)
  {
   payload.WithString("connection", m_connection);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
