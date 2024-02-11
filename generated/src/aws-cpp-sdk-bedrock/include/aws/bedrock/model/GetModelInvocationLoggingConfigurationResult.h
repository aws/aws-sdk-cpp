/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/LoggingConfig.h>
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
namespace Bedrock
{
namespace Model
{
  class GetModelInvocationLoggingConfigurationResult
  {
  public:
    AWS_BEDROCK_API GetModelInvocationLoggingConfigurationResult();
    AWS_BEDROCK_API GetModelInvocationLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelInvocationLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current configuration values.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>The current configuration values.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfig = value; }

    /**
     * <p>The current configuration values.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfig = std::move(value); }

    /**
     * <p>The current configuration values.</p>
     */
    inline GetModelInvocationLoggingConfigurationResult& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>The current configuration values.</p>
     */
    inline GetModelInvocationLoggingConfigurationResult& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetModelInvocationLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetModelInvocationLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetModelInvocationLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoggingConfig m_loggingConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
