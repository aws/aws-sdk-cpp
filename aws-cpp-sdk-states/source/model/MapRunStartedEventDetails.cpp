/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapRunStartedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapRunStartedEventDetails::MapRunStartedEventDetails() : 
    m_mapRunArnHasBeenSet(false)
{
}

MapRunStartedEventDetails::MapRunStartedEventDetails(JsonView jsonValue) : 
    m_mapRunArnHasBeenSet(false)
{
  *this = jsonValue;
}

MapRunStartedEventDetails& MapRunStartedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

    m_mapRunArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MapRunStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mapRunArnHasBeenSet)
  {
   payload.WithString("mapRunArn", m_mapRunArn);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
