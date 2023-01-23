/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EventsConfiguration.h>
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
  class GetEventsConfigurationResult
  {
  public:
    AWS_CHIME_API GetEventsConfigurationResult();
    AWS_CHIME_API GetEventsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetEventsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The events configuration details.</p>
     */
    inline const EventsConfiguration& GetEventsConfiguration() const{ return m_eventsConfiguration; }

    /**
     * <p>The events configuration details.</p>
     */
    inline void SetEventsConfiguration(const EventsConfiguration& value) { m_eventsConfiguration = value; }

    /**
     * <p>The events configuration details.</p>
     */
    inline void SetEventsConfiguration(EventsConfiguration&& value) { m_eventsConfiguration = std::move(value); }

    /**
     * <p>The events configuration details.</p>
     */
    inline GetEventsConfigurationResult& WithEventsConfiguration(const EventsConfiguration& value) { SetEventsConfiguration(value); return *this;}

    /**
     * <p>The events configuration details.</p>
     */
    inline GetEventsConfigurationResult& WithEventsConfiguration(EventsConfiguration&& value) { SetEventsConfiguration(std::move(value)); return *this;}

  private:

    EventsConfiguration m_eventsConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
