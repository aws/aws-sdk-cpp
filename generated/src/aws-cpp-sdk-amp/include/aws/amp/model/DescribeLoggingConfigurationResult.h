/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LoggingConfigurationMetadata.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a DescribeLoggingConfiguration
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeLoggingConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLoggingConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeLoggingConfigurationResult();
    AWS_PROMETHEUSSERVICE_API DescribeLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata object containing information about the logging configuration of a
     * workspace.</p>
     */
    inline const LoggingConfigurationMetadata& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>Metadata object containing information about the logging configuration of a
     * workspace.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfigurationMetadata& value) { m_loggingConfiguration = value; }

    /**
     * <p>Metadata object containing information about the logging configuration of a
     * workspace.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfigurationMetadata&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>Metadata object containing information about the logging configuration of a
     * workspace.</p>
     */
    inline DescribeLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfigurationMetadata& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>Metadata object containing information about the logging configuration of a
     * workspace.</p>
     */
    inline DescribeLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfigurationMetadata&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfigurationMetadata m_loggingConfiguration;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
