/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotsitewise/model/AssetStatus.h>
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

AssetStatus::AssetStatus() : 
    m_state(AssetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

AssetStatus::AssetStatus(JsonView jsonValue) : 
    m_state(AssetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

AssetStatus& AssetStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = AssetStateMapper::GetAssetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AssetStateMapper::GetNameForAssetState(m_state));
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
