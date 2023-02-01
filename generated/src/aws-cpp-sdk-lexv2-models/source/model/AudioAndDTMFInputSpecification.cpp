/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AudioAndDTMFInputSpecification.h>
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

AudioAndDTMFInputSpecification::AudioAndDTMFInputSpecification() : 
    m_startTimeoutMs(0),
    m_startTimeoutMsHasBeenSet(false),
    m_audioSpecificationHasBeenSet(false),
    m_dtmfSpecificationHasBeenSet(false)
{
}

AudioAndDTMFInputSpecification::AudioAndDTMFInputSpecification(JsonView jsonValue) : 
    m_startTimeoutMs(0),
    m_startTimeoutMsHasBeenSet(false),
    m_audioSpecificationHasBeenSet(false),
    m_dtmfSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

AudioAndDTMFInputSpecification& AudioAndDTMFInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTimeoutMs"))
  {
    m_startTimeoutMs = jsonValue.GetInteger("startTimeoutMs");

    m_startTimeoutMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSpecification"))
  {
    m_audioSpecification = jsonValue.GetObject("audioSpecification");

    m_audioSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dtmfSpecification"))
  {
    m_dtmfSpecification = jsonValue.GetObject("dtmfSpecification");

    m_dtmfSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioAndDTMFInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeoutMsHasBeenSet)
  {
   payload.WithInteger("startTimeoutMs", m_startTimeoutMs);

  }

  if(m_audioSpecificationHasBeenSet)
  {
   payload.WithObject("audioSpecification", m_audioSpecification.Jsonize());

  }

  if(m_dtmfSpecificationHasBeenSet)
  {
   payload.WithObject("dtmfSpecification", m_dtmfSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
