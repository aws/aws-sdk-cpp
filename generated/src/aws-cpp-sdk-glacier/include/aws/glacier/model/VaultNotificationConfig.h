/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Represents a vault's notification configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/VaultNotificationConfig">AWS
   * API Reference</a></p>
   */
  class VaultNotificationConfig
  {
  public:
    AWS_GLACIER_API VaultNotificationConfig() = default;
    AWS_GLACIER_API VaultNotificationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API VaultNotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetSNSTopic() const { return m_sNSTopic; }
    inline bool SNSTopicHasBeenSet() const { return m_sNSTopicHasBeenSet; }
    template<typename SNSTopicT = Aws::String>
    void SetSNSTopic(SNSTopicT&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = std::forward<SNSTopicT>(value); }
    template<typename SNSTopicT = Aws::String>
    VaultNotificationConfig& WithSNSTopic(SNSTopicT&& value) { SetSNSTopic(std::forward<SNSTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more events for which Amazon S3 Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Aws::String>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Aws::String>>
    VaultNotificationConfig& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = Aws::String>
    VaultNotificationConfig& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sNSTopic;
    bool m_sNSTopicHasBeenSet = false;

    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
