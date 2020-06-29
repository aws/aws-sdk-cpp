/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DependencyRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

DependencyRevision::DependencyRevision() : 
    m_idHasBeenSet(false),
    m_revisionNumber(0),
    m_revisionNumberHasBeenSet(false)
{
}

DependencyRevision::DependencyRevision(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_revisionNumber(0),
    m_revisionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

DependencyRevision& DependencyRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionNumber"))
  {
    m_revisionNumber = jsonValue.GetInt64("revisionNumber");

    m_revisionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue DependencyRevision::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_revisionNumberHasBeenSet)
  {
   payload.WithInt64("revisionNumber", m_revisionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
