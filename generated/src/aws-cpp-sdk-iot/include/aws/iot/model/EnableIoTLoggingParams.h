/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LogLevel.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Parameters used when defining a mitigation action that enable Amazon Web
   * Services IoT Core logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableIoTLoggingParams">AWS
   * API Reference</a></p>
   */
  class EnableIoTLoggingParams
  {
  public:
    AWS_IOT_API EnableIoTLoggingParams();
    AWS_IOT_API EnableIoTLoggingParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API EnableIoTLoggingParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline const Aws::String& GetRoleArnForLogging() const{ return m_roleArnForLogging; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline bool RoleArnForLoggingHasBeenSet() const { return m_roleArnForLoggingHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline void SetRoleArnForLogging(const Aws::String& value) { m_roleArnForLoggingHasBeenSet = true; m_roleArnForLogging = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline void SetRoleArnForLogging(Aws::String&& value) { m_roleArnForLoggingHasBeenSet = true; m_roleArnForLogging = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline void SetRoleArnForLogging(const char* value) { m_roleArnForLoggingHasBeenSet = true; m_roleArnForLogging.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline EnableIoTLoggingParams& WithRoleArnForLogging(const Aws::String& value) { SetRoleArnForLogging(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline EnableIoTLoggingParams& WithRoleArnForLogging(Aws::String&& value) { SetRoleArnForLogging(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline EnableIoTLoggingParams& WithRoleArnForLogging(const char* value) { SetRoleArnForLogging(value); return *this;}


    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline EnableIoTLoggingParams& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline EnableIoTLoggingParams& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    Aws::String m_roleArnForLogging;
    bool m_roleArnForLoggingHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
