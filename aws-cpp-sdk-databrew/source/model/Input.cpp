/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Input.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Input::Input() : 
    m_s3InputDefinitionHasBeenSet(false),
    m_dataCatalogInputDefinitionHasBeenSet(false)
{
}

Input::Input(JsonView jsonValue) : 
    m_s3InputDefinitionHasBeenSet(false),
    m_dataCatalogInputDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3InputDefinition"))
  {
    m_s3InputDefinition = jsonValue.GetObject("S3InputDefinition");

    m_s3InputDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataCatalogInputDefinition"))
  {
    m_dataCatalogInputDefinition = jsonValue.GetObject("DataCatalogInputDefinition");

    m_dataCatalogInputDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputDefinitionHasBeenSet)
  {
   payload.WithObject("S3InputDefinition", m_s3InputDefinition.Jsonize());

  }

  if(m_dataCatalogInputDefinitionHasBeenSet)
  {
   payload.WithObject("DataCatalogInputDefinition", m_dataCatalogInputDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
