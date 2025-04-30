/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/StatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

StatusDetails::StatusDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusDetails& StatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationDetails"))
  {
    m_validationDetails = jsonValue.GetObject("validationDetails");
    m_validationDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProcessingDetails"))
  {
    m_dataProcessingDetails = jsonValue.GetObject("dataProcessingDetails");
    m_dataProcessingDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingDetails"))
  {
    m_trainingDetails = jsonValue.GetObject("trainingDetails");
    m_trainingDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_validationDetailsHasBeenSet)
  {
   payload.WithObject("validationDetails", m_validationDetails.Jsonize());

  }

  if(m_dataProcessingDetailsHasBeenSet)
  {
   payload.WithObject("dataProcessingDetails", m_dataProcessingDetails.Jsonize());

  }

  if(m_trainingDetailsHasBeenSet)
  {
   payload.WithObject("trainingDetails", m_trainingDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
