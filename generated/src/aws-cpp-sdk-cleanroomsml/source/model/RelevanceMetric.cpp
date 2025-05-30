﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/RelevanceMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

RelevanceMetric::RelevanceMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

RelevanceMetric& RelevanceMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceSize"))
  {
    m_audienceSize = jsonValue.GetObject("audienceSize");
    m_audienceSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue RelevanceMetric::Jsonize() const
{
  JsonValue payload;

  if(m_audienceSizeHasBeenSet)
  {
   payload.WithObject("audienceSize", m_audienceSize.Jsonize());

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
