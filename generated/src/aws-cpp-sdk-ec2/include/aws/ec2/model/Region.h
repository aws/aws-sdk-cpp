﻿/**
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
   * <p>Describes a Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Region">AWS API
   * Reference</a></p>
   */
  class Region
  {
  public:
    AWS_EC2_API Region();
    AWS_EC2_API Region(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Region& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Region opt-in status. The possible values are
     * <code>opt-in-not-required</code>, <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }
    inline Region& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}
    inline Region& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}
    inline Region& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline Region& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline Region& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline Region& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region service endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Region& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Region& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Region& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
