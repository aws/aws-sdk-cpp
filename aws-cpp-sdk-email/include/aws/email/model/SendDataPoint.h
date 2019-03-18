/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SES_API SendDataPoint
  {
  public:
    SendDataPoint();
    SendDataPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    SendDataPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Time of the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time of the data point.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time of the data point.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time of the data point.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Time of the data point.</p>
     */
    inline SendDataPoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time of the data point.</p>
     */
    inline SendDataPoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>Number of emails that have been sent.</p>
     */
    inline long long GetDeliveryAttempts() const{ return m_deliveryAttempts; }

    /**
     * <p>Number of emails that have been sent.</p>
     */
    inline bool DeliveryAttemptsHasBeenSet() const { return m_deliveryAttemptsHasBeenSet; }

    /**
     * <p>Number of emails that have been sent.</p>
     */
    inline void SetDeliveryAttempts(long long value) { m_deliveryAttemptsHasBeenSet = true; m_deliveryAttempts = value; }

    /**
     * <p>Number of emails that have been sent.</p>
     */
    inline SendDataPoint& WithDeliveryAttempts(long long value) { SetDeliveryAttempts(value); return *this;}


    /**
     * <p>Number of emails that have bounced.</p>
     */
    inline long long GetBounces() const{ return m_bounces; }

    /**
     * <p>Number of emails that have bounced.</p>
     */
    inline bool BouncesHasBeenSet() const { return m_bouncesHasBeenSet; }

    /**
     * <p>Number of emails that have bounced.</p>
     */
    inline void SetBounces(long long value) { m_bouncesHasBeenSet = true; m_bounces = value; }

    /**
     * <p>Number of emails that have bounced.</p>
     */
    inline SendDataPoint& WithBounces(long long value) { SetBounces(value); return *this;}


    /**
     * <p>Number of unwanted emails that were rejected by recipients.</p>
     */
    inline long long GetComplaints() const{ return m_complaints; }

    /**
     * <p>Number of unwanted emails that were rejected by recipients.</p>
     */
    inline bool ComplaintsHasBeenSet() const { return m_complaintsHasBeenSet; }

    /**
     * <p>Number of unwanted emails that were rejected by recipients.</p>
     */
    inline void SetComplaints(long long value) { m_complaintsHasBeenSet = true; m_complaints = value; }

    /**
     * <p>Number of unwanted emails that were rejected by recipients.</p>
     */
    inline SendDataPoint& WithComplaints(long long value) { SetComplaints(value); return *this;}


    /**
     * <p>Number of emails rejected by Amazon SES.</p>
     */
    inline long long GetRejects() const{ return m_rejects; }

    /**
     * <p>Number of emails rejected by Amazon SES.</p>
     */
    inline bool RejectsHasBeenSet() const { return m_rejectsHasBeenSet; }

    /**
     * <p>Number of emails rejected by Amazon SES.</p>
     */
    inline void SetRejects(long long value) { m_rejectsHasBeenSet = true; m_rejects = value; }

    /**
     * <p>Number of emails rejected by Amazon SES.</p>
     */
    inline SendDataPoint& WithRejects(long long value) { SetRejects(value); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    long long m_deliveryAttempts;
    bool m_deliveryAttemptsHasBeenSet;

    long long m_bounces;
    bool m_bouncesHasBeenSet;

    long long m_complaints;
    bool m_complaintsHasBeenSet;

    long long m_rejects;
    bool m_rejectsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
