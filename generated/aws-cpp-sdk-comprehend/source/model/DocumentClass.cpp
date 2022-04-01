/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClass.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClass::DocumentClass() : 
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

DocumentClass::DocumentClass(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClass& DocumentClass::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClass::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
