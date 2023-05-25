/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/InputParallelismUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputParallelismUpdate::InputParallelismUpdate() : 
    m_countUpdate(0),
    m_countUpdateHasBeenSet(false)
{
}

InputParallelismUpdate::InputParallelismUpdate(JsonView jsonValue) : 
    m_countUpdate(0),
    m_countUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

InputParallelismUpdate& InputParallelismUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountUpdate"))
  {
    m_countUpdate = jsonValue.GetInteger("CountUpdate");

    m_countUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue InputParallelismUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_countUpdateHasBeenSet)
  {
   payload.WithInteger("CountUpdate", m_countUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
