/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ConfigurationDetails::ConfigurationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationDetails& ConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("configurationStatus"));
    m_configurationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_configurationStatusHasBeenSet)
  {
   payload.WithString("configurationStatus", ConfigurationStatusMapper::GetNameForConfigurationStatus(m_configurationStatus));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
