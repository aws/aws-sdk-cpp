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
    AWS_IOT_API EnableIoTLoggingParams() = default;
    AWS_IOT_API EnableIoTLoggingParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API EnableIoTLoggingParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for logging.</p>
     */
    inline const Aws::String& GetRoleArnForLogging() const { return m_roleArnForLogging; }
    inline bool RoleArnForLoggingHasBeenSet() const { return m_roleArnForLoggingHasBeenSet; }
    template<typename RoleArnForLoggingT = Aws::String>
    void SetRoleArnForLogging(RoleArnForLoggingT&& value) { m_roleArnForLoggingHasBeenSet = true; m_roleArnForLogging = std::forward<RoleArnForLoggingT>(value); }
    template<typename RoleArnForLoggingT = Aws::String>
    EnableIoTLoggingParams& WithRoleArnForLogging(RoleArnForLoggingT&& value) { SetRoleArnForLogging(std::forward<RoleArnForLoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of information to be logged.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline EnableIoTLoggingParams& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArnForLogging;
    bool m_roleArnForLoggingHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
