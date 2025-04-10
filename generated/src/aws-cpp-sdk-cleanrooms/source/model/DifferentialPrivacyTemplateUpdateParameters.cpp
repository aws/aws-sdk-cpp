﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyTemplateUpdateParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DifferentialPrivacyTemplateUpdateParameters::DifferentialPrivacyTemplateUpdateParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

DifferentialPrivacyTemplateUpdateParameters& DifferentialPrivacyTemplateUpdateParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("epsilon"))
  {
    m_epsilon = jsonValue.GetInteger("epsilon");
    m_epsilonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usersNoisePerQuery"))
  {
    m_usersNoisePerQuery = jsonValue.GetInteger("usersNoisePerQuery");
    m_usersNoisePerQueryHasBeenSet = true;
  }
  return *this;
}

JsonValue DifferentialPrivacyTemplateUpdateParameters::Jsonize() const
{
  JsonValue payload;

  if(m_epsilonHasBeenSet)
  {
   payload.WithInteger("epsilon", m_epsilon);

  }

  if(m_usersNoisePerQueryHasBeenSet)
  {
   payload.WithInteger("usersNoisePerQuery", m_usersNoisePerQuery);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
