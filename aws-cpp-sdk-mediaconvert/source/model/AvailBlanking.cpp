/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvailBlanking.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AvailBlanking::AvailBlanking() : 
    m_availBlankingImageHasBeenSet(false)
{
}

AvailBlanking::AvailBlanking(JsonView jsonValue) : 
    m_availBlankingImageHasBeenSet(false)
{
  *this = jsonValue;
}

AvailBlanking& AvailBlanking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availBlankingImage"))
  {
    m_availBlankingImage = jsonValue.GetString("availBlankingImage");

    m_availBlankingImageHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailBlanking::Jsonize() const
{
  JsonValue payload;

  if(m_availBlankingImageHasBeenSet)
  {
   payload.WithString("availBlankingImage", m_availBlankingImage);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
