/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/EventDestination.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about an event destination for a configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigurationSetEventDestinationsResult
  {
  public:
    AWS_SESV2_API GetConfigurationSetEventDestinationsResult();
    AWS_SESV2_API GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetConfigurationSetEventDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace SESV2
} // namespace Aws
