/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/IngressConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

IngressConfiguration::IngressConfiguration() : 
    m_isPubliclyAccessible(false),
    m_isPubliclyAccessibleHasBeenSet(false)
{
}

IngressConfiguration::IngressConfiguration(JsonView jsonValue) : 
    m_isPubliclyAccessible(false),
    m_isPubliclyAccessibleHasBeenSet(false)
{
  *this = jsonValue;
}

IngressConfiguration& IngressConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsPubliclyAccessible"))
  {
    m_isPubliclyAccessible = jsonValue.GetBool("IsPubliclyAccessible");

    m_isPubliclyAccessibleHasBeenSet = true;
  }

  return *this;
}

JsonValue IngressConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_isPubliclyAccessibleHasBeenSet)
  {
   payload.WithBool("IsPubliclyAccessible", m_isPubliclyAccessible);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
