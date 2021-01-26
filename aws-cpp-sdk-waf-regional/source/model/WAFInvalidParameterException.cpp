/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/WAFInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

WAFInvalidParameterException::WAFInvalidParameterException() : 
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reason(ParameterExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

WAFInvalidParameterException::WAFInvalidParameterException(JsonView jsonValue) : 
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reason(ParameterExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

WAFInvalidParameterException& WAFInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("field"))
  {
    m_field = ParameterExceptionFieldMapper::GetParameterExceptionFieldForName(jsonValue.GetString("field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameter"))
  {
    m_parameter = jsonValue.GetString("parameter");

    m_parameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ParameterExceptionReasonMapper::GetParameterExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue WAFInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", ParameterExceptionFieldMapper::GetNameForParameterExceptionField(m_field));
  }

  if(m_parameterHasBeenSet)
  {
   payload.WithString("parameter", m_parameter);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ParameterExceptionReasonMapper::GetNameForParameterExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
