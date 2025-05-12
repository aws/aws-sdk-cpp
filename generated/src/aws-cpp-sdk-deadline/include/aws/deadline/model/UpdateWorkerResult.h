/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/deadline/model/HostConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace deadline
{
namespace Model
{
  class UpdateWorkerResult
  {
  public:
    AWS_DEADLINE_API UpdateWorkerResult() = default;
    AWS_DEADLINE_API UpdateWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API UpdateWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The worker log to update.</p>
     */
    inline const LogConfiguration& GetLog() const { return m_log; }
    template<typename LogT = LogConfiguration>
    void SetLog(LogT&& value) { m_logHasBeenSet = true; m_log = std::forward<LogT>(value); }
    template<typename LogT = LogConfiguration>
    UpdateWorkerResult& WithLog(LogT&& value) { SetLog(std::forward<LogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script that runs as a worker is starting up that you can use to provide
     * additional configuration for workers in your fleet.</p>
     */
    inline const HostConfiguration& GetHostConfiguration() const { return m_hostConfiguration; }
    template<typename HostConfigurationT = HostConfiguration>
    void SetHostConfiguration(HostConfigurationT&& value) { m_hostConfigurationHasBeenSet = true; m_hostConfiguration = std::forward<HostConfigurationT>(value); }
    template<typename HostConfigurationT = HostConfiguration>
    UpdateWorkerResult& WithHostConfiguration(HostConfigurationT&& value) { SetHostConfiguration(std::forward<HostConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateWorkerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LogConfiguration m_log;
    bool m_logHasBeenSet = false;

    HostConfiguration m_hostConfiguration;
    bool m_hostConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
