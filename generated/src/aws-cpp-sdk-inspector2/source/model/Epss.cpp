/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Epss.h>
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

Epss::Epss(JsonView jsonValue)
{
  *this = jsonValue;
}

Epss& Epss::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue Epss::Jsonize() const
{
  JsonValue payload;

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
