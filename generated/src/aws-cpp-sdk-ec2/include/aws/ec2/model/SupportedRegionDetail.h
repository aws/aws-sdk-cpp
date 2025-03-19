/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes a supported Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SupportedRegionDetail">AWS
   * API Reference</a></p>
   */
  class SupportedRegionDetail
  {
  public:
    AWS_EC2_API SupportedRegionDetail() = default;
    AWS_EC2_API SupportedRegionDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SupportedRegionDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Region code.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    SupportedRegionDetail& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service state. The possible values are <code>Pending</code>,
     * <code>Available</code>, <code>Deleting</code>, <code>Deleted</code>,
     * <code>Failed</code>, and <code>Closed</code>.</p>
     */
    inline const Aws::String& GetServiceState() const { return m_serviceState; }
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }
    template<typename ServiceStateT = Aws::String>
    void SetServiceState(ServiceStateT&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::forward<ServiceStateT>(value); }
    template<typename ServiceStateT = Aws::String>
    SupportedRegionDetail& WithServiceState(ServiceStateT&& value) { SetServiceState(std::forward<ServiceStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_serviceState;
    bool m_serviceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
