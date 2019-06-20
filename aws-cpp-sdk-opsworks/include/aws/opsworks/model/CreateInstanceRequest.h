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
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API CreateInstanceRequest : public OpsWorksRequest
  {
  public:
    CreateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline CreateInstanceRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline CreateInstanceRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline CreateInstanceRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline CreateInstanceRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline CreateInstanceRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline CreateInstanceRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline CreateInstanceRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline CreateInstanceRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }


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
    inline CreateInstanceRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

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
    inline CreateInstanceRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

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
    inline CreateInstanceRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline CreateInstanceRequest& WithAutoScalingType(const AutoScalingType& value) { SetAutoScalingType(value); return *this;}

    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline CreateInstanceRequest& WithAutoScalingType(AutoScalingType&& value) { SetAutoScalingType(std::move(value)); return *this;}


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
    inline CreateInstanceRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline CreateInstanceRequest& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline CreateInstanceRequest& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline const Aws::String& GetOs() const{ return m_os; }

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = std::move(value); }

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline CreateInstanceRequest& WithOs(const Aws::String& value) { SetOs(value); return *this;}

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline CreateInstanceRequest& WithOs(Aws::String&& value) { SetOs(std::move(value)); return *this;}

    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 16.04 LTS</code>,
     * <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li>
     * <p> <code>CentOS Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise
     * Linux 7</code> </p> </li> <li> <p>A supported Windows operating system, such as
     * <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows Server
     * 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows Server 2012
     * R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>.</p> </li> </ul> <p>For more information about the supported
     * operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p> <p>The default option is the current
     * Amazon Linux version. If you set this parameter to <code>Custom</code>, you must
     * use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about supported operating systems, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating
     * Systems</a>For more information about how to use custom AMIs with AWS OpsWorks
     * Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline CreateInstanceRequest& WithOs(const char* value) { SetOs(value); return *this;}


    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline CreateInstanceRequest& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline CreateInstanceRequest& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> <note> <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> </note>
     */
    inline CreateInstanceRequest& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline CreateInstanceRequest& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline CreateInstanceRequest& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline CreateInstanceRequest& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}


    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CreateInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CreateInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CreateInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline CreateInstanceRequest& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline CreateInstanceRequest& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(std::move(value)); return *this;}

    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline CreateInstanceRequest& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}


    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline CreateInstanceRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline CreateInstanceRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * AWS OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline CreateInstanceRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline CreateInstanceRequest& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline CreateInstanceRequest& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }

    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }

    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetRootDeviceType(const RootDeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }

    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetRootDeviceType(RootDeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }

    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline CreateInstanceRequest& WithRootDeviceType(const RootDeviceType& value) { SetRootDeviceType(value); return *this;}

    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline CreateInstanceRequest& WithRootDeviceType(RootDeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}


    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline CreateInstanceRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline CreateInstanceRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline CreateInstanceRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline CreateInstanceRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code> to ensure that your instances have the latest security
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
     * <code>true</code> to ensure that your instances have the latest security
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
     * <code>true</code> to ensure that your instances have the latest security
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
     * <code>true</code> to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline CreateInstanceRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}


    /**
     * <p>Whether to create an Amazon EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Whether to create an Amazon EBS-optimized instance.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Whether to create an Amazon EBS-optimized instance.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Whether to create an Amazon EBS-optimized instance.</p>
     */
    inline CreateInstanceRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline CreateInstanceRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline CreateInstanceRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version. AWS
     * OpsWorks Stacks then automatically installs that version on the instance.</p>
     * </li> </ul> <p>The default setting is <code>INHERIT</code>. To specify an agent
     * version, you must use the complete version number, not the abbreviated number
     * shown on the console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline CreateInstanceRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline const Aws::String& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline void SetTenancy(const Aws::String& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline void SetTenancy(Aws::String&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline void SetTenancy(const char* value) { m_tenancyHasBeenSet = true; m_tenancy.assign(value); }

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline CreateInstanceRequest& WithTenancy(const Aws::String& value) { SetTenancy(value); return *this;}

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline CreateInstanceRequest& WithTenancy(Aws::String&& value) { SetTenancy(std::move(value)); return *this;}

    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline CreateInstanceRequest& WithTenancy(const char* value) { SetTenancy(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

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

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Architecture m_architecture;
    bool m_architectureHasBeenSet;

    RootDeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    bool m_installUpdatesOnBoot;
    bool m_installUpdatesOnBootHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
