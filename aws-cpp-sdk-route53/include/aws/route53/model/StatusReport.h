/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the health check status for
   * the current observation.</p>
   */
  class AWS_ROUTE53_API StatusReport
  {
  public:
    StatusReport();
    StatusReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatusReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The observed health check status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The observed health check status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The observed health check status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The observed health check status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The observed health check status.</p>
     */
    inline StatusReport& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The observed health check status.</p>
     */
    inline StatusReport& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The observed health check status.</p>
     */
    inline StatusReport& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The date and time the health check status was observed, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCheckedTime() const{ return m_checkedTime; }

    /**
     * <p>The date and time the health check status was observed, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline void SetCheckedTime(const Aws::Utils::DateTime& value) { m_checkedTimeHasBeenSet = true; m_checkedTime = value; }

    /**
     * <p>The date and time the health check status was observed, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline void SetCheckedTime(Aws::Utils::DateTime&& value) { m_checkedTimeHasBeenSet = true; m_checkedTime = value; }

    /**
     * <p>The date and time the health check status was observed, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline StatusReport& WithCheckedTime(const Aws::Utils::DateTime& value) { SetCheckedTime(value); return *this;}

    /**
     * <p>The date and time the health check status was observed, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline StatusReport& WithCheckedTime(Aws::Utils::DateTime&& value) { SetCheckedTime(value); return *this;}

  private:
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_checkedTime;
    bool m_checkedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
