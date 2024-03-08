/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LoggingConfigurationMetadata.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeLoggingConfiguration</code>
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
     * <p>A structure that displays the information about the logging
     * configuration.</p>
     */
    inline const LoggingConfigurationMetadata& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>A structure that displays the information about the logging
     * configuration.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfigurationMetadata& value) { m_loggingConfiguration = value; }

    /**
     * <p>A structure that displays the information about the logging
     * configuration.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfigurationMetadata&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>A structure that displays the information about the logging
     * configuration.</p>
     */
    inline DescribeLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfigurationMetadata& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>A structure that displays the information about the logging
     * configuration.</p>
     */
    inline DescribeLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfigurationMetadata&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoggingConfigurationMetadata m_loggingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
