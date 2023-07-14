/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/SnapshotOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

SnapshotOptions::SnapshotOptions() : 
    m_automatedSnapshotStartHour(0),
    m_automatedSnapshotStartHourHasBeenSet(false)
{
}

SnapshotOptions::SnapshotOptions(JsonView jsonValue) : 
    m_automatedSnapshotStartHour(0),
    m_automatedSnapshotStartHourHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotOptions& SnapshotOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomatedSnapshotStartHour"))
  {
    m_automatedSnapshotStartHour = jsonValue.GetInteger("AutomatedSnapshotStartHour");

    m_automatedSnapshotStartHourHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotOptions::Jsonize() const
{
  JsonValue payload;

  if(m_automatedSnapshotStartHourHasBeenSet)
  {
   payload.WithInteger("AutomatedSnapshotStartHour", m_automatedSnapshotStartHour);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
