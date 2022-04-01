/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/Hive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

Hive::Hive() : 
    m_queryHasBeenSet(false),
    m_initQueryFileHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Hive::Hive(JsonView jsonValue) : 
    m_queryHasBeenSet(false),
    m_initQueryFileHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

Hive& Hive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("query"))
  {
    m_query = jsonValue.GetString("query");

    m_queryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initQueryFile"))
  {
    m_initQueryFile = jsonValue.GetString("initQueryFile");

    m_initQueryFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetString("parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Hive::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("query", m_query);

  }

  if(m_initQueryFileHasBeenSet)
  {
   payload.WithString("initQueryFile", m_initQueryFile);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
