/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MongoDBTarget.h>
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

MongoDBTarget::MongoDBTarget() : 
    m_connectionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false)
{
}

MongoDBTarget::MongoDBTarget(JsonView jsonValue) : 
    m_connectionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_scanAll(false),
    m_scanAllHasBeenSet(false)
{
  *this = jsonValue;
}

MongoDBTarget& MongoDBTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScanAll"))
  {
    m_scanAll = jsonValue.GetBool("ScanAll");

    m_scanAllHasBeenSet = true;
  }

  return *this;
}

JsonValue MongoDBTarget::Jsonize() const
{
  JsonValue payload;

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_scanAllHasBeenSet)
  {
   payload.WithBool("ScanAll", m_scanAll);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
