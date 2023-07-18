/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/VeevaSourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

VeevaSourceProperties::VeevaSourceProperties() : 
    m_objectHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_includeSourceFiles(false),
    m_includeSourceFilesHasBeenSet(false),
    m_includeRenditions(false),
    m_includeRenditionsHasBeenSet(false),
    m_includeAllVersions(false),
    m_includeAllVersionsHasBeenSet(false)
{
}

VeevaSourceProperties::VeevaSourceProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_includeSourceFiles(false),
    m_includeSourceFilesHasBeenSet(false),
    m_includeRenditions(false),
    m_includeRenditionsHasBeenSet(false),
    m_includeAllVersions(false),
    m_includeAllVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

VeevaSourceProperties& VeevaSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentType"))
  {
    m_documentType = jsonValue.GetString("documentType");

    m_documentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeSourceFiles"))
  {
    m_includeSourceFiles = jsonValue.GetBool("includeSourceFiles");

    m_includeSourceFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeRenditions"))
  {
    m_includeRenditions = jsonValue.GetBool("includeRenditions");

    m_includeRenditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeAllVersions"))
  {
    m_includeAllVersions = jsonValue.GetBool("includeAllVersions");

    m_includeAllVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VeevaSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("documentType", m_documentType);

  }

  if(m_includeSourceFilesHasBeenSet)
  {
   payload.WithBool("includeSourceFiles", m_includeSourceFiles);

  }

  if(m_includeRenditionsHasBeenSet)
  {
   payload.WithBool("includeRenditions", m_includeRenditions);

  }

  if(m_includeAllVersionsHasBeenSet)
  {
   payload.WithBool("includeAllVersions", m_includeAllVersions);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
