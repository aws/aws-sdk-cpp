/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkSpecifier::TypedLinkSpecifier() : 
    m_typedLinkFacetHasBeenSet(false),
    m_sourceObjectReferenceHasBeenSet(false),
    m_targetObjectReferenceHasBeenSet(false),
    m_identityAttributeValuesHasBeenSet(false)
{
}

TypedLinkSpecifier::TypedLinkSpecifier(JsonView jsonValue) : 
    m_typedLinkFacetHasBeenSet(false),
    m_sourceObjectReferenceHasBeenSet(false),
    m_targetObjectReferenceHasBeenSet(false),
    m_identityAttributeValuesHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkSpecifier& TypedLinkSpecifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkFacet"))
  {
    m_typedLinkFacet = jsonValue.GetObject("TypedLinkFacet");

    m_typedLinkFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceObjectReference"))
  {
    m_sourceObjectReference = jsonValue.GetObject("SourceObjectReference");

    m_sourceObjectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetObjectReference"))
  {
    m_targetObjectReference = jsonValue.GetObject("TargetObjectReference");

    m_targetObjectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityAttributeValues"))
  {
    Aws::Utils::Array<JsonView> identityAttributeValuesJsonList = jsonValue.GetArray("IdentityAttributeValues");
    for(unsigned identityAttributeValuesIndex = 0; identityAttributeValuesIndex < identityAttributeValuesJsonList.GetLength(); ++identityAttributeValuesIndex)
    {
      m_identityAttributeValues.push_back(identityAttributeValuesJsonList[identityAttributeValuesIndex].AsObject());
    }
    m_identityAttributeValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkSpecifier::Jsonize() const
{
  JsonValue payload;

  if(m_typedLinkFacetHasBeenSet)
  {
   payload.WithObject("TypedLinkFacet", m_typedLinkFacet.Jsonize());

  }

  if(m_sourceObjectReferenceHasBeenSet)
  {
   payload.WithObject("SourceObjectReference", m_sourceObjectReference.Jsonize());

  }

  if(m_targetObjectReferenceHasBeenSet)
  {
   payload.WithObject("TargetObjectReference", m_targetObjectReference.Jsonize());

  }

  if(m_identityAttributeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityAttributeValuesJsonList(m_identityAttributeValues.size());
   for(unsigned identityAttributeValuesIndex = 0; identityAttributeValuesIndex < identityAttributeValuesJsonList.GetLength(); ++identityAttributeValuesIndex)
   {
     identityAttributeValuesJsonList[identityAttributeValuesIndex].AsObject(m_identityAttributeValues[identityAttributeValuesIndex].Jsonize());
   }
   payload.WithArray("IdentityAttributeValues", std::move(identityAttributeValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
