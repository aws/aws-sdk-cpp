﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/EventDestination.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about an event destination for a configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSetEventDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetConfigurationSetEventDestinationsResult
  {
  public:
    GetConfigurationSetEventDestinationsResult();
    GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConfigurationSetEventDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinations = value; }

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinations = std::move(value); }

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline GetConfigurationSetEventDestinationsResult& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline GetConfigurationSetEventDestinationsResult& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline GetConfigurationSetEventDestinationsResult& AddEventDestinations(const EventDestination& value) { m_eventDestinations.push_back(value); return *this; }

    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
    inline GetConfigurationSetEventDestinationsResult& AddEventDestinations(EventDestination&& value) { m_eventDestinations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventDestination> m_eventDestinations;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
