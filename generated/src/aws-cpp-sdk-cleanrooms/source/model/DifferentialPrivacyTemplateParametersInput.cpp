/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyTemplateParametersInput.h>
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

DifferentialPrivacyTemplateParametersInput::DifferentialPrivacyTemplateParametersInput() : 
    m_epsilon(0),
    m_epsilonHasBeenSet(false),
    m_usersNoisePerQuery(0),
    m_usersNoisePerQueryHasBeenSet(false)
{
}

DifferentialPrivacyTemplateParametersInput::DifferentialPrivacyTemplateParametersInput(JsonView jsonValue) : 
    m_epsilon(0),
    m_epsilonHasBeenSet(false),
    m_usersNoisePerQuery(0),
    m_usersNoisePerQueryHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacyTemplateParametersInput& DifferentialPrivacyTemplateParametersInput::operator =(JsonView jsonValue)
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

JsonValue DifferentialPrivacyTemplateParametersInput::Jsonize() const
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
