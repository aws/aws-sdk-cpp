/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceTimeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceTimeline::InstanceTimeline() : 
    m_creationDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

InstanceTimeline::InstanceTimeline(JsonView jsonValue) : 
    m_creationDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceTimeline& InstanceTimeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadyDateTime"))
  {
    m_readyDateTime = jsonValue.GetDouble("ReadyDateTime");

    m_readyDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceTimeline::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_readyDateTimeHasBeenSet)
  {
   payload.WithDouble("ReadyDateTime", m_readyDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
