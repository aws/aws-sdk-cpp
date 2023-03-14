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
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult();
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const{ return m_loggingOptions; }

    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline void SetLoggingOptions(const LoggingOptions& value) { m_loggingOptions = value; }

    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline void SetLoggingOptions(LoggingOptions&& value) { m_loggingOptions = std::move(value); }

    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(const LoggingOptions& value) { SetLoggingOptions(value); return *this;}

    /**
     * <p>The current settings of the IoT Analytics logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(LoggingOptions&& value) { SetLoggingOptions(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLoggingOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLoggingOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLoggingOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoggingOptions m_loggingOptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
