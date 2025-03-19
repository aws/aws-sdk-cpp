/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Represents sending statistics data. Each <code>SendDataPoint</code> contains
   * statistics for a 15-minute period of sending activity. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendDataPoint">AWS
   * API Reference</a></p>
   */
  class SendDataPoint
  {
  public:
    AWS_SES_API SendDataPoint() = default;
    AWS_SES_API SendDataPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API SendDataPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Time of the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    SendDataPoint& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of emails that have been sent.</p>
     */
    inline long long GetDeliveryAttempts() const { return m_deliveryAttempts; }
    inline bool DeliveryAttemptsHasBeenSet() const { return m_deliveryAttemptsHasBeenSet; }
    inline void SetDeliveryAttempts(long long value) { m_deliveryAttemptsHasBeenSet = true; m_deliveryAttempts = value; }
    inline SendDataPoint& WithDeliveryAttempts(long long value) { SetDeliveryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of emails that have bounced.</p>
     */
    inline long long GetBounces() const { return m_bounces; }
    inline bool BouncesHasBeenSet() const { return m_bouncesHasBeenSet; }
    inline void SetBounces(long long value) { m_bouncesHasBeenSet = true; m_bounces = value; }
    inline SendDataPoint& WithBounces(long long value) { SetBounces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of unwanted emails that were rejected by recipients.</p>
     */
    inline long long GetComplaints() const { return m_complaints; }
    inline bool ComplaintsHasBeenSet() const { return m_complaintsHasBeenSet; }
    inline void SetComplaints(long long value) { m_complaintsHasBeenSet = true; m_complaints = value; }
    inline SendDataPoint& WithComplaints(long long value) { SetComplaints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of emails rejected by Amazon SES.</p>
     */
    inline long long GetRejects() const { return m_rejects; }
    inline bool RejectsHasBeenSet() const { return m_rejectsHasBeenSet; }
    inline void SetRejects(long long value) { m_rejectsHasBeenSet = true; m_rejects = value; }
    inline SendDataPoint& WithRejects(long long value) { SetRejects(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    long long m_deliveryAttempts{0};
    bool m_deliveryAttemptsHasBeenSet = false;

    long long m_bounces{0};
    bool m_bouncesHasBeenSet = false;

    long long m_complaints{0};
    bool m_complaintsHasBeenSet = false;

    long long m_rejects{0};
    bool m_rejectsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
