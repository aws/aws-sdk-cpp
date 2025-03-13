/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksMetadata::EksMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

EksMetadata& EksMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("labels"))
  {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("labels").GetAllObjects();
    for(auto& labelsItem : labelsJsonMap)
    {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("annotations"))
  {
    Aws::Map<Aws::String, JsonView> annotationsJsonMap = jsonValue.GetObject("annotations").GetAllObjects();
    for(auto& annotationsItem : annotationsJsonMap)
    {
      m_annotations[annotationsItem.first] = annotationsItem.second.AsString();
    }
    m_annotationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue EksMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("labels", std::move(labelsJsonMap));

  }

  if(m_annotationsHasBeenSet)
  {
   JsonValue annotationsJsonMap;
   for(auto& annotationsItem : m_annotations)
   {
     annotationsJsonMap.WithString(annotationsItem.first, annotationsItem.second);
   }
   payload.WithObject("annotations", std::move(annotationsJsonMap));

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
