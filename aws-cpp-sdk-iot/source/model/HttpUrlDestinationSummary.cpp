/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/HttpUrlDestinationSummary.h>
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

HttpUrlDestinationSummary::HttpUrlDestinationSummary() : 
    m_confirmationUrlHasBeenSet(false)
{
}

HttpUrlDestinationSummary::HttpUrlDestinationSummary(JsonView jsonValue) : 
    m_confirmationUrlHasBeenSet(false)
{
  *this = jsonValue;
}

HttpUrlDestinationSummary& HttpUrlDestinationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confirmationUrl"))
  {
    m_confirmationUrl = jsonValue.GetString("confirmationUrl");

    m_confirmationUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpUrlDestinationSummary::Jsonize() const
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
