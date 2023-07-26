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

OutputAttribute::OutputAttribute() : 
    m_hashed(false),
    m_hashedHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

OutputAttribute::OutputAttribute(JsonView jsonValue) : 
    m_hashed(false),
    m_hashedHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

OutputAttribute& OutputAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hashed"))
  {
    m_hashed = jsonValue.GetBool("hashed");

    m_hashedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_hashedHasBeenSet)
  {
   payload.WithBool("hashed", m_hashed);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
