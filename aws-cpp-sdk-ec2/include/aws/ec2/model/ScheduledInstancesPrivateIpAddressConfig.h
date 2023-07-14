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
   * <p>Describes a private IPv4 address for a Scheduled Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesPrivateIpAddressConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstancesPrivateIpAddressConfig
  {
  public:
    ScheduledInstancesPrivateIpAddressConfig();
    ScheduledInstancesPrivateIpAddressConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesPrivateIpAddressConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether this is a primary IPv4 address. Otherwise, this is a
     * secondary IPv4 address.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether this is a primary IPv4 address. Otherwise, this is a
     * secondary IPv4 address.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>Indicates whether this is a primary IPv4 address. Otherwise, this is a
     * secondary IPv4 address.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether this is a primary IPv4 address. Otherwise, this is a
     * secondary IPv4 address.</p>
     */
    inline ScheduledInstancesPrivateIpAddressConfig& WithPrimary(bool value) { SetPrimary(value); return *this;}


    /**
     * <p>The IPv4 address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The IPv4 address.</p>
     */
    inline ScheduledInstancesPrivateIpAddressConfig& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address.</p>
     */
    inline ScheduledInstancesPrivateIpAddressConfig& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address.</p>
     */
    inline ScheduledInstancesPrivateIpAddressConfig& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    bool m_primary;
    bool m_primaryHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
