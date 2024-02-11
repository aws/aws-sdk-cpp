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
   * <p>Summary information about the Kinesis data stream</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DestinationSummary">AWS
   * API Reference</a></p>
   */
  class DestinationSummary
  {
  public:
    AWS_CUSTOMERPROFILES_API DestinationSummary();
    AWS_CUSTOMERPROFILES_API DestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API DestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline DestinationSummary& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline DestinationSummary& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline DestinationSummary& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline const EventStreamDestinationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline void SetStatus(const EventStreamDestinationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline void SetStatus(EventStreamDestinationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline DestinationSummary& WithStatus(const EventStreamDestinationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline DestinationSummary& WithStatus(EventStreamDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUnhealthySince() const{ return m_unhealthySince; }

    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline bool UnhealthySinceHasBeenSet() const { return m_unhealthySinceHasBeenSet; }

    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline void SetUnhealthySince(const Aws::Utils::DateTime& value) { m_unhealthySinceHasBeenSet = true; m_unhealthySince = value; }

    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline void SetUnhealthySince(Aws::Utils::DateTime&& value) { m_unhealthySinceHasBeenSet = true; m_unhealthySince = std::move(value); }

    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline DestinationSummary& WithUnhealthySince(const Aws::Utils::DateTime& value) { SetUnhealthySince(value); return *this;}

    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline DestinationSummary& WithUnhealthySince(Aws::Utils::DateTime&& value) { SetUnhealthySince(std::move(value)); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    EventStreamDestinationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_unhealthySince;
    bool m_unhealthySinceHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
