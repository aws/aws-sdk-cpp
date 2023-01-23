/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_sourceDetailsHasBeenSet(false),
    m_customPolicyDetailsHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_customPolicyDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> sourceDetailsJsonList = jsonValue.GetArray("SourceDetails");
    for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
    {
      m_sourceDetails.push_back(sourceDetailsJsonList[sourceDetailsIndex].AsObject());
    }
    m_sourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomPolicyDetails"))
  {
    m_customPolicyDetails = jsonValue.GetObject("CustomPolicyDetails");

    m_customPolicyDetailsHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> sourceDetailsJsonList(m_sourceDetails.size());
   for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
   {
     sourceDetailsJsonList[sourceDetailsIndex].AsObject(m_sourceDetails[sourceDetailsIndex].Jsonize());
   }
   payload.WithArray("SourceDetails", std::move(sourceDetailsJsonList));

  }

  if(m_customPolicyDetailsHasBeenSet)
  {
   payload.WithObject("CustomPolicyDetails", m_customPolicyDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
