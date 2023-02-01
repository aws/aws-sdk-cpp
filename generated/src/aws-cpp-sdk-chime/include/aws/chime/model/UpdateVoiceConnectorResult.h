/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/VoiceConnector.h>
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
  class UpdateVoiceConnectorResult
  {
  public:
    AWS_CHIME_API UpdateVoiceConnectorResult();
    AWS_CHIME_API UpdateVoiceConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API UpdateVoiceConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated Amazon Chime Voice Connector details.</p>
     */
    inline const VoiceConnector& GetVoiceConnector() const{ return m_voiceConnector; }

    /**
     * <p>The updated Amazon Chime Voice Connector details.</p>
     */
    inline void SetVoiceConnector(const VoiceConnector& value) { m_voiceConnector = value; }

    /**
     * <p>The updated Amazon Chime Voice Connector details.</p>
     */
    inline void SetVoiceConnector(VoiceConnector&& value) { m_voiceConnector = std::move(value); }

    /**
     * <p>The updated Amazon Chime Voice Connector details.</p>
     */
    inline UpdateVoiceConnectorResult& WithVoiceConnector(const VoiceConnector& value) { SetVoiceConnector(value); return *this;}

    /**
     * <p>The updated Amazon Chime Voice Connector details.</p>
     */
    inline UpdateVoiceConnectorResult& WithVoiceConnector(VoiceConnector&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    VoiceConnector m_voiceConnector;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
