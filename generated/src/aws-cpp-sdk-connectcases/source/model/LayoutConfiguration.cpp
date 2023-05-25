/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/LayoutConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

LayoutConfiguration::LayoutConfiguration() : 
    m_defaultLayoutHasBeenSet(false)
{
}

LayoutConfiguration::LayoutConfiguration(JsonView jsonValue) : 
    m_defaultLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutConfiguration& LayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultLayout"))
  {
    m_defaultLayout = jsonValue.GetString("defaultLayout");

    m_defaultLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_defaultLayoutHasBeenSet)
  {
   payload.WithString("defaultLayout", m_defaultLayout);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
