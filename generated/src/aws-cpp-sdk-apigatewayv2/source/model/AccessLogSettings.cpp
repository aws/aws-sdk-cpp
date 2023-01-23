/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/AccessLogSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

AccessLogSettings::AccessLogSettings() : 
    m_destinationArnHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

AccessLogSettings::AccessLogSettings(JsonView jsonValue) : 
    m_destinationArnHasBeenSet(false),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

AccessLogSettings& AccessLogSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationArn"))
  {
    m_destinationArn = jsonValue.GetString("destinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessLogSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
