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

#include <aws/kendra/model/DocumentMetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentMetadataConfiguration::DocumentMetadataConfiguration() : 
    m_nameHasBeenSet(false),
    m_type(DocumentAttributeValueType::NOT_SET),
    m_typeHasBeenSet(false),
    m_relevanceHasBeenSet(false),
    m_searchHasBeenSet(false)
{
}

DocumentMetadataConfiguration::DocumentMetadataConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(DocumentAttributeValueType::NOT_SET),
    m_typeHasBeenSet(false),
    m_relevanceHasBeenSet(false),
    m_searchHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentMetadataConfiguration& DocumentMetadataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DocumentAttributeValueTypeMapper::GetDocumentAttributeValueTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relevance"))
  {
    m_relevance = jsonValue.GetObject("Relevance");

    m_relevanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Search"))
  {
    m_search = jsonValue.GetObject("Search");

    m_searchHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DocumentAttributeValueTypeMapper::GetNameForDocumentAttributeValueType(m_type));
  }

  if(m_relevanceHasBeenSet)
  {
   payload.WithObject("Relevance", m_relevance.Jsonize());

  }

  if(m_searchHasBeenSet)
  {
   payload.WithObject("Search", m_search.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
