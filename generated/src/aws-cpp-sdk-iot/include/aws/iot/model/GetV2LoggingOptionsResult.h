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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class GetV2LoggingOptionsResult
  {
  public:
    AWS_IOT_API GetV2LoggingOptionsResult() = default;
    AWS_IOT_API GetV2LoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetV2LoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IAM role ARN IoT uses to write to your CloudWatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetV2LoggingOptionsResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default log level.</p>
     */
    inline LogLevel GetDefaultLogLevel() const { return m_defaultLogLevel; }
    inline void SetDefaultLogLevel(LogLevel value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = value; }
    inline GetV2LoggingOptionsResult& WithDefaultLogLevel(LogLevel value) { SetDefaultLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables all logs.</p>
     */
    inline bool GetDisableAllLogs() const { return m_disableAllLogs; }
    inline void SetDisableAllLogs(bool value) { m_disableAllLogsHasBeenSet = true; m_disableAllLogs = value; }
    inline GetV2LoggingOptionsResult& WithDisableAllLogs(bool value) { SetDisableAllLogs(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetV2LoggingOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LogLevel m_defaultLogLevel{LogLevel::NOT_SET};
    bool m_defaultLogLevelHasBeenSet = false;

    bool m_disableAllLogs{false};
    bool m_disableAllLogsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
