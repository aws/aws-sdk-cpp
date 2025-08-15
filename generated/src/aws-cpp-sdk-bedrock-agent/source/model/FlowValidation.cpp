/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FlowValidation::FlowValidation(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowValidation& FlowValidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = FlowValidationSeverityMapper::GetFlowValidationSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetObject("details");
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowValidationTypeMapper::GetFlowValidationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowValidation::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", FlowValidationSeverityMapper::GetNameForFlowValidationSeverity(m_severity));
  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("details", m_details.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowValidationTypeMapper::GetNameForFlowValidationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
