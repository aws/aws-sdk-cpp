/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipMLPaymentConfig.h>
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

MembershipMLPaymentConfig::MembershipMLPaymentConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

MembershipMLPaymentConfig& MembershipMLPaymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelTraining"))
  {
    m_modelTraining = jsonValue.GetObject("modelTraining");
    m_modelTrainingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelInference"))
  {
    m_modelInference = jsonValue.GetObject("modelInference");
    m_modelInferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipMLPaymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelTrainingHasBeenSet)
  {
   payload.WithObject("modelTraining", m_modelTraining.Jsonize());

  }

  if(m_modelInferenceHasBeenSet)
  {
   payload.WithObject("modelInference", m_modelInference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
