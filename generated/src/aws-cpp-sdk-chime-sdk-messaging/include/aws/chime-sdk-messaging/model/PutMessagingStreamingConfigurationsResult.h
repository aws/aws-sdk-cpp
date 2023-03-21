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
  class PutMessagingStreamingConfigurationsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API PutMessagingStreamingConfigurationsResult();
    AWS_CHIMESDKMESSAGING_API PutMessagingStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API PutMessagingStreamingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested streaming configurations.</p>
     */
    inline const Aws::Vector<StreamingConfiguration>& GetStreamingConfigurations() const{ return m_streamingConfigurations; }

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline void SetStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { m_streamingConfigurations = value; }

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline void SetStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { m_streamingConfigurations = std::move(value); }

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsResult& WithStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { SetStreamingConfigurations(value); return *this;}

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsResult& WithStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { SetStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsResult& AddStreamingConfigurations(const StreamingConfiguration& value) { m_streamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The requested streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsResult& AddStreamingConfigurations(StreamingConfiguration&& value) { m_streamingConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutMessagingStreamingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutMessagingStreamingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutMessagingStreamingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StreamingConfiguration> m_streamingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
