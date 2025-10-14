/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AmazonQPropertiesInput.h>
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

AmazonQPropertiesInput::AmazonQPropertiesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonQPropertiesInput& AmazonQPropertiesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authMode"))
  {
    m_authMode = jsonValue.GetString("authMode");
    m_authModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isEnabled"))
  {
    m_isEnabled = jsonValue.GetBool("isEnabled");
    m_isEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileArn"))
  {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonQPropertiesInput::Jsonize() const
{
  JsonValue payload;

  if(m_authModeHasBeenSet)
  {
   payload.WithString("authMode", m_authMode);

  }

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("isEnabled", m_isEnabled);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("profileArn", m_profileArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
