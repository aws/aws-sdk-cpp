/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScannedItemCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ScannedItemCount::ScannedItemCount() : 
    m_totalGb(0),
    m_totalGbHasBeenSet(false),
    m_files(0),
    m_filesHasBeenSet(false),
    m_volumes(0),
    m_volumesHasBeenSet(false)
{
}

ScannedItemCount::ScannedItemCount(JsonView jsonValue) : 
    m_totalGb(0),
    m_totalGbHasBeenSet(false),
    m_files(0),
    m_filesHasBeenSet(false),
    m_volumes(0),
    m_volumesHasBeenSet(false)
{
  *this = jsonValue;
}

ScannedItemCount& ScannedItemCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalGb"))
  {
    m_totalGb = jsonValue.GetInteger("totalGb");

    m_totalGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("files"))
  {
    m_files = jsonValue.GetInteger("files");

    m_filesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    m_volumes = jsonValue.GetInteger("volumes");

    m_volumesHasBeenSet = true;
  }

  return *this;
}

JsonValue ScannedItemCount::Jsonize() const
{
  JsonValue payload;

  if(m_totalGbHasBeenSet)
  {
   payload.WithInteger("totalGb", m_totalGb);

  }

  if(m_filesHasBeenSet)
  {
   payload.WithInteger("files", m_files);

  }

  if(m_volumesHasBeenSet)
  {
   payload.WithInteger("volumes", m_volumes);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
