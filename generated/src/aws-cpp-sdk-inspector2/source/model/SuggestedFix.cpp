/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SuggestedFix.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

SuggestedFix::SuggestedFix() : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SuggestedFix::SuggestedFix(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestedFix& SuggestedFix::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestedFix::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
