/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/EntitledApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

EntitledApplication::EntitledApplication() : 
    m_applicationIdentifierHasBeenSet(false)
{
}

EntitledApplication::EntitledApplication(JsonView jsonValue) : 
    m_applicationIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EntitledApplication& EntitledApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationIdentifier"))
  {
    m_applicationIdentifier = jsonValue.GetString("ApplicationIdentifier");

    m_applicationIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitledApplication::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdentifierHasBeenSet)
  {
   payload.WithString("ApplicationIdentifier", m_applicationIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
