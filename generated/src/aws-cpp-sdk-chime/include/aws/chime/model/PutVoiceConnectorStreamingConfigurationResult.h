/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/StreamingConfiguration.h>
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
  class PutVoiceConnectorStreamingConfigurationResult
  {
  public:
    AWS_CHIME_API PutVoiceConnectorStreamingConfigurationResult();
    AWS_CHIME_API PutVoiceConnectorStreamingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutVoiceConnectorStreamingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated streaming configuration details.</p>
     */
    inline const StreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    /**
     * <p>The updated streaming configuration details.</p>
     */
    inline void SetStreamingConfiguration(const StreamingConfiguration& value) { m_streamingConfiguration = value; }

    /**
     * <p>The updated streaming configuration details.</p>
     */
    inline void SetStreamingConfiguration(StreamingConfiguration&& value) { m_streamingConfiguration = std::move(value); }

    /**
     * <p>The updated streaming configuration details.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(const StreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    /**
     * <p>The updated streaming configuration details.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(StreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}

  private:

    StreamingConfiguration m_streamingConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
