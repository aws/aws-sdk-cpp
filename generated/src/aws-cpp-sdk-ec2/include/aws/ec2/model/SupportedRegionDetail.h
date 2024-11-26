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
    AWS_EC2_API SupportedRegionDetail();
    AWS_EC2_API SupportedRegionDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SupportedRegionDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Region code.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SupportedRegionDetail& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SupportedRegionDetail& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SupportedRegionDetail& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service state. The possible values are <code>Pending</code>,
     * <code>Available</code>, <code>Deleting</code>, <code>Deleted</code>,
     * <code>Failed</code>, and <code>Closed</code>.</p>
     */
    inline const Aws::String& GetServiceState() const{ return m_serviceState; }
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }
    inline void SetServiceState(const Aws::String& value) { m_serviceStateHasBeenSet = true; m_serviceState = value; }
    inline void SetServiceState(Aws::String&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::move(value); }
    inline void SetServiceState(const char* value) { m_serviceStateHasBeenSet = true; m_serviceState.assign(value); }
    inline SupportedRegionDetail& WithServiceState(const Aws::String& value) { SetServiceState(value); return *this;}
    inline SupportedRegionDetail& WithServiceState(Aws::String&& value) { SetServiceState(std::move(value)); return *this;}
    inline SupportedRegionDetail& WithServiceState(const char* value) { SetServiceState(value); return *this;}
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
