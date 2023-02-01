/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingTypeMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ThingTypeMetadata::ThingTypeMetadata() : 
    m_deprecated(false),
    m_deprecatedHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

ThingTypeMetadata::ThingTypeMetadata(JsonView jsonValue) : 
    m_deprecated(false),
    m_deprecatedHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeMetadata& ThingTypeMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deprecated"))
  {
    m_deprecated = jsonValue.GetBool("deprecated");

    m_deprecatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deprecationDate"))
  {
    m_deprecationDate = jsonValue.GetDouble("deprecationDate");

    m_deprecationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingTypeMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_deprecatedHasBeenSet)
  {
   payload.WithBool("deprecated", m_deprecated);

  }

  if(m_deprecationDateHasBeenSet)
  {
   payload.WithDouble("deprecationDate", m_deprecationDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
