/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WebAppUnits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

WebAppUnits::WebAppUnits() : 
    m_provisioned(0),
    m_provisionedHasBeenSet(false)
{
}

WebAppUnits::WebAppUnits(JsonView jsonValue)
  : WebAppUnits()
{
  *this = jsonValue;
}

WebAppUnits& WebAppUnits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Provisioned"))
  {
    m_provisioned = jsonValue.GetInteger("Provisioned");

    m_provisionedHasBeenSet = true;
  }

  return *this;
}

JsonValue WebAppUnits::Jsonize() const
{
  JsonValue payload;

  if(m_provisionedHasBeenSet)
  {
   payload.WithInteger("Provisioned", m_provisioned);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
