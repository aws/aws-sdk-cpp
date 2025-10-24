/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MlflowPropertiesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

MlflowPropertiesInput::MlflowPropertiesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

MlflowPropertiesInput& MlflowPropertiesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trackingServerArn"))
  {
    m_trackingServerArn = jsonValue.GetString("trackingServerArn");
    m_trackingServerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trackingServerName"))
  {
    m_trackingServerName = jsonValue.GetString("trackingServerName");
    m_trackingServerNameHasBeenSet = true;
  }
  return *this;
}

JsonValue MlflowPropertiesInput::Jsonize() const
{
  JsonValue payload;

  if(m_trackingServerArnHasBeenSet)
  {
   payload.WithString("trackingServerArn", m_trackingServerArn);

  }

  if(m_trackingServerNameHasBeenSet)
  {
   payload.WithString("trackingServerName", m_trackingServerName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
