/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/OutputAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

OutputAttribute::OutputAttribute(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputAttribute& OutputAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hashed"))
  {
    m_hashed = jsonValue.GetBool("hashed");
    m_hashedHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hashedHasBeenSet)
  {
   payload.WithBool("hashed", m_hashed);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
