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
#include <aws/config/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

Source::Source() : 
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false)
{
}

Source::Source(const JsonValue& jsonValue) : 
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = OwnerMapper::GetOwnerForName(jsonValue.GetString("Owner"));

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIdentifier"))
  {
    m_sourceIdentifier = jsonValue.GetString("SourceIdentifier");

    m_sourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDetails"))
  {
    Array<JsonValue> sourceDetailsJsonList = jsonValue.GetArray("SourceDetails");
    for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
    {
      m_sourceDetails.push_back(sourceDetailsJsonList[sourceDetailsIndex].AsObject());
    }
    m_sourceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", OwnerMapper::GetNameForOwner(m_owner));
  }

  if(m_sourceIdentifierHasBeenSet)
  {
   payload.WithString("SourceIdentifier", m_sourceIdentifier);

  }

  if(m_sourceDetailsHasBeenSet)
  {
   Array<JsonValue> sourceDetailsJsonList(m_sourceDetails.size());
   for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
   {
     sourceDetailsJsonList[sourceDetailsIndex].AsObject(m_sourceDetails[sourceDetailsIndex].Jsonize());
   }
   payload.WithArray("SourceDetails", std::move(sourceDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws