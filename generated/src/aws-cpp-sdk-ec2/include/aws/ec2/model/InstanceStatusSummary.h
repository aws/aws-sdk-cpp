/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SummaryStatus.h>
#include <aws/ec2/model/InstanceStatusDetails.h>
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
   * <p>Describes the status of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatusSummary">AWS
   * API Reference</a></p>
   */
  class InstanceStatusSummary
  {
  public:
    AWS_EC2_API InstanceStatusSummary() = default;
    AWS_EC2_API InstanceStatusSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatusSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline const Aws::Vector<InstanceStatusDetails>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<InstanceStatusDetails>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<InstanceStatusDetails>>
    InstanceStatusSummary& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = InstanceStatusDetails>
    InstanceStatusSummary& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline SummaryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SummaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceStatusSummary& WithStatus(SummaryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStatusDetails> m_details;
    bool m_detailsHasBeenSet = false;

    SummaryStatus m_status{SummaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
