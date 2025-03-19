/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VolumeStatusInfoStatus.h>
#include <aws/ec2/model/VolumeStatusDetails.h>
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
   * <p>Describes the status of a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusInfo">AWS
   * API Reference</a></p>
   */
  class VolumeStatusInfo
  {
  public:
    AWS_EC2_API VolumeStatusInfo() = default;
    AWS_EC2_API VolumeStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The details of the volume status.</p>
     */
    inline const Aws::Vector<VolumeStatusDetails>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<VolumeStatusDetails>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<VolumeStatusDetails>>
    VolumeStatusInfo& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = VolumeStatusDetails>
    VolumeStatusInfo& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the volume.</p>
     */
    inline VolumeStatusInfoStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VolumeStatusInfoStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline VolumeStatusInfo& WithStatus(VolumeStatusInfoStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<VolumeStatusDetails> m_details;
    bool m_detailsHasBeenSet = false;

    VolumeStatusInfoStatus m_status{VolumeStatusInfoStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
