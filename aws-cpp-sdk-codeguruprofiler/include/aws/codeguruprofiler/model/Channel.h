/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/EventPublisher.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>Notification medium for users to get alerted for events that occur in
   * application profile. We support SNS topic as a notification
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_CODEGURUPROFILER_API Channel();
    AWS_CODEGURUPROFILER_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline const Aws::Vector<EventPublisher>& GetEventPublishers() const{ return m_eventPublishers; }

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline bool EventPublishersHasBeenSet() const { return m_eventPublishersHasBeenSet; }

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline void SetEventPublishers(const Aws::Vector<EventPublisher>& value) { m_eventPublishersHasBeenSet = true; m_eventPublishers = value; }

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline void SetEventPublishers(Aws::Vector<EventPublisher>&& value) { m_eventPublishersHasBeenSet = true; m_eventPublishers = std::move(value); }

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline Channel& WithEventPublishers(const Aws::Vector<EventPublisher>& value) { SetEventPublishers(value); return *this;}

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline Channel& WithEventPublishers(Aws::Vector<EventPublisher>&& value) { SetEventPublishers(std::move(value)); return *this;}

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline Channel& AddEventPublishers(const EventPublisher& value) { m_eventPublishersHasBeenSet = true; m_eventPublishers.push_back(value); return *this; }

    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline Channel& AddEventPublishers(EventPublisher&& value) { m_eventPublishersHasBeenSet = true; m_eventPublishers.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline Channel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline Channel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline Channel& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline Channel& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline Channel& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline Channel& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::Vector<EventPublisher> m_eventPublishers;
    bool m_eventPublishersHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
