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
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the time period for a Scheduled Instance to start its first
   * schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SlotStartTimeRangeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SlotStartTimeRangeRequest
  {
  public:
    SlotStartTimeRangeRequest();
    SlotStartTimeRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    SlotStartTimeRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline void SetEarliestTime(Aws::Utils::DateTime&& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = std::move(value); }

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotStartTimeRangeRequest& WithEarliestTime(const Aws::Utils::DateTime& value) { SetEarliestTime(value); return *this;}

    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotStartTimeRangeRequest& WithEarliestTime(Aws::Utils::DateTime&& value) { SetEarliestTime(std::move(value)); return *this;}


    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestTime() const{ return m_latestTime; }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline void SetLatestTime(const Aws::Utils::DateTime& value) { m_latestTimeHasBeenSet = true; m_latestTime = value; }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline void SetLatestTime(Aws::Utils::DateTime&& value) { m_latestTimeHasBeenSet = true; m_latestTime = std::move(value); }

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotStartTimeRangeRequest& WithLatestTime(const Aws::Utils::DateTime& value) { SetLatestTime(value); return *this;}

    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline SlotStartTimeRangeRequest& WithLatestTime(Aws::Utils::DateTime&& value) { SetLatestTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_earliestTime;
    bool m_earliestTimeHasBeenSet;

    Aws::Utils::DateTime m_latestTime;
    bool m_latestTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
