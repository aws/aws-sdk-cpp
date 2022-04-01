/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/AccessLogSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

AccessLogSettings::AccessLogSettings() : 
    m_formatHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
}

AccessLogSettings::AccessLogSettings(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
  *this = jsonValue;
}

AccessLogSettings& AccessLogSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationArn"))
  {
    m_destinationArn = jsonValue.GetString("destinationArn");

    m_destinationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessLogSettings::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
