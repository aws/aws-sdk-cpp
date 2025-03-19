/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ActionParameters.h>
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

ActionParameters::ActionParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionParameters& ActionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsConsoleLink"))
  {
    m_awsConsoleLink = jsonValue.GetObject("awsConsoleLink");
    m_awsConsoleLinkHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_awsConsoleLinkHasBeenSet)
  {
   payload.WithObject("awsConsoleLink", m_awsConsoleLink.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
