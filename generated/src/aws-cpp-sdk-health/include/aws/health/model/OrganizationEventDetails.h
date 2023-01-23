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
    AWS_HEALTH_API OrganizationEventDetails();
    AWS_HEALTH_API OrganizationEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline OrganizationEventDetails& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline OrganizationEventDetails& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline OrganizationEventDetails& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    
    inline const Event& GetEvent() const{ return m_event; }

    
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    
    inline void SetEvent(const Event& value) { m_eventHasBeenSet = true; m_event = value; }

    
    inline void SetEvent(Event&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    
    inline OrganizationEventDetails& WithEvent(const Event& value) { SetEvent(value); return *this;}

    
    inline OrganizationEventDetails& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}


    
    inline const Aws::String& GetEventDescription() const{ return m_eventDescription; }

    
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }

    
    inline void SetEventDescription(const Aws::String& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = value; }

    
    inline void SetEventDescription(Aws::String&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::move(value); }

    
    inline void SetEventDescription(const char* value) { m_eventDescriptionHasBeenSet = true; m_eventDescription.assign(value); }

    
    inline OrganizationEventDetails& WithEventDescription(const Aws::String& value) { SetEventDescription(value); return *this;}

    
    inline OrganizationEventDetails& WithEventDescription(Aws::String&& value) { SetEventDescription(std::move(value)); return *this;}

    
    inline OrganizationEventDetails& WithEventDescription(const char* value) { SetEventDescription(value); return *this;}


    /**
     * <p>Additional metadata about the event.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventMetadata() const{ return m_eventMetadata; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline void SetEventMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = value; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline void SetEventMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = std::move(value); }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& WithEventMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetEventMetadata(value); return *this;}

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& WithEventMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetEventMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(const Aws::String& key, const Aws::String& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(Aws::String&& key, const Aws::String& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(const Aws::String& key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(Aws::String&& key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(const char* key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(Aws::String&& key, const char* value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline OrganizationEventDetails& AddEventMetadata(const char* key, const char* value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, value); return *this; }

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
