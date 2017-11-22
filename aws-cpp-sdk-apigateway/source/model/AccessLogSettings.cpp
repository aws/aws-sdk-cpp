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

AccessLogSettings::AccessLogSettings(const JsonValue& jsonValue) : 
    m_formatHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
  *this = jsonValue;
}

AccessLogSettings& AccessLogSettings::operator =(const JsonValue& jsonValue)
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
