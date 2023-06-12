/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenFeatureFlags.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenFeatureFlags::CodegenFeatureFlags() : 
    m_isRelationshipSupported(false),
    m_isRelationshipSupportedHasBeenSet(false),
    m_isNonModelSupported(false),
    m_isNonModelSupportedHasBeenSet(false)
{
}

CodegenFeatureFlags::CodegenFeatureFlags(JsonView jsonValue) : 
    m_isRelationshipSupported(false),
    m_isRelationshipSupportedHasBeenSet(false),
    m_isNonModelSupported(false),
    m_isNonModelSupportedHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenFeatureFlags& CodegenFeatureFlags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isRelationshipSupported"))
  {
    m_isRelationshipSupported = jsonValue.GetBool("isRelationshipSupported");

    m_isRelationshipSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isNonModelSupported"))
  {
    m_isNonModelSupported = jsonValue.GetBool("isNonModelSupported");

    m_isNonModelSupportedHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenFeatureFlags::Jsonize() const
{
  JsonValue payload;

  if(m_isRelationshipSupportedHasBeenSet)
  {
   payload.WithBool("isRelationshipSupported", m_isRelationshipSupported);

  }

  if(m_isNonModelSupportedHasBeenSet)
  {
   payload.WithBool("isNonModelSupported", m_isNonModelSupported);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
