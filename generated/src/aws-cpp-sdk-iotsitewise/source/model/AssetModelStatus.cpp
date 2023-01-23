/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AssetModelStatus::AssetModelStatus() : 
    m_state(AssetModelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

AssetModelStatus::AssetModelStatus(JsonView jsonValue) : 
    m_state(AssetModelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

AssetModelStatus& AssetModelStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = AssetModelStateMapper::GetAssetModelStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetModelStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AssetModelStateMapper::GetNameForAssetModelState(m_state));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
