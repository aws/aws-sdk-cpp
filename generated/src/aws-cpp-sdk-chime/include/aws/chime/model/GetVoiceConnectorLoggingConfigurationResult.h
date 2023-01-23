/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/LoggingConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class GetVoiceConnectorLoggingConfigurationResult
  {
  public:
    AWS_CHIME_API GetVoiceConnectorLoggingConfigurationResult();
    AWS_CHIME_API GetVoiceConnectorLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetVoiceConnectorLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The logging configuration details.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The logging configuration details.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>The logging configuration details.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>The logging configuration details.</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The logging configuration details.</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
