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
#include <aws/clouddirectory/model/AttributeKey.h>
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

AttributeKey::AttributeKey() : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AttributeKey::AttributeKey(const JsonValue& jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeKey& AttributeKey::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FacetName"))
  {
    m_facetName = jsonValue.GetString("FacetName");

    m_facetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeKey::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_facetNameHasBeenSet)
  {
   payload.WithString("FacetName", m_facetName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws