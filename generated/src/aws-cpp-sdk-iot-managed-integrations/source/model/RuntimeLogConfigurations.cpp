/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/RuntimeLogConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

RuntimeLogConfigurations::RuntimeLogConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

RuntimeLogConfigurations& RuntimeLogConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));
    m_logLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogFlushLevel"))
  {
    m_logFlushLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogFlushLevel"));
    m_logFlushLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalStoreLocation"))
  {
    m_localStoreLocation = jsonValue.GetString("LocalStoreLocation");
    m_localStoreLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalStoreFileRotationMaxFiles"))
  {
    m_localStoreFileRotationMaxFiles = jsonValue.GetInteger("LocalStoreFileRotationMaxFiles");
    m_localStoreFileRotationMaxFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalStoreFileRotationMaxBytes"))
  {
    m_localStoreFileRotationMaxBytes = jsonValue.GetInteger("LocalStoreFileRotationMaxBytes");
    m_localStoreFileRotationMaxBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UploadLog"))
  {
    m_uploadLog = jsonValue.GetBool("UploadLog");
    m_uploadLogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UploadPeriodMinutes"))
  {
    m_uploadPeriodMinutes = jsonValue.GetInteger("UploadPeriodMinutes");
    m_uploadPeriodMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeleteLocalStoreAfterUpload"))
  {
    m_deleteLocalStoreAfterUpload = jsonValue.GetBool("DeleteLocalStoreAfterUpload");
    m_deleteLocalStoreAfterUploadHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeLogConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_logFlushLevelHasBeenSet)
  {
   payload.WithString("LogFlushLevel", LogLevelMapper::GetNameForLogLevel(m_logFlushLevel));
  }

  if(m_localStoreLocationHasBeenSet)
  {
   payload.WithString("LocalStoreLocation", m_localStoreLocation);

  }

  if(m_localStoreFileRotationMaxFilesHasBeenSet)
  {
   payload.WithInteger("LocalStoreFileRotationMaxFiles", m_localStoreFileRotationMaxFiles);

  }

  if(m_localStoreFileRotationMaxBytesHasBeenSet)
  {
   payload.WithInteger("LocalStoreFileRotationMaxBytes", m_localStoreFileRotationMaxBytes);

  }

  if(m_uploadLogHasBeenSet)
  {
   payload.WithBool("UploadLog", m_uploadLog);

  }

  if(m_uploadPeriodMinutesHasBeenSet)
  {
   payload.WithInteger("UploadPeriodMinutes", m_uploadPeriodMinutes);

  }

  if(m_deleteLocalStoreAfterUploadHasBeenSet)
  {
   payload.WithBool("DeleteLocalStoreAfterUpload", m_deleteLocalStoreAfterUpload);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
