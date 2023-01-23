/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConformancePackStatusDetail::ConformancePackStatusDetail() : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackIdHasBeenSet(false),
    m_conformancePackArnHasBeenSet(false),
    m_conformancePackState(ConformancePackState::NOT_SET),
    m_conformancePackStateHasBeenSet(false),
    m_stackArnHasBeenSet(false),
    m_conformancePackStatusReasonHasBeenSet(false),
    m_lastUpdateRequestedTimeHasBeenSet(false),
    m_lastUpdateCompletedTimeHasBeenSet(false)
{
}

ConformancePackStatusDetail::ConformancePackStatusDetail(JsonView jsonValue) : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackIdHasBeenSet(false),
    m_conformancePackArnHasBeenSet(false),
    m_conformancePackState(ConformancePackState::NOT_SET),
    m_conformancePackStateHasBeenSet(false),
    m_stackArnHasBeenSet(false),
    m_conformancePackStatusReasonHasBeenSet(false),
    m_lastUpdateRequestedTimeHasBeenSet(false),
    m_lastUpdateCompletedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackStatusDetail& ConformancePackStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

    m_conformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackId"))
  {
    m_conformancePackId = jsonValue.GetString("ConformancePackId");

    m_conformancePackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackArn"))
  {
    m_conformancePackArn = jsonValue.GetString("ConformancePackArn");

    m_conformancePackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackState"))
  {
    m_conformancePackState = ConformancePackStateMapper::GetConformancePackStateForName(jsonValue.GetString("ConformancePackState"));

    m_conformancePackStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackArn"))
  {
    m_stackArn = jsonValue.GetString("StackArn");

    m_stackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackStatusReason"))
  {
    m_conformancePackStatusReason = jsonValue.GetString("ConformancePackStatusReason");

    m_conformancePackStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateRequestedTime"))
  {
    m_lastUpdateRequestedTime = jsonValue.GetDouble("LastUpdateRequestedTime");

    m_lastUpdateRequestedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateCompletedTime"))
  {
    m_lastUpdateCompletedTime = jsonValue.GetDouble("LastUpdateCompletedTime");

    m_lastUpdateCompletedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_conformancePackNameHasBeenSet)
  {
   payload.WithString("ConformancePackName", m_conformancePackName);

  }

  if(m_conformancePackIdHasBeenSet)
  {
   payload.WithString("ConformancePackId", m_conformancePackId);

  }

  if(m_conformancePackArnHasBeenSet)
  {
   payload.WithString("ConformancePackArn", m_conformancePackArn);

  }

  if(m_conformancePackStateHasBeenSet)
  {
   payload.WithString("ConformancePackState", ConformancePackStateMapper::GetNameForConformancePackState(m_conformancePackState));
  }

  if(m_stackArnHasBeenSet)
  {
   payload.WithString("StackArn", m_stackArn);

  }

  if(m_conformancePackStatusReasonHasBeenSet)
  {
   payload.WithString("ConformancePackStatusReason", m_conformancePackStatusReason);

  }

  if(m_lastUpdateRequestedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateRequestedTime", m_lastUpdateRequestedTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateCompletedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateCompletedTime", m_lastUpdateCompletedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
