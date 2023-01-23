/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DynamoDBTarget.h>
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

DynamoDBTarget::DynamoDBTarget() : 
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false),
    m_scanRate(0.0),
    m_scanRateHasBeenSet(false)
{
}

DynamoDBTarget::DynamoDBTarget(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false),
    m_scanRate(0.0),
    m_scanRateHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBTarget& DynamoDBTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanAll"))
  {
    m_scanAll = jsonValue.GetBool("scanAll");

    m_scanAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanRate"))
  {
    m_scanRate = jsonValue.GetDouble("scanRate");

    m_scanRateHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamoDBTarget::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_scanAllHasBeenSet)
  {
   payload.WithBool("scanAll", m_scanAll);

  }

  if(m_scanRateHasBeenSet)
  {
   payload.WithDouble("scanRate", m_scanRate);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
