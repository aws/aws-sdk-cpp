/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VolumeStatusName.h>
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
   * <p>Describes a volume status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusDetails">AWS
   * API Reference</a></p>
   */
  class VolumeStatusDetails
  {
  public:
    AWS_EC2_API VolumeStatusDetails() = default;
    AWS_EC2_API VolumeStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the volume status.</p> <ul> <li> <p> <code>io-enabled</code> -
     * Indicates the volume I/O status. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/monitoring-volume-checks.html">Amazon
     * EBS volume status checks</a>.</p> </li> <li> <p> <code>io-performance</code> -
     * Indicates the volume performance status. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/monitoring-volume-checks.html">Amazon
     * EBS volume status checks</a>.</p> </li> <li> <p>
     * <code>initialization-state</code> - Indicates the status of the volume
     * initialization process. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">Initialize
     * Amazon EBS volumes</a>.</p> </li> </ul>
     */
    inline VolumeStatusName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(VolumeStatusName value) { m_nameHasBeenSet = true; m_name = value; }
    inline VolumeStatusDetails& WithName(VolumeStatusName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended status of the volume status.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    VolumeStatusDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    VolumeStatusName m_name{VolumeStatusName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
