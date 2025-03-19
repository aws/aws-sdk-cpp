/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/Event.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Health
{
namespace Model
{

  /**
   * <p>Detailed information about an event. A combination of an <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>
   * object, an <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EventDescription.html">EventDescription</a>
   * object, and additional metadata about the event. Returned by the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEventDetails">AWS
   * API Reference</a></p>
   */
  class OrganizationEventDetails
  {
  public:
    AWS_HEALTH_API OrganizationEventDetails() = default;
    AWS_HEALTH_API OrganizationEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    OrganizationEventDetails& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Event& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = Event>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = Event>
    OrganizationEventDetails& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetEventDescription() const { return m_eventDescription; }
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }
    template<typename EventDescriptionT = Aws::String>
    void SetEventDescription(EventDescriptionT&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::forward<EventDescriptionT>(value); }
    template<typename EventDescriptionT = Aws::String>
    OrganizationEventDetails& WithEventDescription(EventDescriptionT&& value) { SetEventDescription(std::forward<EventDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata about the event.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventMetadata() const { return m_eventMetadata; }
    inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }
    template<typename EventMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetEventMetadata(EventMetadataT&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = std::forward<EventMetadataT>(value); }
    template<typename EventMetadataT = Aws::Map<Aws::String, Aws::String>>
    OrganizationEventDetails& WithEventMetadata(EventMetadataT&& value) { SetEventMetadata(std::forward<EventMetadataT>(value)); return *this;}
    template<typename EventMetadataKeyT = Aws::String, typename EventMetadataValueT = Aws::String>
    OrganizationEventDetails& AddEventMetadata(EventMetadataKeyT&& key, EventMetadataValueT&& value) {
      m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::forward<EventMetadataKeyT>(key), std::forward<EventMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Event m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_eventDescription;
    bool m_eventDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_eventMetadata;
    bool m_eventMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
