/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/InspectorServiceAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

InspectorServiceAttributes::InspectorServiceAttributes() : 
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false),
    m_rulesPackageArnHasBeenSet(false)
{
}

InspectorServiceAttributes::InspectorServiceAttributes(JsonView jsonValue) : 
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false),
    m_rulesPackageArnHasBeenSet(false)
{
  *this = jsonValue;
}

InspectorServiceAttributes& InspectorServiceAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetInteger("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunArn"))
  {
    m_assessmentRunArn = jsonValue.GetString("assessmentRunArn");

    m_assessmentRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArn"))
  {
    m_rulesPackageArn = jsonValue.GetString("rulesPackageArn");

    m_rulesPackageArnHasBeenSet = true;
  }

  return *this;
}

JsonValue InspectorServiceAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithInteger("schemaVersion", m_schemaVersion);

  }

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  if(m_rulesPackageArnHasBeenSet)
  {
   payload.WithString("rulesPackageArn", m_rulesPackageArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
