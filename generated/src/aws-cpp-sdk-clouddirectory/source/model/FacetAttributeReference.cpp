/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/FacetAttributeReference.h>
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

FacetAttributeReference::FacetAttributeReference() : 
    m_targetFacetNameHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false)
{
}

FacetAttributeReference::FacetAttributeReference(JsonView jsonValue) : 
    m_targetFacetNameHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

FacetAttributeReference& FacetAttributeReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetFacetName"))
  {
    m_targetFacetName = jsonValue.GetString("TargetFacetName");

    m_targetFacetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetAttributeName"))
  {
    m_targetAttributeName = jsonValue.GetString("TargetAttributeName");

    m_targetAttributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FacetAttributeReference::Jsonize() const
{
  JsonValue payload;

  if(m_targetFacetNameHasBeenSet)
  {
   payload.WithString("TargetFacetName", m_targetFacetName);

  }

  if(m_targetAttributeNameHasBeenSet)
  {
   payload.WithString("TargetAttributeName", m_targetAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
