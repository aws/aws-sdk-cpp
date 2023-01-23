/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultReuseInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultReuseInformation::ResultReuseInformation() : 
    m_reusedPreviousResult(false),
    m_reusedPreviousResultHasBeenSet(false)
{
}

ResultReuseInformation::ResultReuseInformation(JsonView jsonValue) : 
    m_reusedPreviousResult(false),
    m_reusedPreviousResultHasBeenSet(false)
{
  *this = jsonValue;
}

ResultReuseInformation& ResultReuseInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReusedPreviousResult"))
  {
    m_reusedPreviousResult = jsonValue.GetBool("ReusedPreviousResult");

    m_reusedPreviousResultHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultReuseInformation::Jsonize() const
{
  JsonValue payload;

  if(m_reusedPreviousResultHasBeenSet)
  {
   payload.WithBool("ReusedPreviousResult", m_reusedPreviousResult);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
