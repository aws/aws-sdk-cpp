/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/LoggingOptions.h>
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
  class AWS_IOTANALYTICS_API DescribeLoggingOptionsResult
  {
  public:
    DescribeLoggingOptionsResult();
    DescribeLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current settings of the AWS IoT Analytics logging options.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const{ return m_loggingOptions; }

    /**
     * <p>The current settings of the AWS IoT Analytics logging options.</p>
     */
    inline void SetLoggingOptions(const LoggingOptions& value) { m_loggingOptions = value; }

    /**
     * <p>The current settings of the AWS IoT Analytics logging options.</p>
     */
    inline void SetLoggingOptions(LoggingOptions&& value) { m_loggingOptions = std::move(value); }

    /**
     * <p>The current settings of the AWS IoT Analytics logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(const LoggingOptions& value) { SetLoggingOptions(value); return *this;}

    /**
     * <p>The current settings of the AWS IoT Analytics logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(LoggingOptions&& value) { SetLoggingOptions(std::move(value)); return *this;}

  private:

    LoggingOptions m_loggingOptions;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
