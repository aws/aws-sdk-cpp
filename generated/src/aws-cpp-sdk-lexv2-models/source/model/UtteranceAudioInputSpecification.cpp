/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceAudioInputSpecification.h>
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

UtteranceAudioInputSpecification::UtteranceAudioInputSpecification() : 
    m_audioFileS3LocationHasBeenSet(false)
{
}

UtteranceAudioInputSpecification::UtteranceAudioInputSpecification(JsonView jsonValue) : 
    m_audioFileS3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceAudioInputSpecification& UtteranceAudioInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioFileS3Location"))
  {
    m_audioFileS3Location = jsonValue.GetString("audioFileS3Location");

    m_audioFileS3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceAudioInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_audioFileS3LocationHasBeenSet)
  {
   payload.WithString("audioFileS3Location", m_audioFileS3Location);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
