/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomActionNavigationOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CustomActionNavigationOperation::CustomActionNavigationOperation() : 
    m_localNavigationConfigurationHasBeenSet(false)
{
}

CustomActionNavigationOperation::CustomActionNavigationOperation(JsonView jsonValue) : 
    m_localNavigationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomActionNavigationOperation& CustomActionNavigationOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalNavigationConfiguration"))
  {
    m_localNavigationConfiguration = jsonValue.GetObject("LocalNavigationConfiguration");

    m_localNavigationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomActionNavigationOperation::Jsonize() const
{
  JsonValue payload;

  if(m_localNavigationConfigurationHasBeenSet)
  {
   payload.WithObject("LocalNavigationConfiguration", m_localNavigationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
