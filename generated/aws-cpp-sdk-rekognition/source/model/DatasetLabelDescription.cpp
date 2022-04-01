/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetLabelDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetLabelDescription::DatasetLabelDescription() : 
    m_labelNameHasBeenSet(false),
    m_labelStatsHasBeenSet(false)
{
}

DatasetLabelDescription::DatasetLabelDescription(JsonView jsonValue) : 
    m_labelNameHasBeenSet(false),
    m_labelStatsHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetLabelDescription& DatasetLabelDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelName"))
  {
    m_labelName = jsonValue.GetString("LabelName");

    m_labelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelStats"))
  {
    m_labelStats = jsonValue.GetObject("LabelStats");

    m_labelStatsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetLabelDescription::Jsonize() const
{
  JsonValue payload;

  if(m_labelNameHasBeenSet)
  {
   payload.WithString("LabelName", m_labelName);

  }

  if(m_labelStatsHasBeenSet)
  {
   payload.WithObject("LabelStats", m_labelStats.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
