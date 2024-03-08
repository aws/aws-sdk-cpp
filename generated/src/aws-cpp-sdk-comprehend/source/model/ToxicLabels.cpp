/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ToxicLabels.h>
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

ToxicLabels::ToxicLabels() : 
    m_labelsHasBeenSet(false),
    m_toxicity(0.0),
    m_toxicityHasBeenSet(false)
{
}

ToxicLabels::ToxicLabels(JsonView jsonValue) : 
    m_labelsHasBeenSet(false),
    m_toxicity(0.0),
    m_toxicityHasBeenSet(false)
{
  *this = jsonValue;
}

ToxicLabels& ToxicLabels::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Toxicity"))
  {
    m_toxicity = jsonValue.GetDouble("Toxicity");

    m_toxicityHasBeenSet = true;
  }

  return *this;
}

JsonValue ToxicLabels::Jsonize() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsObject(m_labels[labelsIndex].Jsonize());
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_toxicityHasBeenSet)
  {
   payload.WithDouble("Toxicity", m_toxicity);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
