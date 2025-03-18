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
   * <p>Information about your commitment for a future-dated Capacity
   * Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationCommitmentInfo">AWS
   * API Reference</a></p>
   */
  class CapacityReservationCommitmentInfo
  {
  public:
    AWS_EC2_API CapacityReservationCommitmentInfo() = default;
    AWS_EC2_API CapacityReservationCommitmentInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationCommitmentInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance capacity that you committed to when you requested the
     * future-dated Capacity Reservation.</p>
     */
    inline int GetCommittedInstanceCount() const { return m_committedInstanceCount; }
    inline bool CommittedInstanceCountHasBeenSet() const { return m_committedInstanceCountHasBeenSet; }
    inline void SetCommittedInstanceCount(int value) { m_committedInstanceCountHasBeenSet = true; m_committedInstanceCount = value; }
    inline CapacityReservationCommitmentInfo& WithCommittedInstanceCount(int value) { SetCommittedInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the commitment duration expires, in the ISO8601
     * format in the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>). You can't
     * decrease the instance count or cancel the Capacity Reservation before this date
     * and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentEndDate() const { return m_commitmentEndDate; }
    inline bool CommitmentEndDateHasBeenSet() const { return m_commitmentEndDateHasBeenSet; }
    template<typename CommitmentEndDateT = Aws::Utils::DateTime>
    void SetCommitmentEndDate(CommitmentEndDateT&& value) { m_commitmentEndDateHasBeenSet = true; m_commitmentEndDate = std::forward<CommitmentEndDateT>(value); }
    template<typename CommitmentEndDateT = Aws::Utils::DateTime>
    CapacityReservationCommitmentInfo& WithCommitmentEndDate(CommitmentEndDateT&& value) { SetCommitmentEndDate(std::forward<CommitmentEndDateT>(value)); return *this;}
    ///@}
  private:

    int m_committedInstanceCount{0};
    bool m_committedInstanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_commitmentEndDate{};
    bool m_commitmentEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
