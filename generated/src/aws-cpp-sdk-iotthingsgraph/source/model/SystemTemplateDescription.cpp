/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/SystemTemplateDescription.h>
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

SystemTemplateDescription::SystemTemplateDescription() : 
    m_summaryHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_validatedNamespaceVersion(0),
    m_validatedNamespaceVersionHasBeenSet(false)
{
}

SystemTemplateDescription::SystemTemplateDescription(JsonView jsonValue) : 
    m_summaryHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_validatedNamespaceVersion(0),
    m_validatedNamespaceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SystemTemplateDescription& SystemTemplateDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validatedNamespaceVersion"))
  {
    m_validatedNamespaceVersion = jsonValue.GetInt64("validatedNamespaceVersion");

    m_validatedNamespaceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemTemplateDescription::Jsonize() const
{
  JsonValue payload;

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("summary", m_summary.Jsonize());

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_validatedNamespaceVersionHasBeenSet)
  {
   payload.WithInt64("validatedNamespaceVersion", m_validatedNamespaceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
