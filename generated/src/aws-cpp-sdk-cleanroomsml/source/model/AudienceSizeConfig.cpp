﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
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

AudienceSizeConfig::AudienceSizeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AudienceSizeConfig& AudienceSizeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceSizeType"))
  {
    m_audienceSizeType = AudienceSizeTypeMapper::GetAudienceSizeTypeForName(jsonValue.GetString("audienceSizeType"));
    m_audienceSizeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audienceSizeBins"))
  {
    Aws::Utils::Array<JsonView> audienceSizeBinsJsonList = jsonValue.GetArray("audienceSizeBins");
    for(unsigned audienceSizeBinsIndex = 0; audienceSizeBinsIndex < audienceSizeBinsJsonList.GetLength(); ++audienceSizeBinsIndex)
    {
      m_audienceSizeBins.push_back(audienceSizeBinsJsonList[audienceSizeBinsIndex].AsInteger());
    }
    m_audienceSizeBinsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudienceSizeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_audienceSizeTypeHasBeenSet)
  {
   payload.WithString("audienceSizeType", AudienceSizeTypeMapper::GetNameForAudienceSizeType(m_audienceSizeType));
  }

  if(m_audienceSizeBinsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audienceSizeBinsJsonList(m_audienceSizeBins.size());
   for(unsigned audienceSizeBinsIndex = 0; audienceSizeBinsIndex < audienceSizeBinsJsonList.GetLength(); ++audienceSizeBinsIndex)
   {
     audienceSizeBinsJsonList[audienceSizeBinsIndex].AsInteger(m_audienceSizeBins[audienceSizeBinsIndex]);
   }
   payload.WithArray("audienceSizeBins", std::move(audienceSizeBinsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
