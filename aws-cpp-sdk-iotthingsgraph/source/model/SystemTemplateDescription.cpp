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
