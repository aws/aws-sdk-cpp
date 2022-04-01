﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/StartSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

StartSessionResult::StartSessionResult() : 
    m_sessionTokenHasBeenSet(false),
    m_timingInformationHasBeenSet(false)
{
}

StartSessionResult::StartSessionResult(JsonView jsonValue) : 
    m_sessionTokenHasBeenSet(false),
    m_timingInformationHasBeenSet(false)
{
  *this = jsonValue;
}

StartSessionResult& StartSessionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionToken"))
  {
    m_sessionToken = jsonValue.GetString("SessionToken");

    m_sessionTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimingInformation"))
  {
    m_timingInformation = jsonValue.GetObject("TimingInformation");

    m_timingInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSessionResult::Jsonize() const
{
  JsonValue payload;

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("SessionToken", m_sessionToken);

  }

  if(m_timingInformationHasBeenSet)
  {
   payload.WithObject("TimingInformation", m_timingInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
