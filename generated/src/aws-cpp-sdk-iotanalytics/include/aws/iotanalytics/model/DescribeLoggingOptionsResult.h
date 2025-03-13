/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/LoggingOptions.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class DescribeLoggingOptionsResult
  {
  public:
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult() = default;
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const { return m_loggingOptions; }
    template<typename LoggingOptionsT = LoggingOptions>
    void SetLoggingOptions(LoggingOptionsT&& value) { m_loggingOptionsHasBeenSet = true; m_loggingOptions = std::forward<LoggingOptionsT>(value); }
    template<typename LoggingOptionsT = LoggingOptions>
    DescribeLoggingOptionsResult& WithLoggingOptions(LoggingOptionsT&& value) { SetLoggingOptions(std::forward<LoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLoggingOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LoggingOptions m_loggingOptions;
    bool m_loggingOptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
