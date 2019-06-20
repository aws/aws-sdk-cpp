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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API UpdateStackRequest : public OpsWorksRequest
  {
  public:
    UpdateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStack"; }

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
    inline UpdateStackRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline UpdateStackRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline UpdateStackRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The stack's new name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The stack's new name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The stack's new name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The stack's new name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The stack's new name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The stack's new name.</p>
     */
    inline UpdateStackRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The stack's new name.</p>
     */
    inline UpdateStackRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The stack's new name.</p>
     */
    inline UpdateStackRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline void SetAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& WithAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& WithAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(const StackAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(StackAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(const StackAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(StackAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(StackAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateStackRequest& AddAttributes(const StackAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline UpdateStackRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline UpdateStackRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>Do not use this parameter. You cannot update a stack's service role.</p>
     */
    inline UpdateStackRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetDefaultInstanceProfileArn() const{ return m_defaultInstanceProfileArn; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline bool DefaultInstanceProfileArnHasBeenSet() const { return m_defaultInstanceProfileArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const Aws::String& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = value; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(Aws::String&& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = std::move(value); }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const char* value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn.assign(value); }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultInstanceProfileArn(const Aws::String& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultInstanceProfileArn(Aws::String&& value) { SetDefaultInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultInstanceProfileArn(const char* value) { SetDefaultInstanceProfileArn(value); return *this;}


    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline const Aws::String& GetDefaultOs() const{ return m_defaultOs; }

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline bool DefaultOsHasBeenSet() const { return m_defaultOsHasBeenSet; }

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline void SetDefaultOs(const Aws::String& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline void SetDefaultOs(Aws::String&& value) { m_defaultOsHasBeenSet = true; m_defaultOs = std::move(value); }

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline void SetDefaultOs(const char* value) { m_defaultOsHasBeenSet = true; m_defaultOs.assign(value); }

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultOs(const Aws::String& value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultOs(Aws::String&& value) { SetDefaultOs(std::move(value)); return *this;}

    /**
     * <p>The stack's operating system, which must be set to one of the following:</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2018.03</code>, <code>Amazon Linux 2017.09</code>,
     * <code>Amazon Linux 2017.03</code>, <code>Amazon Linux 2016.09</code>,
     * <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * Linux 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p>
     * </li> <li> <p>A supported Windows operating system, such as <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the stack's current
     * operating system. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Stacks Operating Systems</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultOs(const char* value) { SetDefaultOs(value); return *this;}


    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline const Aws::String& GetHostnameTheme() const{ return m_hostnameTheme; }

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline bool HostnameThemeHasBeenSet() const { return m_hostnameThemeHasBeenSet; }

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(const Aws::String& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(Aws::String&& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = std::move(value); }

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(const char* value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme.assign(value); }

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline UpdateStackRequest& WithHostnameTheme(const Aws::String& value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline UpdateStackRequest& WithHostnameTheme(Aws::String&& value) { SetHostnameTheme(std::move(value)); return *this;}

    /**
     * <p>The stack's new host name theme, with spaces replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline UpdateStackRequest& WithHostnameTheme(const char* value) { SetHostnameTheme(value); return *this;}


    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline const Aws::String& GetDefaultAvailabilityZone() const{ return m_defaultAvailabilityZone; }

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline bool DefaultAvailabilityZoneHasBeenSet() const { return m_defaultAvailabilityZoneHasBeenSet; }

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline void SetDefaultAvailabilityZone(const Aws::String& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline void SetDefaultAvailabilityZone(Aws::String&& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = std::move(value); }

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline void SetDefaultAvailabilityZone(const char* value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone.assign(value); }

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline UpdateStackRequest& WithDefaultAvailabilityZone(const Aws::String& value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline UpdateStackRequest& WithDefaultAvailabilityZone(Aws::String&& value) { SetDefaultAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The stack's default Availability Zone, which must be in the stack's region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see <a>CreateStack</a>.
     * </p>
     */
    inline UpdateStackRequest& WithDefaultAvailabilityZone(const char* value) { SetDefaultAvailabilityZone(value); return *this;}


    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline const Aws::String& GetDefaultSubnetId() const{ return m_defaultSubnetId; }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline bool DefaultSubnetIdHasBeenSet() const { return m_defaultSubnetIdHasBeenSet; }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultSubnetId(const Aws::String& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultSubnetId(Aws::String&& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = std::move(value); }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultSubnetId(const char* value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId.assign(value); }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline UpdateStackRequest& WithDefaultSubnetId(const Aws::String& value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline UpdateStackRequest& WithDefaultSubnetId(Aws::String&& value) { SetDefaultSubnetId(std::move(value)); return *this;}

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline UpdateStackRequest& WithDefaultSubnetId(const char* value) { SetDefaultSubnetId(value); return *this;}


    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline UpdateStackRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline UpdateStackRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. It can be used to override
     * the corresponding default stack configuration JSON values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information about
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline UpdateStackRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}


    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }

    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::move(value); }

    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline UpdateStackRequest& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager. When you update a stack, we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline UpdateStackRequest& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(std::move(value)); return *this;}


    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline const ChefConfiguration& GetChefConfiguration() const{ return m_chefConfiguration; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline bool ChefConfigurationHasBeenSet() const { return m_chefConfigurationHasBeenSet; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(const ChefConfiguration& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(ChefConfiguration&& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = std::move(value); }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline UpdateStackRequest& WithChefConfiguration(const ChefConfiguration& value) { SetChefConfiguration(value); return *this;}

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline UpdateStackRequest& WithChefConfiguration(ChefConfiguration&& value) { SetChefConfiguration(std::move(value)); return *this;}


    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline bool GetUseCustomCookbooks() const{ return m_useCustomCookbooks; }

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline bool UseCustomCookbooksHasBeenSet() const { return m_useCustomCookbooksHasBeenSet; }

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline UpdateStackRequest& WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}


    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline const Source& GetCustomCookbooksSource() const{ return m_customCookbooksSource; }

    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline bool CustomCookbooksSourceHasBeenSet() const { return m_customCookbooksSourceHasBeenSet; }

    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline void SetCustomCookbooksSource(const Source& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline void SetCustomCookbooksSource(Source&& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = std::move(value); }

    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline UpdateStackRequest& WithCustomCookbooksSource(const Source& value) { SetCustomCookbooksSource(value); return *this;}

    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline UpdateStackRequest& WithCustomCookbooksSource(Source&& value) { SetCustomCookbooksSource(std::move(value)); return *this;}


    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline const Aws::String& GetDefaultSshKeyName() const{ return m_defaultSshKeyName; }

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline bool DefaultSshKeyNameHasBeenSet() const { return m_defaultSshKeyNameHasBeenSet; }

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(const Aws::String& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(Aws::String&& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = std::move(value); }

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(const char* value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName.assign(value); }

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline UpdateStackRequest& WithDefaultSshKeyName(const Aws::String& value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline UpdateStackRequest& WithDefaultSshKeyName(Aws::String&& value) { SetDefaultSshKeyName(std::move(value)); return *this;}

    /**
     * <p>A default Amazon EC2 key-pair name. The default value is <code>none</code>.
     * If you specify a key-pair name, AWS OpsWorks Stacks installs the public key on
     * the instance and you can use the private key with an SSH client to log in to the
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline UpdateStackRequest& WithDefaultSshKeyName(const char* value) { SetDefaultSshKeyName(value); return *this;}


    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetDefaultRootDeviceType() const{ return m_defaultRootDeviceType; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline bool DefaultRootDeviceTypeHasBeenSet() const { return m_defaultRootDeviceTypeHasBeenSet; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(const RootDeviceType& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(RootDeviceType&& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = std::move(value); }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultRootDeviceType(const RootDeviceType& value) { SetDefaultRootDeviceType(value); return *this;}

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline UpdateStackRequest& WithDefaultRootDeviceType(RootDeviceType&& value) { SetDefaultRootDeviceType(std::move(value)); return *this;}


    /**
     * <p>Whether to associate the AWS OpsWorks Stacks built-in security groups with
     * the stack's layers.</p> <p>AWS OpsWorks Stacks provides a standard set of
     * built-in security groups, one for each layer, which are associated with layers
     * by default. <code>UseOpsworksSecurityGroups</code> allows you to provide your
     * own custom security groups instead of using the built-in groups.
     * <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul>
     * <li> <p>True - AWS OpsWorks Stacks automatically associates the appropriate
     * built-in security group with each layer (default setting). You can associate
     * additional security groups with a layer after you create it, but you cannot
     * delete the built-in security group.</p> </li> <li> <p>False - AWS OpsWorks
     * Stacks does not associate built-in security groups with layers. You must create
     * appropriate EC2 security groups and associate a security group with each layer
     * that you create. However, you can still manually associate a built-in security
     * group with a layer on. Custom security groups are required only for those layers
     * that need custom settings.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline bool GetUseOpsworksSecurityGroups() const{ return m_useOpsworksSecurityGroups; }

    /**
     * <p>Whether to associate the AWS OpsWorks Stacks built-in security groups with
     * the stack's layers.</p> <p>AWS OpsWorks Stacks provides a standard set of
     * built-in security groups, one for each layer, which are associated with layers
     * by default. <code>UseOpsworksSecurityGroups</code> allows you to provide your
     * own custom security groups instead of using the built-in groups.
     * <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul>
     * <li> <p>True - AWS OpsWorks Stacks automatically associates the appropriate
     * built-in security group with each layer (default setting). You can associate
     * additional security groups with a layer after you create it, but you cannot
     * delete the built-in security group.</p> </li> <li> <p>False - AWS OpsWorks
     * Stacks does not associate built-in security groups with layers. You must create
     * appropriate EC2 security groups and associate a security group with each layer
     * that you create. However, you can still manually associate a built-in security
     * group with a layer on. Custom security groups are required only for those layers
     * that need custom settings.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline bool UseOpsworksSecurityGroupsHasBeenSet() const { return m_useOpsworksSecurityGroupsHasBeenSet; }

    /**
     * <p>Whether to associate the AWS OpsWorks Stacks built-in security groups with
     * the stack's layers.</p> <p>AWS OpsWorks Stacks provides a standard set of
     * built-in security groups, one for each layer, which are associated with layers
     * by default. <code>UseOpsworksSecurityGroups</code> allows you to provide your
     * own custom security groups instead of using the built-in groups.
     * <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul>
     * <li> <p>True - AWS OpsWorks Stacks automatically associates the appropriate
     * built-in security group with each layer (default setting). You can associate
     * additional security groups with a layer after you create it, but you cannot
     * delete the built-in security group.</p> </li> <li> <p>False - AWS OpsWorks
     * Stacks does not associate built-in security groups with layers. You must create
     * appropriate EC2 security groups and associate a security group with each layer
     * that you create. However, you can still manually associate a built-in security
     * group with a layer on. Custom security groups are required only for those layers
     * that need custom settings.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }

    /**
     * <p>Whether to associate the AWS OpsWorks Stacks built-in security groups with
     * the stack's layers.</p> <p>AWS OpsWorks Stacks provides a standard set of
     * built-in security groups, one for each layer, which are associated with layers
     * by default. <code>UseOpsworksSecurityGroups</code> allows you to provide your
     * own custom security groups instead of using the built-in groups.
     * <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul>
     * <li> <p>True - AWS OpsWorks Stacks automatically associates the appropriate
     * built-in security group with each layer (default setting). You can associate
     * additional security groups with a layer after you create it, but you cannot
     * delete the built-in security group.</p> </li> <li> <p>False - AWS OpsWorks
     * Stacks does not associate built-in security groups with layers. You must create
     * appropriate EC2 security groups and associate a security group with each layer
     * that you create. However, you can still manually associate a built-in security
     * group with a layer on. Custom security groups are required only for those layers
     * that need custom settings.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline UpdateStackRequest& WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}


    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline UpdateStackRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline UpdateStackRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The default AWS OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. AWS OpsWorks Stacks automatically installs new agent
     * versions on the stack's instances as soon as they are available.</p> </li> <li>
     * <p>Fixed version - Set this parameter to your preferred agent version. To update
     * the agent version, you must edit the stack configuration and specify a new
     * version. AWS OpsWorks Stacks then automatically installs that version on the
     * stack's instances.</p> </li> </ul> <p>The default setting is
     * <code>LATEST</code>. To specify an agent version, you must use the complete
     * version number, not the abbreviated number shown on the console. For a list of
     * available agent version numbers, call <a>DescribeAgentVersions</a>. AgentVersion
     * cannot be set to Chef 12.2.</p> <note> <p>You can also specify an agent version
     * when you create or update an instance, which overrides the stack's default
     * setting.</p> </note>
     */
    inline UpdateStackRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<StackAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    Aws::String m_defaultInstanceProfileArn;
    bool m_defaultInstanceProfileArnHasBeenSet;

    Aws::String m_defaultOs;
    bool m_defaultOsHasBeenSet;

    Aws::String m_hostnameTheme;
    bool m_hostnameThemeHasBeenSet;

    Aws::String m_defaultAvailabilityZone;
    bool m_defaultAvailabilityZoneHasBeenSet;

    Aws::String m_defaultSubnetId;
    bool m_defaultSubnetIdHasBeenSet;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet;

    ChefConfiguration m_chefConfiguration;
    bool m_chefConfigurationHasBeenSet;

    bool m_useCustomCookbooks;
    bool m_useCustomCookbooksHasBeenSet;

    Source m_customCookbooksSource;
    bool m_customCookbooksSourceHasBeenSet;

    Aws::String m_defaultSshKeyName;
    bool m_defaultSshKeyNameHasBeenSet;

    RootDeviceType m_defaultRootDeviceType;
    bool m_defaultRootDeviceTypeHasBeenSet;

    bool m_useOpsworksSecurityGroups;
    bool m_useOpsworksSecurityGroupsHasBeenSet;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
