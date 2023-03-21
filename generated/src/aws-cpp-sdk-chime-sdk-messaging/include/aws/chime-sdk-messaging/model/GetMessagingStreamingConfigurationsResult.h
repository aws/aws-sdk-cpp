/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/StreamingConfiguration.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class GetMessagingStreamingConfigurationsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult();
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming settings.</p>
     */
    inline const Aws::Vector<StreamingConfiguration>& GetStreamingConfigurations() const{ return m_streamingConfigurations; }

    /**
     * <p>The streaming settings.</p>
     */
    inline void SetStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { m_streamingConfigurations = value; }

    /**
     * <p>The streaming settings.</p>
     */
    inline void SetStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { m_streamingConfigurations = std::move(value); }

    /**
     * <p>The streaming settings.</p>
     */
    inline GetMessagingStreamingConfigurationsResult& WithStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { SetStreamingConfigurations(value); return *this;}

    /**
     * <p>The streaming settings.</p>
     */
    inline GetMessagingStreamingConfigurationsResult& WithStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { SetStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The streaming settings.</p>
     */
    inline GetMessagingStreamingConfigurationsResult& AddStreamingConfigurations(const StreamingConfiguration& value) { m_streamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The streaming settings.</p>
     */
    inline GetMessagingStreamingConfigurationsResult& AddStreamingConfigurations(StreamingConfiguration&& value) { m_streamingConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMessagingStreamingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMessagingStreamingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMessagingStreamingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StreamingConfiguration> m_streamingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
