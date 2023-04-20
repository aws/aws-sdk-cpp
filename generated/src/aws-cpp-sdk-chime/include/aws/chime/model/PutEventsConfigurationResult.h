/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EventsConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class PutEventsConfigurationResult
  {
  public:
    AWS_CHIME_API PutEventsConfigurationResult();
    AWS_CHIME_API PutEventsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutEventsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline const EventsConfiguration& GetEventsConfiguration() const{ return m_eventsConfiguration; }

    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline void SetEventsConfiguration(const EventsConfiguration& value) { m_eventsConfiguration = value; }

    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline void SetEventsConfiguration(EventsConfiguration&& value) { m_eventsConfiguration = std::move(value); }

    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline PutEventsConfigurationResult& WithEventsConfiguration(const EventsConfiguration& value) { SetEventsConfiguration(value); return *this;}

    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline PutEventsConfigurationResult& WithEventsConfiguration(EventsConfiguration&& value) { SetEventsConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutEventsConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutEventsConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutEventsConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventsConfiguration m_eventsConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
