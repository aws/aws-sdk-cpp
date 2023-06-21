/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EpssDetails.h>
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

EpssDetails::EpssDetails() : 
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

EpssDetails::EpssDetails(JsonView jsonValue) : 
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

EpssDetails& EpssDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue EpssDetails::Jsonize() const
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
