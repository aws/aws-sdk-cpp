/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ThingTypeMetadata::ThingTypeMetadata(const JsonValue& jsonValue) : 
    m_deprecated(false),
    m_deprecatedHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeMetadata& ThingTypeMetadata::operator =(const JsonValue& jsonValue)
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