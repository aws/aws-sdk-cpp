/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StatusCounts.h>
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

StatusCounts::StatusCounts() : 
    m_failed(0),
    m_failedHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
}

StatusCounts::StatusCounts(JsonView jsonValue) : 
    m_failed(0),
    m_failedHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
  *this = jsonValue;
}

StatusCounts& StatusCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passed"))
  {
    m_passed = jsonValue.GetInteger("passed");

    m_passedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipped"))
  {
    m_skipped = jsonValue.GetInteger("skipped");

    m_skippedHasBeenSet = true;
  }

  return *this;
}

JsonValue StatusCounts::Jsonize() const
{
  JsonValue payload;

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_passedHasBeenSet)
  {
   payload.WithInteger("passed", m_passed);

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithInteger("skipped", m_skipped);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
