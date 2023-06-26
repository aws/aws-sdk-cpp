﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LoggingConfigurationStatus.h>
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
   * <p>Represents the output of a CreateLoggingConfiguration
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateLoggingConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class CreateLoggingConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateLoggingConfigurationResult();
    AWS_PROMETHEUSSERVICE_API CreateLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the logging configuration.</p>
     */
    inline const LoggingConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline void SetStatus(const LoggingConfigurationStatus& value) { m_status = value; }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline void SetStatus(LoggingConfigurationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline CreateLoggingConfigurationResult& WithStatus(const LoggingConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline CreateLoggingConfigurationResult& WithStatus(LoggingConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoggingConfigurationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
