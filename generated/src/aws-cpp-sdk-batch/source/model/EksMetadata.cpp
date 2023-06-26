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

EksMetadata::EksMetadata() : 
    m_labelsHasBeenSet(false)
{
}

EksMetadata::EksMetadata(JsonView jsonValue) : 
    m_labelsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
