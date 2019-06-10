/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codecommit/model/ObjectTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

ObjectTypes::ObjectTypes() : 
    m_source(ObjectTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ObjectTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false),
    m_base(ObjectTypeEnum::NOT_SET),
    m_baseHasBeenSet(false)
{
}

ObjectTypes::ObjectTypes(JsonView jsonValue) : 
    m_source(ObjectTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ObjectTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false),
    m_base(ObjectTypeEnum::NOT_SET),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectTypes& ObjectTypes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = ObjectTypeEnumMapper::GetObjectTypeEnumForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = ObjectTypeEnumMapper::GetObjectTypeEnumForName(jsonValue.GetString("destination"));

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = ObjectTypeEnumMapper::GetObjectTypeEnumForName(jsonValue.GetString("base"));

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectTypes::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ObjectTypeEnumMapper::GetNameForObjectTypeEnum(m_source));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", ObjectTypeEnumMapper::GetNameForObjectTypeEnum(m_destination));
  }

  if(m_baseHasBeenSet)
  {
   payload.WithString("base", ObjectTypeEnumMapper::GetNameForObjectTypeEnum(m_base));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
