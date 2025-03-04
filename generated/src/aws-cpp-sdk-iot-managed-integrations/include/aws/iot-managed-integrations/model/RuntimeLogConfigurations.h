/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>The different configurations for runtime logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/RuntimeLogConfigurations">AWS
   * API Reference</a></p>
   */
  class RuntimeLogConfigurations
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API RuntimeLogConfigurations();
    AWS_IOTMANAGEDINTEGRATIONS_API RuntimeLogConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API RuntimeLogConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The different log levels available for configuration.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline RuntimeLogConfigurations& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline RuntimeLogConfigurations& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The different log levels available for configuration.</p>
     */
    inline const LogLevel& GetLogFlushLevel() const{ return m_logFlushLevel; }
    inline bool LogFlushLevelHasBeenSet() const { return m_logFlushLevelHasBeenSet; }
    inline void SetLogFlushLevel(const LogLevel& value) { m_logFlushLevelHasBeenSet = true; m_logFlushLevel = value; }
    inline void SetLogFlushLevel(LogLevel&& value) { m_logFlushLevelHasBeenSet = true; m_logFlushLevel = std::move(value); }
    inline RuntimeLogConfigurations& WithLogFlushLevel(const LogLevel& value) { SetLogFlushLevel(value); return *this;}
    inline RuntimeLogConfigurations& WithLogFlushLevel(LogLevel&& value) { SetLogFlushLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of where to store runtime logs in the device.</p>
     */
    inline const Aws::String& GetLocalStoreLocation() const{ return m_localStoreLocation; }
    inline bool LocalStoreLocationHasBeenSet() const { return m_localStoreLocationHasBeenSet; }
    inline void SetLocalStoreLocation(const Aws::String& value) { m_localStoreLocationHasBeenSet = true; m_localStoreLocation = value; }
    inline void SetLocalStoreLocation(Aws::String&& value) { m_localStoreLocationHasBeenSet = true; m_localStoreLocation = std::move(value); }
    inline void SetLocalStoreLocation(const char* value) { m_localStoreLocationHasBeenSet = true; m_localStoreLocation.assign(value); }
    inline RuntimeLogConfigurations& WithLocalStoreLocation(const Aws::String& value) { SetLocalStoreLocation(value); return *this;}
    inline RuntimeLogConfigurations& WithLocalStoreLocation(Aws::String&& value) { SetLocalStoreLocation(std::move(value)); return *this;}
    inline RuntimeLogConfigurations& WithLocalStoreLocation(const char* value) { SetLocalStoreLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to set the maximum number of runtime log files that can be
     * stored on the device before the oldest files are deleted or overwritten.</p>
     */
    inline int GetLocalStoreFileRotationMaxFiles() const{ return m_localStoreFileRotationMaxFiles; }
    inline bool LocalStoreFileRotationMaxFilesHasBeenSet() const { return m_localStoreFileRotationMaxFilesHasBeenSet; }
    inline void SetLocalStoreFileRotationMaxFiles(int value) { m_localStoreFileRotationMaxFilesHasBeenSet = true; m_localStoreFileRotationMaxFiles = value; }
    inline RuntimeLogConfigurations& WithLocalStoreFileRotationMaxFiles(int value) { SetLocalStoreFileRotationMaxFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to set the maximum bytes of runtime logs that can be stored on
     * the device before the oldest logs are deleted or overwritten.</p>
     */
    inline int GetLocalStoreFileRotationMaxBytes() const{ return m_localStoreFileRotationMaxBytes; }
    inline bool LocalStoreFileRotationMaxBytesHasBeenSet() const { return m_localStoreFileRotationMaxBytesHasBeenSet; }
    inline void SetLocalStoreFileRotationMaxBytes(int value) { m_localStoreFileRotationMaxBytesHasBeenSet = true; m_localStoreFileRotationMaxBytes = value; }
    inline RuntimeLogConfigurations& WithLocalStoreFileRotationMaxBytes(int value) { SetLocalStoreFileRotationMaxBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to enable or disable uploading of runtime logs to the
     * cloud.</p>
     */
    inline bool GetUploadLog() const{ return m_uploadLog; }
    inline bool UploadLogHasBeenSet() const { return m_uploadLogHasBeenSet; }
    inline void SetUploadLog(bool value) { m_uploadLogHasBeenSet = true; m_uploadLog = value; }
    inline RuntimeLogConfigurations& WithUploadLog(bool value) { SetUploadLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to set the time interval in minutes between each batch of
     * runtime logs that the device uploads to the cloud.</p>
     */
    inline int GetUploadPeriodMinutes() const{ return m_uploadPeriodMinutes; }
    inline bool UploadPeriodMinutesHasBeenSet() const { return m_uploadPeriodMinutesHasBeenSet; }
    inline void SetUploadPeriodMinutes(int value) { m_uploadPeriodMinutesHasBeenSet = true; m_uploadPeriodMinutes = value; }
    inline RuntimeLogConfigurations& WithUploadPeriodMinutes(int value) { SetUploadPeriodMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to enable or disable deleting of runtime logs in the device
     * once uploaded to the cloud.</p>
     */
    inline bool GetDeleteLocalStoreAfterUpload() const{ return m_deleteLocalStoreAfterUpload; }
    inline bool DeleteLocalStoreAfterUploadHasBeenSet() const { return m_deleteLocalStoreAfterUploadHasBeenSet; }
    inline void SetDeleteLocalStoreAfterUpload(bool value) { m_deleteLocalStoreAfterUploadHasBeenSet = true; m_deleteLocalStoreAfterUpload = value; }
    inline RuntimeLogConfigurations& WithDeleteLocalStoreAfterUpload(bool value) { SetDeleteLocalStoreAfterUpload(value); return *this;}
    ///@}
  private:

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    LogLevel m_logFlushLevel;
    bool m_logFlushLevelHasBeenSet = false;

    Aws::String m_localStoreLocation;
    bool m_localStoreLocationHasBeenSet = false;

    int m_localStoreFileRotationMaxFiles;
    bool m_localStoreFileRotationMaxFilesHasBeenSet = false;

    int m_localStoreFileRotationMaxBytes;
    bool m_localStoreFileRotationMaxBytesHasBeenSet = false;

    bool m_uploadLog;
    bool m_uploadLogHasBeenSet = false;

    int m_uploadPeriodMinutes;
    bool m_uploadPeriodMinutesHasBeenSet = false;

    bool m_deleteLocalStoreAfterUpload;
    bool m_deleteLocalStoreAfterUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
