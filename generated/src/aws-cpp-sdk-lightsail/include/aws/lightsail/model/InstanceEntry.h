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
    AWS_LIGHTSAIL_API InstanceEntry();
    AWS_LIGHTSAIL_API InstanceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline InstanceEntry& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline InstanceEntry& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the export snapshot record, which contains the exported Lightsail
     * instance snapshot that will be used as the source of the new Amazon EC2
     * instance.</p> <p>Use the <code>get export snapshot records</code> operation to
     * get a list of export snapshot records that you can use to create a
     * CloudFormation stack.</p>
     */
    inline InstanceEntry& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline InstanceEntry& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline InstanceEntry& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type (e.g., <code>t2.micro</code>) to use for the new Amazon EC2
     * instance.</p>
     */
    inline InstanceEntry& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline const PortInfoSourceType& GetPortInfoSource() const{ return m_portInfoSource; }

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
    inline bool PortInfoSourceHasBeenSet() const { return m_portInfoSourceHasBeenSet; }

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
    inline void SetPortInfoSource(const PortInfoSourceType& value) { m_portInfoSourceHasBeenSet = true; m_portInfoSource = value; }

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
    inline void SetPortInfoSource(PortInfoSourceType&& value) { m_portInfoSourceHasBeenSet = true; m_portInfoSource = std::move(value); }

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
    inline InstanceEntry& WithPortInfoSource(const PortInfoSourceType& value) { SetPortInfoSource(value); return *this;}

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
    inline InstanceEntry& WithPortInfoSource(PortInfoSourceType&& value) { SetPortInfoSource(std::move(value)); return *this;}


    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline InstanceEntry& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline InstanceEntry& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * 
     */
    inline InstanceEntry& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline InstanceEntry& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline InstanceEntry& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the new Amazon EC2 instance.</p>
     */
    inline InstanceEntry& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

  private:

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    PortInfoSourceType m_portInfoSource;
    bool m_portInfoSourceHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
