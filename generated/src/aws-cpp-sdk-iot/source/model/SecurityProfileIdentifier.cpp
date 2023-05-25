/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SecurityProfileIdentifier.h>
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

SecurityProfileIdentifier::SecurityProfileIdentifier() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

SecurityProfileIdentifier::SecurityProfileIdentifier(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityProfileIdentifier& SecurityProfileIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityProfileIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
