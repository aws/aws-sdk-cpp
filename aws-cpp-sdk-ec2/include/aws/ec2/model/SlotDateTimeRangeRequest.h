﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the time period for a Scheduled Instance to start its first
   * schedule. The time period must span less than one day.</p>
   */
  class AWS_EC2_API SlotDateTimeRangeRequest
  {
  public:
    SlotDateTimeRangeRequest();
    SlotDateTimeRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    SlotDateTimeRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestTime() const{ return m_earliestTime; }

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline void SetEarliestTime(const Aws::Utils::DateTime& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = value; }

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline void SetEarliestTime(Aws::Utils::DateTime&& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = value; }

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotDateTimeRangeRequest& WithEarliestTime(const Aws::Utils::DateTime& value) { SetEarliestTime(value); return *this;}

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotDateTimeRangeRequest& WithEarliestTime(Aws::Utils::DateTime&& value) { SetEarliestTime(value); return *this;}

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestTime() const{ return m_latestTime; }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline void SetLatestTime(const Aws::Utils::DateTime& value) { m_latestTimeHasBeenSet = true; m_latestTime = value; }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline void SetLatestTime(Aws::Utils::DateTime&& value) { m_latestTimeHasBeenSet = true; m_latestTime = value; }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline SlotDateTimeRangeRequest& WithLatestTime(const Aws::Utils::DateTime& value) { SetLatestTime(value); return *this;}

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline SlotDateTimeRangeRequest& WithLatestTime(Aws::Utils::DateTime&& value) { SetLatestTime(value); return *this;}

  private:
    Aws::Utils::DateTime m_earliestTime;
    bool m_earliestTimeHasBeenSet;
    Aws::Utils::DateTime m_latestTime;
    bool m_latestTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
