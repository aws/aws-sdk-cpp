/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EventStreamDestinationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Details of the destination being used for the EventStream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventStreamDestinationDetails">AWS
   * API Reference</a></p>
   */
  class EventStreamDestinationDetails
  {
  public:
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails() = default;
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    EventStreamDestinationDetails& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline EventStreamDestinationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EventStreamDestinationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EventStreamDestinationDetails& WithStatus(EventStreamDestinationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUnhealthySince() const { return m_unhealthySince; }
    inline bool UnhealthySinceHasBeenSet() const { return m_unhealthySinceHasBeenSet; }
    template<typename UnhealthySinceT = Aws::Utils::DateTime>
    void SetUnhealthySince(UnhealthySinceT&& value) { m_unhealthySinceHasBeenSet = true; m_unhealthySince = std::forward<UnhealthySinceT>(value); }
    template<typename UnhealthySinceT = Aws::Utils::DateTime>
    EventStreamDestinationDetails& WithUnhealthySince(UnhealthySinceT&& value) { SetUnhealthySince(std::forward<UnhealthySinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable string that corresponds to the error or success while
     * enabling the streaming destination.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EventStreamDestinationDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    EventStreamDestinationStatus m_status{EventStreamDestinationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_unhealthySince{};
    bool m_unhealthySinceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
