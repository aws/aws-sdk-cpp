/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentConfirmationSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

IntentConfirmationSetting::IntentConfirmationSetting() : 
    m_promptSpecificationHasBeenSet(false),
    m_declinationResponseHasBeenSet(false)
{
}

IntentConfirmationSetting::IntentConfirmationSetting(JsonView jsonValue) : 
    m_promptSpecificationHasBeenSet(false),
    m_declinationResponseHasBeenSet(false)
{
  *this = jsonValue;
}

IntentConfirmationSetting& IntentConfirmationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptSpecification"))
  {
    m_promptSpecification = jsonValue.GetObject("promptSpecification");

    m_promptSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("declinationResponse"))
  {
    m_declinationResponse = jsonValue.GetObject("declinationResponse");

    m_declinationResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentConfirmationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_promptSpecificationHasBeenSet)
  {
   payload.WithObject("promptSpecification", m_promptSpecification.Jsonize());

  }

  if(m_declinationResponseHasBeenSet)
  {
   payload.WithObject("declinationResponse", m_declinationResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
