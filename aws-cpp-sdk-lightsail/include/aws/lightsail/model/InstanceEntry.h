/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LIGHTSAIL_API InstanceEntry
  {
  public:
    InstanceEntry();
    InstanceEntry(Aws::Utils::Json::JsonView jsonValue);
    InstanceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline const PortInfoSourceType& GetPortInfoSource() const{ return m_portInfoSource; }

    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline bool PortInfoSourceHasBeenSet() const { return m_portInfoSourceHasBeenSet; }

    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline void SetPortInfoSource(const PortInfoSourceType& value) { m_portInfoSourceHasBeenSet = true; m_portInfoSource = value; }

    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline void SetPortInfoSource(PortInfoSourceType&& value) { m_portInfoSourceHasBeenSet = true; m_portInfoSource = std::move(value); }

    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline InstanceEntry& WithPortInfoSource(const PortInfoSourceType& value) { SetPortInfoSource(value); return *this;}

    /**
     * <p>The port configuration to use for the new Amazon EC2 instance.</p> <p>The
     * following configuration options are available:</p> <ul> <li> <p>DEFAULT — Use
     * the default firewall settings from the image.</p> </li> <li> <p>INSTANCE — Use
     * the firewall settings from the source Lightsail instance.</p> </li> <li> <p>NONE
     * — Default to Amazon EC2.</p> </li> <li> <p>CLOSED — All ports closed.</p> </li>
     * </ul>
     */
    inline InstanceEntry& WithPortInfoSource(PortInfoSourceType&& value) { SetPortInfoSource(std::move(value)); return *this;}


    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline InstanceEntry& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
     */
    inline InstanceEntry& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>.</p>
     * </note>
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
    bool m_sourceNameHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    PortInfoSourceType m_portInfoSource;
    bool m_portInfoSourceHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
