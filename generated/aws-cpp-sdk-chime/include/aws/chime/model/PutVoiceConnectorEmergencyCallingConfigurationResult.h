/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EmergencyCallingConfiguration.h>
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
  class AWS_CHIME_API PutVoiceConnectorEmergencyCallingConfigurationResult
  {
  public:
    PutVoiceConnectorEmergencyCallingConfigurationResult();
    PutVoiceConnectorEmergencyCallingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutVoiceConnectorEmergencyCallingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The emergency calling configuration details.</p>
     */
    inline const EmergencyCallingConfiguration& GetEmergencyCallingConfiguration() const{ return m_emergencyCallingConfiguration; }

    /**
     * <p>The emergency calling configuration details.</p>
     */
    inline void SetEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { m_emergencyCallingConfiguration = value; }

    /**
     * <p>The emergency calling configuration details.</p>
     */
    inline void SetEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { m_emergencyCallingConfiguration = std::move(value); }

    /**
     * <p>The emergency calling configuration details.</p>
     */
    inline PutVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { SetEmergencyCallingConfiguration(value); return *this;}

    /**
     * <p>The emergency calling configuration details.</p>
     */
    inline PutVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { SetEmergencyCallingConfiguration(std::move(value)); return *this;}

  private:

    EmergencyCallingConfiguration m_emergencyCallingConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
