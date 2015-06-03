/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /*
  */
  class AWS_OPSWORKS_API UpdateInstanceRequest : public OpsWorksRequest
  {
  public:
    UpdateInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The instance ID.</p>
    */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    /*
     <p>The instance ID.</p>
    */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /*
     <p>The instance ID.</p>
    */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /*
     <p>The instance ID.</p>
    */
    inline UpdateInstanceRequest&  WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /*
     <p>The instance ID.</p>
    */
    inline UpdateInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /*
     <p>The instance's layer IDs.</p>
    */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }
    /*
     <p>The instance's layer IDs.</p>
    */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /*
     <p>The instance's layer IDs.</p>
    */
    inline UpdateInstanceRequest&  WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /*
     <p>The instance's layer IDs.</p>
    */
    inline UpdateInstanceRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /*
     <p>The instance's layer IDs.</p>
    */
    inline UpdateInstanceRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /*
     <p>The instance type. AWS OpsWorks supports all instance types except Cluster Compute, Cluster GPU, and High Memory Cluster. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>. The parameter values that you use to specify the various types are in the API Name column of the Available Instance Types table.</p>
    */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    /*
     <p>The instance type. AWS OpsWorks supports all instance types except Cluster Compute, Cluster GPU, and High Memory Cluster. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>. The parameter values that you use to specify the various types are in the API Name column of the Available Instance Types table.</p>
    */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /*
     <p>The instance type. AWS OpsWorks supports all instance types except Cluster Compute, Cluster GPU, and High Memory Cluster. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>. The parameter values that you use to specify the various types are in the API Name column of the Available Instance Types table.</p>
    */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /*
     <p>The instance type. AWS OpsWorks supports all instance types except Cluster Compute, Cluster GPU, and High Memory Cluster. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>. The parameter values that you use to specify the various types are in the API Name column of the Available Instance Types table.</p>
    */
    inline UpdateInstanceRequest&  WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /*
     <p>The instance type. AWS OpsWorks supports all instance types except Cluster Compute, Cluster GPU, and High Memory Cluster. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>. The parameter values that you use to specify the various types are in the API Name column of the Available Instance Types table.</p>
    */
    inline UpdateInstanceRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /*
     <p>For load-based or time-based instances, the type. Windows stacks can use only time-based instances.</p>
    */
    inline const AutoScalingType& GetAutoScalingType() const{ return m_autoScalingType; }
    /*
     <p>For load-based or time-based instances, the type. Windows stacks can use only time-based instances.</p>
    */
    inline void SetAutoScalingType(const AutoScalingType& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }

    /*
     <p>For load-based or time-based instances, the type. Windows stacks can use only time-based instances.</p>
    */
    inline UpdateInstanceRequest&  WithAutoScalingType(const AutoScalingType& value) { SetAutoScalingType(value); return *this;}

    /*
     <p>The instance host name.</p>
    */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    /*
     <p>The instance host name.</p>
    */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /*
     <p>The instance host name.</p>
    */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /*
     <p>The instance host name.</p>
    */
    inline UpdateInstanceRequest&  WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /*
     <p>The instance host name.</p>
    */
    inline UpdateInstanceRequest& WithHostname(const char* value) { SetHostname(value); return *this;}

    /*
     <p>The instance's operating system, which must be set to one of the following.</p> <p>For Windows stacks: Microsoft Windows Server 2012 R2.</p> <p>For Linux stacks:</p> <ul> <li>Standard operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom AMIs: <code>Custom</code> </li> </ul> <p>The default option is the current Amazon Linux version. If you set this parameter to <code>Custom</code>, you must use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI that you want to use. For more information on the standard operating systems, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating Systems</a>For more information on how to use custom AMIs with OpsWorks, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using Custom AMIs</a>.</p>
    */
    inline const Aws::String& GetOs() const{ return m_os; }
    /*
     <p>The instance's operating system, which must be set to one of the following.</p> <p>For Windows stacks: Microsoft Windows Server 2012 R2.</p> <p>For Linux stacks:</p> <ul> <li>Standard operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom AMIs: <code>Custom</code> </li> </ul> <p>The default option is the current Amazon Linux version. If you set this parameter to <code>Custom</code>, you must use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI that you want to use. For more information on the standard operating systems, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating Systems</a>For more information on how to use custom AMIs with OpsWorks, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using Custom AMIs</a>.</p>
    */
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }

    /*
     <p>The instance's operating system, which must be set to one of the following.</p> <p>For Windows stacks: Microsoft Windows Server 2012 R2.</p> <p>For Linux stacks:</p> <ul> <li>Standard operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom AMIs: <code>Custom</code> </li> </ul> <p>The default option is the current Amazon Linux version. If you set this parameter to <code>Custom</code>, you must use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI that you want to use. For more information on the standard operating systems, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating Systems</a>For more information on how to use custom AMIs with OpsWorks, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using Custom AMIs</a>.</p>
    */
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }

    /*
     <p>The instance's operating system, which must be set to one of the following.</p> <p>For Windows stacks: Microsoft Windows Server 2012 R2.</p> <p>For Linux stacks:</p> <ul> <li>Standard operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom AMIs: <code>Custom</code> </li> </ul> <p>The default option is the current Amazon Linux version. If you set this parameter to <code>Custom</code>, you must use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI that you want to use. For more information on the standard operating systems, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating Systems</a>For more information on how to use custom AMIs with OpsWorks, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using Custom AMIs</a>.</p>
    */
    inline UpdateInstanceRequest&  WithOs(const Aws::String& value) { SetOs(value); return *this;}

    /*
     <p>The instance's operating system, which must be set to one of the following.</p> <p>For Windows stacks: Microsoft Windows Server 2012 R2.</p> <p>For Linux stacks:</p> <ul> <li>Standard operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom AMIs: <code>Custom</code> </li> </ul> <p>The default option is the current Amazon Linux version. If you set this parameter to <code>Custom</code>, you must use the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI that you want to use. For more information on the standard operating systems, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">Operating Systems</a>For more information on how to use custom AMIs with OpsWorks, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using Custom AMIs</a>.</p>
    */
    inline UpdateInstanceRequest& WithOs(const char* value) { SetOs(value); return *this;}

    /*
     <p>A custom AMI ID to be used to create the instance. The AMI should be based on one of the standard AWS OpsWorks AMIs: Amazon Linux, Ubuntu 12.04 LTS, or Ubuntu 14.04 LTS. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances.html">Instances</a></p> <note>If you specify a custom AMI, you must set <code>Os</code> to <code>Custom</code>.</note>
    */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    /*
     <p>A custom AMI ID to be used to create the instance. The AMI should be based on one of the standard AWS OpsWorks AMIs: Amazon Linux, Ubuntu 12.04 LTS, or Ubuntu 14.04 LTS. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances.html">Instances</a></p> <note>If you specify a custom AMI, you must set <code>Os</code> to <code>Custom</code>.</note>
    */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /*
     <p>A custom AMI ID to be used to create the instance. The AMI should be based on one of the standard AWS OpsWorks AMIs: Amazon Linux, Ubuntu 12.04 LTS, or Ubuntu 14.04 LTS. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances.html">Instances</a></p> <note>If you specify a custom AMI, you must set <code>Os</code> to <code>Custom</code>.</note>
    */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /*
     <p>A custom AMI ID to be used to create the instance. The AMI should be based on one of the standard AWS OpsWorks AMIs: Amazon Linux, Ubuntu 12.04 LTS, or Ubuntu 14.04 LTS. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances.html">Instances</a></p> <note>If you specify a custom AMI, you must set <code>Os</code> to <code>Custom</code>.</note>
    */
    inline UpdateInstanceRequest&  WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /*
     <p>A custom AMI ID to be used to create the instance. The AMI should be based on one of the standard AWS OpsWorks AMIs: Amazon Linux, Ubuntu 12.04 LTS, or Ubuntu 14.04 LTS. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances.html">Instances</a></p> <note>If you specify a custom AMI, you must set <code>Os</code> to <code>Custom</code>.</note>
    */
    inline UpdateInstanceRequest& WithAmiId(const char* value) { SetAmiId(value); return *this;}

    /*
     <p>The instance's Amazon EC2 key name.</p>
    */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }
    /*
     <p>The instance's Amazon EC2 key name.</p>
    */
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }

    /*
     <p>The instance's Amazon EC2 key name.</p>
    */
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }

    /*
     <p>The instance's Amazon EC2 key name.</p>
    */
    inline UpdateInstanceRequest&  WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}

    /*
     <p>The instance's Amazon EC2 key name.</p>
    */
    inline UpdateInstanceRequest& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}

    /*
     <p>The instance architecture. Instance types do not necessarily support both architectures. For a list of the architectures that are supported by the different instance types, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>.</p>
    */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }
    /*
     <p>The instance architecture. Instance types do not necessarily support both architectures. For a list of the architectures that are supported by the different instance types, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>.</p>
    */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /*
     <p>The instance architecture. Instance types do not necessarily support both architectures. For a list of the architectures that are supported by the different instance types, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Families and Types</a>.</p>
    */
    inline UpdateInstanceRequest&  WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /*
     <p>Whether to install operating system and package updates when the instance boots. The default value is <code>true</code>. To control when updates are installed, set this value to <code>false</code>. You must then update your instances manually by using <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack command or manually running <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly recommend using the default value of <code>true</code>, to ensure that your instances have the latest security updates.</p> </note>
    */
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }
    /*
     <p>Whether to install operating system and package updates when the instance boots. The default value is <code>true</code>. To control when updates are installed, set this value to <code>false</code>. You must then update your instances manually by using <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack command or manually running <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly recommend using the default value of <code>true</code>, to ensure that your instances have the latest security updates.</p> </note>
    */
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }

    /*
     <p>Whether to install operating system and package updates when the instance boots. The default value is <code>true</code>. To control when updates are installed, set this value to <code>false</code>. You must then update your instances manually by using <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack command or manually running <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly recommend using the default value of <code>true</code>, to ensure that your instances have the latest security updates.</p> </note>
    */
    inline UpdateInstanceRequest&  WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}

    /*
     <p>Whether this is an Amazon EBS-optimized instance.</p>
    */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    /*
     <p>Whether this is an Amazon EBS-optimized instance.</p>
    */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /*
     <p>Whether this is an Amazon EBS-optimized instance.</p>
    */
    inline UpdateInstanceRequest&  WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}

  private:
    Aws::String m_instanceId;
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
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
