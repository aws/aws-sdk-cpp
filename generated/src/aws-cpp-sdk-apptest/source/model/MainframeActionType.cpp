/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/MainframeActionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

MainframeActionType::MainframeActionType(JsonView jsonValue)
{
  *this = jsonValue;
}

MainframeActionType& MainframeActionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("batch"))
  {
    m_batch = jsonValue.GetObject("batch");
    m_batchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tn3270"))
  {
    m_tn3270 = jsonValue.GetObject("tn3270");
    m_tn3270HasBeenSet = true;
  }
  return *this;
}

JsonValue MainframeActionType::Jsonize() const
{
  JsonValue payload;

  if(m_batchHasBeenSet)
  {
   payload.WithObject("batch", m_batch.Jsonize());

  }

  if(m_tn3270HasBeenSet)
  {
   payload.WithObject("tn3270", m_tn3270.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
