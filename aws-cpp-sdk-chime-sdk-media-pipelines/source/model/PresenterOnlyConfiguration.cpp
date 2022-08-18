/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/PresenterOnlyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

PresenterOnlyConfiguration::PresenterOnlyConfiguration() : 
    m_presenterPosition(PresenterPosition::NOT_SET),
    m_presenterPositionHasBeenSet(false)
{
}

PresenterOnlyConfiguration::PresenterOnlyConfiguration(JsonView jsonValue) : 
    m_presenterPosition(PresenterPosition::NOT_SET),
    m_presenterPositionHasBeenSet(false)
{
  *this = jsonValue;
}

PresenterOnlyConfiguration& PresenterOnlyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PresenterPosition"))
  {
    m_presenterPosition = PresenterPositionMapper::GetPresenterPositionForName(jsonValue.GetString("PresenterPosition"));

    m_presenterPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue PresenterOnlyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_presenterPositionHasBeenSet)
  {
   payload.WithString("PresenterPosition", PresenterPositionMapper::GetNameForPresenterPosition(m_presenterPosition));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
