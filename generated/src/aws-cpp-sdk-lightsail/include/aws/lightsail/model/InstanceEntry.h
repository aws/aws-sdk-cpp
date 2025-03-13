/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/PortInfoSourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the Amazon Elastic Compute Cloud instance and related resources to
   * be created using the <code>create cloud formation stack</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceEntry">AWS
   * API Reference</a></p>
   */
  class InstanceEntry
  {
  public:
    AWS_LIGHTSAIL_API InstanceEntry() = default;
    AWS_LIGHTSAIL_API InstanceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    InstanceEntry& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type (<code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceEntry& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>
     * <code>DEFAULT</code> - Use the default firewall settings from the Lightsail
     * instance blueprint. If this is specified, then IPv4 and IPv6 will be configured
     * for the new instance that is created in Amazon EC2.</p> </li> <li> <p>
     * <code>INSTANCE</code> - Use the configured firewall settings from the source
     * Lightsail instance. If this is specified, the new instance that is created in
     * Amazon EC2 will be configured to match the configuration of the source Lightsail
     * instance. For example, if the source instance is configured for dual-stack (IPv4
     * and IPv6), then IPv4 and IPv6 will be configured for the new instance that is
     * created in Amazon EC2. If the source instance is configured for IPv4 only, then
     * only IPv4 will be configured for the new instance that is created in Amazon
     * EC2.</p> </li> <li> <p> <code>NONE</code> - Use the default Amazon EC2 security
     * group. If this is specified, then only IPv4 will be configured for the new
     * instance that is created in Amazon EC2.</p> </li> <li> <p> <code>CLOSED</code> -
     * All ports closed. If this is specified, then only IPv4 will be configured for
     * the new instance that is created in Amazon EC2.</p> </li> </ul>  <p>If you
     * configured <code>lightsail-connect</code> as a <code>cidrListAliases</code> on
     * your instance, or if you chose to allow the Lightsail browser-based SSH or RDP
     * clients to connect to your instance, that configuration is not carried over to
     * your new Amazon EC2 instance.</p> 
     */
    inline PortInfoSourceType GetPortInfoSource() const { return m_portInfoSource; }
    inline bool PortInfoSourceHasBeenSet() const { return m_portInfoSourceHasBeenSet; }
    inline void SetPortInfoSource(PortInfoSourceType value) { m_portInfoSourceHasBeenSet = true; m_portInfoSource = value; }
    inline InstanceEntry& WithPortInfoSource(PortInfoSourceType value) { SetPortInfoSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    InstanceEntry& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    InstanceEntry& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    PortInfoSourceType m_portInfoSource{PortInfoSourceType::NOT_SET};
    bool m_portInfoSourceHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
