/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExportResourceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ExportResourceSpecification::ExportResourceSpecification() : 
    m_botExportSpecificationHasBeenSet(false),
    m_botLocaleExportSpecificationHasBeenSet(false)
{
}

ExportResourceSpecification::ExportResourceSpecification(JsonView jsonValue) : 
    m_botExportSpecificationHasBeenSet(false),
    m_botLocaleExportSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ExportResourceSpecification& ExportResourceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botExportSpecification"))
  {
    m_botExportSpecification = jsonValue.GetObject("botExportSpecification");

    m_botExportSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botLocaleExportSpecification"))
  {
    m_botLocaleExportSpecification = jsonValue.GetObject("botLocaleExportSpecification");

    m_botLocaleExportSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportResourceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botExportSpecificationHasBeenSet)
  {
   payload.WithObject("botExportSpecification", m_botExportSpecification.Jsonize());

  }

  if(m_botLocaleExportSpecificationHasBeenSet)
  {
   payload.WithObject("botLocaleExportSpecification", m_botLocaleExportSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
