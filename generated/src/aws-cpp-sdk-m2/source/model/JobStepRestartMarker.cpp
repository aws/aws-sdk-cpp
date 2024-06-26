﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/JobStepRestartMarker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

JobStepRestartMarker::JobStepRestartMarker() : 
    m_fromProcStepHasBeenSet(false),
    m_fromStepHasBeenSet(false),
    m_toProcStepHasBeenSet(false),
    m_toStepHasBeenSet(false)
{
}

JobStepRestartMarker::JobStepRestartMarker(JsonView jsonValue)
  : JobStepRestartMarker()
{
  *this = jsonValue;
}

JobStepRestartMarker& JobStepRestartMarker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromProcStep"))
  {
    m_fromProcStep = jsonValue.GetString("fromProcStep");

    m_fromProcStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromStep"))
  {
    m_fromStep = jsonValue.GetString("fromStep");

    m_fromStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toProcStep"))
  {
    m_toProcStep = jsonValue.GetString("toProcStep");

    m_toProcStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toStep"))
  {
    m_toStep = jsonValue.GetString("toStep");

    m_toStepHasBeenSet = true;
  }

  return *this;
}

JsonValue JobStepRestartMarker::Jsonize() const
{
  JsonValue payload;

  if(m_fromProcStepHasBeenSet)
  {
   payload.WithString("fromProcStep", m_fromProcStep);

  }

  if(m_fromStepHasBeenSet)
  {
   payload.WithString("fromStep", m_fromStep);

  }

  if(m_toProcStepHasBeenSet)
  {
   payload.WithString("toProcStep", m_toProcStep);

  }

  if(m_toStepHasBeenSet)
  {
   payload.WithString("toStep", m_toStep);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
