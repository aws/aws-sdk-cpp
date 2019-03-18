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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the status that one Amazon Route 53 health
   * checker reports and the time of the health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/StatusReport">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API StatusReport
  {
  public:
    StatusReport();
    StatusReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatusReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline StatusReport& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline StatusReport& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline StatusReport& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCheckedTime() const{ return m_checkedTime; }

    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline bool CheckedTimeHasBeenSet() const { return m_checkedTimeHasBeenSet; }

    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline void SetCheckedTime(const Aws::Utils::DateTime& value) { m_checkedTimeHasBeenSet = true; m_checkedTime = value; }

    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline void SetCheckedTime(Aws::Utils::DateTime&& value) { m_checkedTimeHasBeenSet = true; m_checkedTime = std::move(value); }

    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline StatusReport& WithCheckedTime(const Aws::Utils::DateTime& value) { SetCheckedTime(value); return *this;}

    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline StatusReport& WithCheckedTime(Aws::Utils::DateTime&& value) { SetCheckedTime(std::move(value)); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_checkedTime;
    bool m_checkedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
