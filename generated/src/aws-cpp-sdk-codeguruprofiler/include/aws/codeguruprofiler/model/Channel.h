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
    AWS_CODEGURUPROFILER_API Channel() = default;
    AWS_CODEGURUPROFILER_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of publishers for different type of events that may be detected in an
     * application from the profile. Anomaly detection is the only event publisher in
     * Profiler.</p>
     */
    inline const Aws::Vector<EventPublisher>& GetEventPublishers() const { return m_eventPublishers; }
    inline bool EventPublishersHasBeenSet() const { return m_eventPublishersHasBeenSet; }
    template<typename EventPublishersT = Aws::Vector<EventPublisher>>
    void SetEventPublishers(EventPublishersT&& value) { m_eventPublishersHasBeenSet = true; m_eventPublishers = std::forward<EventPublishersT>(value); }
    template<typename EventPublishersT = Aws::Vector<EventPublisher>>
    Channel& WithEventPublishers(EventPublishersT&& value) { SetEventPublishers(std::forward<EventPublishersT>(value)); return *this;}
    inline Channel& AddEventPublishers(EventPublisher value) { m_eventPublishersHasBeenSet = true; m_eventPublishers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique identifier for each <code>Channel</code> in the notification
     * configuration of a Profiling Group. A random UUID for channelId is used when
     * adding a channel to the notification configuration if not specified in the
     * request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Channel& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique arn of the resource to be used for notifications. We support a valid
     * SNS topic arn as a channel uri.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    Channel& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}
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
