/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/LoggingOptions.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeLoggingOptionsResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeLoggingOptionsResult();
    AWS_IOTSITEWISE_API DescribeLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current logging options.</p>
     */
    inline const LoggingOptions& GetLoggingOptions() const{ return m_loggingOptions; }

    /**
     * <p>The current logging options.</p>
     */
    inline void SetLoggingOptions(const LoggingOptions& value) { m_loggingOptions = value; }

    /**
     * <p>The current logging options.</p>
     */
    inline void SetLoggingOptions(LoggingOptions&& value) { m_loggingOptions = std::move(value); }

    /**
     * <p>The current logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(const LoggingOptions& value) { SetLoggingOptions(value); return *this;}

    /**
     * <p>The current logging options.</p>
     */
    inline DescribeLoggingOptionsResult& WithLoggingOptions(LoggingOptions&& value) { SetLoggingOptions(std::move(value)); return *this;}

  private:

    LoggingOptions m_loggingOptions;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
