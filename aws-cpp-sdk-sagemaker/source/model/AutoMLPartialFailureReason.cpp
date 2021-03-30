/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLPartialFailureReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLPartialFailureReason::AutoMLPartialFailureReason() : 
    m_partialFailureMessageHasBeenSet(false)
{
}

AutoMLPartialFailureReason::AutoMLPartialFailureReason(JsonView jsonValue) : 
    m_partialFailureMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLPartialFailureReason& AutoMLPartialFailureReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartialFailureMessage"))
  {
    m_partialFailureMessage = jsonValue.GetString("PartialFailureMessage");

    m_partialFailureMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLPartialFailureReason::Jsonize() const
{
  JsonValue payload;

  if(m_partialFailureMessageHasBeenSet)
  {
   payload.WithString("PartialFailureMessage", m_partialFailureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
