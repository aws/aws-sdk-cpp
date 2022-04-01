/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ValidationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ValidationOutput::ValidationOutput() : 
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_latestValidationTimeHasBeenSet(false),
    m_appValidationOutputHasBeenSet(false),
    m_serverValidationOutputHasBeenSet(false)
{
}

ValidationOutput::ValidationOutput(JsonView jsonValue) : 
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_latestValidationTimeHasBeenSet(false),
    m_appValidationOutputHasBeenSet(false),
    m_serverValidationOutputHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationOutput& ValidationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationId"))
  {
    m_validationId = jsonValue.GetString("validationId");

    m_validationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ValidationStatusMapper::GetValidationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestValidationTime"))
  {
    m_latestValidationTime = jsonValue.GetDouble("latestValidationTime");

    m_latestValidationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appValidationOutput"))
  {
    m_appValidationOutput = jsonValue.GetObject("appValidationOutput");

    m_appValidationOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverValidationOutput"))
  {
    m_serverValidationOutput = jsonValue.GetObject("serverValidationOutput");

    m_serverValidationOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_validationIdHasBeenSet)
  {
   payload.WithString("validationId", m_validationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ValidationStatusMapper::GetNameForValidationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_latestValidationTimeHasBeenSet)
  {
   payload.WithDouble("latestValidationTime", m_latestValidationTime.SecondsWithMSPrecision());
  }

  if(m_appValidationOutputHasBeenSet)
  {
   payload.WithObject("appValidationOutput", m_appValidationOutput.Jsonize());

  }

  if(m_serverValidationOutputHasBeenSet)
  {
   payload.WithObject("serverValidationOutput", m_serverValidationOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
