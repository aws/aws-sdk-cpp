﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/HttpUrlDestinationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

HttpUrlDestinationProperties::HttpUrlDestinationProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

HttpUrlDestinationProperties& HttpUrlDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confirmationUrl"))
  {
    m_confirmationUrl = jsonValue.GetString("confirmationUrl");
    m_confirmationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpUrlDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_confirmationUrlHasBeenSet)
  {
   payload.WithString("confirmationUrl", m_confirmationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
