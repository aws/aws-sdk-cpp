/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * schedule. The time period must span less than one day.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SlotDateTimeRangeRequest">AWS
   * API Reference</a></p>
   */
  class SlotDateTimeRangeRequest
  {
  public:
    AWS_EC2_API SlotDateTimeRangeRequest() = default;
    AWS_EC2_API SlotDateTimeRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SlotDateTimeRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestTime() const { return m_earliestTime; }
    inline bool EarliestTimeHasBeenSet() const { return m_earliestTimeHasBeenSet; }
    template<typename EarliestTimeT = Aws::Utils::DateTime>
    void SetEarliestTime(EarliestTimeT&& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = std::forward<EarliestTimeT>(value); }
    template<typename EarliestTimeT = Aws::Utils::DateTime>
    SlotDateTimeRangeRequest& WithEarliestTime(EarliestTimeT&& value) { SetEarliestTime(std::forward<EarliestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest date and time, in UTC, for the Scheduled Instance to start. This
     * value must be later than or equal to the earliest date and at most three months
     * in the future.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestTime() const { return m_latestTime; }
    inline bool LatestTimeHasBeenSet() const { return m_latestTimeHasBeenSet; }
    template<typename LatestTimeT = Aws::Utils::DateTime>
    void SetLatestTime(LatestTimeT&& value) { m_latestTimeHasBeenSet = true; m_latestTime = std::forward<LatestTimeT>(value); }
    template<typename LatestTimeT = Aws::Utils::DateTime>
    SlotDateTimeRangeRequest& WithLatestTime(LatestTimeT&& value) { SetLatestTime(std::forward<LatestTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_earliestTime{};
    bool m_earliestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestTime{};
    bool m_latestTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
