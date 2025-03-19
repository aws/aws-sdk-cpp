/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SummaryStatus.h>
#include <aws/ec2/model/EbsStatusDetails.h>
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
   * <p>Provides a summary of the attached EBS volume status for an
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsStatusSummary">AWS
   * API Reference</a></p>
   */
  class EbsStatusSummary
  {
  public:
    AWS_EC2_API EbsStatusSummary() = default;
    AWS_EC2_API EbsStatusSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsStatusSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Details about the attached EBS status check for an instance.</p>
     */
    inline const Aws::Vector<EbsStatusDetails>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<EbsStatusDetails>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<EbsStatusDetails>>
    EbsStatusSummary& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = EbsStatusDetails>
    EbsStatusSummary& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status.</p>
     */
    inline SummaryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SummaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EbsStatusSummary& WithStatus(SummaryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<EbsStatusDetails> m_details;
    bool m_detailsHasBeenSet = false;

    SummaryStatus m_status{SummaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
