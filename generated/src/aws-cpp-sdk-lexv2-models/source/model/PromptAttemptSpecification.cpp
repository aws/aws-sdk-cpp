/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PromptAttemptSpecification.h>
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

PromptAttemptSpecification::PromptAttemptSpecification() : 
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false),
    m_allowedInputTypesHasBeenSet(false),
    m_audioAndDTMFInputSpecificationHasBeenSet(false),
    m_textInputSpecificationHasBeenSet(false)
{
}

PromptAttemptSpecification::PromptAttemptSpecification(JsonView jsonValue) : 
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false),
    m_allowedInputTypesHasBeenSet(false),
    m_audioAndDTMFInputSpecificationHasBeenSet(false),
    m_textInputSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

PromptAttemptSpecification& PromptAttemptSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowInterrupt"))
  {
    m_allowInterrupt = jsonValue.GetBool("allowInterrupt");

    m_allowInterruptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedInputTypes"))
  {
    m_allowedInputTypes = jsonValue.GetObject("allowedInputTypes");

    m_allowedInputTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioAndDTMFInputSpecification"))
  {
    m_audioAndDTMFInputSpecification = jsonValue.GetObject("audioAndDTMFInputSpecification");

    m_audioAndDTMFInputSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("textInputSpecification"))
  {
    m_textInputSpecification = jsonValue.GetObject("textInputSpecification");

    m_textInputSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptAttemptSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_allowInterruptHasBeenSet)
  {
   payload.WithBool("allowInterrupt", m_allowInterrupt);

  }

  if(m_allowedInputTypesHasBeenSet)
  {
   payload.WithObject("allowedInputTypes", m_allowedInputTypes.Jsonize());

  }

  if(m_audioAndDTMFInputSpecificationHasBeenSet)
  {
   payload.WithObject("audioAndDTMFInputSpecification", m_audioAndDTMFInputSpecification.Jsonize());

  }

  if(m_textInputSpecificationHasBeenSet)
  {
   payload.WithObject("textInputSpecification", m_textInputSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
