/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayAccessLogSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayAccessLogSettings::AwsApiGatewayAccessLogSettings() : 
    m_formatHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
}

AwsApiGatewayAccessLogSettings::AwsApiGatewayAccessLogSettings(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayAccessLogSettings& AwsApiGatewayAccessLogSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayAccessLogSettings::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
