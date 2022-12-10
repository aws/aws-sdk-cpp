/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Indicates whether the network was healthy or unhealthy at a particular point.
   * The value is aggregated from the <code>startDate</code> to the
   * <code>endDate</code>. Currently only <code>five_minutes</code> is
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MetricPoint">AWS API
   * Reference</a></p>
   */
  class MetricPoint
  {
  public:
    AWS_EC2_API MetricPoint();
    AWS_EC2_API MetricPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MetricPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline MetricPoint& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start date for the metric point. The starting date for the metric point.
     * The starting time must be formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For
     * example, <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline MetricPoint& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline MetricPoint& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end date for the metric point. The ending time must be formatted as
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline MetricPoint& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    
    inline double GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline MetricPoint& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The status of the metric point.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the metric point.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the metric point.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the metric point.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the metric point.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the metric point.</p>
     */
    inline MetricPoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metric point.</p>
     */
    inline MetricPoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the metric point.</p>
     */
    inline MetricPoint& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
