/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetEntityRecognizerInputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DatasetEntityRecognizerInputDataConfig::DatasetEntityRecognizerInputDataConfig() : 
    m_annotationsHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_entityListHasBeenSet(false)
{
}

DatasetEntityRecognizerInputDataConfig::DatasetEntityRecognizerInputDataConfig(JsonView jsonValue) : 
    m_annotationsHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_entityListHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetEntityRecognizerInputDataConfig& DatasetEntityRecognizerInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Annotations"))
  {
    m_annotations = jsonValue.GetObject("Annotations");

    m_annotationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Documents"))
  {
    m_documents = jsonValue.GetObject("Documents");

    m_documentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityList"))
  {
    m_entityList = jsonValue.GetObject("EntityList");

    m_entityListHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetEntityRecognizerInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_annotationsHasBeenSet)
  {
   payload.WithObject("Annotations", m_annotations.Jsonize());

  }

  if(m_documentsHasBeenSet)
  {
   payload.WithObject("Documents", m_documents.Jsonize());

  }

  if(m_entityListHasBeenSet)
  {
   payload.WithObject("EntityList", m_entityList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
