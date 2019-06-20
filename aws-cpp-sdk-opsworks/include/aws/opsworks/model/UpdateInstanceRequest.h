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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/opsworks/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API UpdateInstanceRequest : public OpsWorksRequest
  {
  public:
    UpdateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline UpdateInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline UpdateInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline UpdateInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance's layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline UpdateInstanceRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline UpdateInstanceRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline UpdateInstanceRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline UpdateInstanceRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance's layer IDs.</p>
     */
    inline UpdateInstanceRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }


    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline UpdateInstanceRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline UpdateInstanceRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline UpdateInstanceRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline const AutoScalingType& GetAutoScalingType() const{ return m_autoScalingType; }

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline void SetAutoScalingType(const AutoScalingType& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline void SetAutoScalingType(AutoScalingType&& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = std::move(value); }

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline UpdateInstanceRequest& WithAutoScalingType(const AutoScalingType& value) { SetAutoScalingType(value); return *this;}

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline UpdateInstanceRequest& WithAutoScalingType(AutoScalingType&& value) { SetAutoScalingType(std::move(value)); return *this;}


    /**
     * <p>The instance host name.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The instance host name.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The instance host name.</p>
     */
    inline UpdateInstanceRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline UpdateInstanceRequest& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline UpdateInstanceRequest& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline const Aws::String& GetOs() const{ return m_os; }

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = std::move(value); }

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline UpdateInstanceRequest& WithOs(const Aws::String& value) { SetOs(value); return *this;}

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline UpdateInstanceRequest& WithOs(Aws::String&& value) { SetOs(std::move(value)); return *this;}

    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>, <code>Amazon Linux
     * 2017.03</code>, <code>Amazon Linux 2016.09</code>, <code>Amazon Linux
     * 2016.03</code>, <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux
     * 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu operating system, such as
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>For more information about supported operating
     * systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>. For more information about how to use custom AMIs with OpsWorks,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> </note>
     */
    inline UpdateInstanceRequest& WithOs(const char* value) { SetOs(value); return *this;}


    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline UpdateInstanceRequest& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline UpdateInstanceRequest& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline UpdateInstanceRequest& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline UpdateInstanceRequest& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline UpdateInstanceRequest& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}

    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline UpdateInstanceRequest& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}


    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline UpdateInstanceRequest& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline UpdateInstanceRequest& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline UpdateInstanceRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}


    /**
     * <p>This property cannot be updated.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>This property cannot be updated.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>This property cannot be updated.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>This property cannot be updated.</p>
     */
    inline UpdateInstanceRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline UpdateInstanceRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline UpdateInstanceRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * instance.</p> </li> </ul> <p>The default setting is <code>INHERIT</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to
     * Chef 12.2.</p>
     */
    inline UpdateInstanceRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    AutoScalingType m_autoScalingType;
    bool m_autoScalingTypeHasBeenSet;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;

    Aws::String m_os;
    bool m_osHasBeenSet;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet;

    Architecture m_architecture;
    bool m_architectureHasBeenSet;

    bool m_installUpdatesOnBoot;
    bool m_installUpdatesOnBootHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
