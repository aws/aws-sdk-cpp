/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API CloneStackRequest : public OpsWorksRequest
  {
  public:
    CloneStackRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The source stack ID.</p>
     */
    inline const Aws::String& GetSourceStackId() const{ return m_sourceStackId; }

    /**
     * <p>The source stack ID.</p>
     */
    inline void SetSourceStackId(const Aws::String& value) { m_sourceStackIdHasBeenSet = true; m_sourceStackId = value; }

    /**
     * <p>The source stack ID.</p>
     */
    inline void SetSourceStackId(Aws::String&& value) { m_sourceStackIdHasBeenSet = true; m_sourceStackId = value; }

    /**
     * <p>The source stack ID.</p>
     */
    inline void SetSourceStackId(const char* value) { m_sourceStackIdHasBeenSet = true; m_sourceStackId.assign(value); }

    /**
     * <p>The source stack ID.</p>
     */
    inline CloneStackRequest& WithSourceStackId(const Aws::String& value) { SetSourceStackId(value); return *this;}

    /**
     * <p>The source stack ID.</p>
     */
    inline CloneStackRequest& WithSourceStackId(Aws::String&& value) { SetSourceStackId(value); return *this;}

    /**
     * <p>The source stack ID.</p>
     */
    inline CloneStackRequest& WithSourceStackId(const char* value) { SetSourceStackId(value); return *this;}

    /**
     * <p>The cloned stack name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The cloned stack name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The cloned stack name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The cloned stack name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The cloned stack name.</p>
     */
    inline CloneStackRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The cloned stack name.</p>
     */
    inline CloneStackRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The cloned stack name.</p>
     */
    inline CloneStackRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CloneStackRequest& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CloneStackRequest& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    /**
     * <p>The cloned stack AWS region, such as "ap-northeast-2". For more information
     * about AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline CloneStackRequest& WithRegion(const char* value) { SetRegion(value); return *this;}

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline CloneStackRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline CloneStackRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of
     * the other parameter. If you specify neither parameter, AWS OpsWorks sets these
     * parameters to the first valid Availability Zone for the specified region and the
     * corresponding default VPC subnet ID, respectively. </p> <p>If you specify a
     * nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong to a VPC
     * in your account that is in the specified region.</p> </li> <li> <p>You must
     * specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For more
     * information on how to use AWS OpsWorks with a VPC, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline CloneStackRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline void SetAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline void SetAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& WithAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& WithAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(const StackAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(StackAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(const StackAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(StackAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(StackAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline CloneStackRequest& AddAttributes(const StackAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline CloneStackRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline CloneStackRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS
     * OpsWorks to work with AWS resources on your behalf. You must set this parameter
     * to the Amazon Resource Name (ARN) for an existing IAM role. If you create a
     * stack by using the AWS OpsWorks console, it creates the role for you. You can
     * obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p> <note> <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> </note>
     */
    inline CloneStackRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetDefaultInstanceProfileArn() const{ return m_defaultInstanceProfileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const Aws::String& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(Aws::String&& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const char* value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline CloneStackRequest& WithDefaultInstanceProfileArn(const Aws::String& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline CloneStackRequest& WithDefaultInstanceProfileArn(Aws::String&& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline CloneStackRequest& WithDefaultInstanceProfileArn(const char* value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline const Aws::String& GetDefaultOs() const{ return m_defaultOs; }

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline void SetDefaultOs(const Aws::String& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline void SetDefaultOs(Aws::String&& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline void SetDefaultOs(const char* value) { m_defaultOsHasBeenSet = true; m_defaultOs.assign(value); }

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline CloneStackRequest& WithDefaultOs(const Aws::String& value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline CloneStackRequest& WithDefaultOs(Aws::String&& value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2016.03</code>, <code>Amazon Linux 2015.09</code>, or
     * <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A supported Ubuntu
     * operating system, such as <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04
     * LTS</code>, or <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS
     * 7</code> </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li>
     * <li> <p> <code>Microsoft Windows Server 2012 R2 Base</code>, <code>Microsoft
     * Windows Server 2012 R2 with SQL Server Express</code>, <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Standard</code>, or <code>Microsoft Windows
     * Server 2012 R2 with SQL Server Web</code>.</p> </li> <li> <p>A custom AMI:
     * <code>Custom</code>. You specify the custom AMI you want to use when you create
     * instances. For more information on how to use custom AMIs with OpsWorks, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. For more information on the supported operating systems, see
     * <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">AWS
     * OpsWorks Operating Systems</a>.</p> <note> <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> </note>
     */
    inline CloneStackRequest& WithDefaultOs(const char* value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline const Aws::String& GetHostnameTheme() const{ return m_hostnameTheme; }

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(const Aws::String& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(Aws::String&& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline void SetHostnameTheme(const char* value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme.assign(value); }

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline CloneStackRequest& WithHostnameTheme(const Aws::String& value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline CloneStackRequest& WithHostnameTheme(Aws::String&& value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p> <code>Greek_Deities</code> </p>
     * </li> <li> <p> <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline CloneStackRequest& WithHostnameTheme(const char* value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline const Aws::String& GetDefaultAvailabilityZone() const{ return m_defaultAvailabilityZone; }

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultAvailabilityZone(const Aws::String& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultAvailabilityZone(Aws::String&& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultAvailabilityZone(const char* value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone.assign(value); }

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline CloneStackRequest& WithDefaultAvailabilityZone(const Aws::String& value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline CloneStackRequest& WithDefaultAvailabilityZone(Aws::String&& value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline CloneStackRequest& WithDefaultAvailabilityZone(const char* value) { SetDefaultAvailabilityZone(value); return *this;}

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
    inline void SetDefaultSubnetId(const Aws::String& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline void SetDefaultSubnetId(Aws::String&& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

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
    inline CloneStackRequest& WithDefaultSubnetId(const Aws::String& value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline CloneStackRequest& WithDefaultSubnetId(Aws::String&& value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline CloneStackRequest& WithDefaultSubnetId(const char* value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline CloneStackRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline CloneStackRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline CloneStackRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}

    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline CloneStackRequest& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline CloneStackRequest& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline const ChefConfiguration& GetChefConfiguration() const{ return m_chefConfiguration; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(const ChefConfiguration& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(ChefConfiguration&& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline CloneStackRequest& WithChefConfiguration(const ChefConfiguration& value) { SetChefConfiguration(value); return *this;}

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline CloneStackRequest& WithChefConfiguration(ChefConfiguration&& value) { SetChefConfiguration(value); return *this;}

    /**
     * <p>Whether to use custom cookbooks.</p>
     */
    inline bool GetUseCustomCookbooks() const{ return m_useCustomCookbooks; }

    /**
     * <p>Whether to use custom cookbooks.</p>
     */
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }

    /**
     * <p>Whether to use custom cookbooks.</p>
     */
    inline CloneStackRequest& WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}

    /**
     * <p>Whether to associate the AWS OpsWorks built-in security groups with the
     * stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security
     * groups, one for each layer, which are associated with layers by default. With
     * <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom
     * security groups. <code>UseOpsworksSecurityGroups</code> has the following
     * settings: </p> <ul> <li> <p>True - AWS OpsWorks automatically associates the
     * appropriate built-in security group with each layer (default setting). You can
     * associate additional security groups with a layer after you create it but you
     * cannot delete the built-in security group.</p> </li> <li> <p>False - AWS
     * OpsWorks does not associate built-in security groups with layers. You must
     * create appropriate Amazon Elastic Compute Cloud (Amazon EC2) security groups and
     * associate a security group with each layer that you create. However, you can
     * still manually associate a built-in security group with a layer on creation;
     * custom security groups are required only for those layers that need custom
     * settings.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline bool GetUseOpsworksSecurityGroups() const{ return m_useOpsworksSecurityGroups; }

    /**
     * <p>Whether to associate the AWS OpsWorks built-in security groups with the
     * stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security
     * groups, one for each layer, which are associated with layers by default. With
     * <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom
     * security groups. <code>UseOpsworksSecurityGroups</code> has the following
     * settings: </p> <ul> <li> <p>True - AWS OpsWorks automatically associates the
     * appropriate built-in security group with each layer (default setting). You can
     * associate additional security groups with a layer after you create it but you
     * cannot delete the built-in security group.</p> </li> <li> <p>False - AWS
     * OpsWorks does not associate built-in security groups with layers. You must
     * create appropriate Amazon Elastic Compute Cloud (Amazon EC2) security groups and
     * associate a security group with each layer that you create. However, you can
     * still manually associate a built-in security group with a layer on creation;
     * custom security groups are required only for those layers that need custom
     * settings.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }

    /**
     * <p>Whether to associate the AWS OpsWorks built-in security groups with the
     * stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security
     * groups, one for each layer, which are associated with layers by default. With
     * <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom
     * security groups. <code>UseOpsworksSecurityGroups</code> has the following
     * settings: </p> <ul> <li> <p>True - AWS OpsWorks automatically associates the
     * appropriate built-in security group with each layer (default setting). You can
     * associate additional security groups with a layer after you create it but you
     * cannot delete the built-in security group.</p> </li> <li> <p>False - AWS
     * OpsWorks does not associate built-in security groups with layers. You must
     * create appropriate Amazon Elastic Compute Cloud (Amazon EC2) security groups and
     * associate a security group with each layer that you create. However, you can
     * still manually associate a built-in security group with a layer on creation;
     * custom security groups are required only for those layers that need custom
     * settings.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline CloneStackRequest& WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}

    
    inline const Source& GetCustomCookbooksSource() const{ return m_customCookbooksSource; }

    
    inline void SetCustomCookbooksSource(const Source& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    
    inline void SetCustomCookbooksSource(Source&& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    
    inline CloneStackRequest& WithCustomCookbooksSource(const Source& value) { SetCustomCookbooksSource(value); return *this;}

    
    inline CloneStackRequest& WithCustomCookbooksSource(Source&& value) { SetCustomCookbooksSource(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline const Aws::String& GetDefaultSshKeyName() const{ return m_defaultSshKeyName; }

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(const Aws::String& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(Aws::String&& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline void SetDefaultSshKeyName(const char* value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName.assign(value); }

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline CloneStackRequest& WithDefaultSshKeyName(const Aws::String& value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline CloneStackRequest& WithDefaultSshKeyName(Aws::String&& value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, AWS OpsWorks installs the public key on the instance and you
     * can use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline CloneStackRequest& WithDefaultSshKeyName(const char* value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>Whether to clone the source stack's permissions.</p>
     */
    inline bool GetClonePermissions() const{ return m_clonePermissions; }

    /**
     * <p>Whether to clone the source stack's permissions.</p>
     */
    inline void SetClonePermissions(bool value) { m_clonePermissionsHasBeenSet = true; m_clonePermissions = value; }

    /**
     * <p>Whether to clone the source stack's permissions.</p>
     */
    inline CloneStackRequest& WithClonePermissions(bool value) { SetClonePermissions(value); return *this;}

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCloneAppIds() const{ return m_cloneAppIds; }

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline void SetCloneAppIds(const Aws::Vector<Aws::String>& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds = value; }

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline void SetCloneAppIds(Aws::Vector<Aws::String>&& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds = value; }

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline CloneStackRequest& WithCloneAppIds(const Aws::Vector<Aws::String>& value) { SetCloneAppIds(value); return *this;}

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline CloneStackRequest& WithCloneAppIds(Aws::Vector<Aws::String>&& value) { SetCloneAppIds(value); return *this;}

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline CloneStackRequest& AddCloneAppIds(const Aws::String& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds.push_back(value); return *this; }

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline CloneStackRequest& AddCloneAppIds(Aws::String&& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds.push_back(value); return *this; }

    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline CloneStackRequest& AddCloneAppIds(const char* value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds.push_back(value); return *this; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetDefaultRootDeviceType() const{ return m_defaultRootDeviceType; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(const RootDeviceType& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(RootDeviceType&& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline CloneStackRequest& WithDefaultRootDeviceType(const RootDeviceType& value) { SetDefaultRootDeviceType(value); return *this;}

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline CloneStackRequest& WithDefaultRootDeviceType(RootDeviceType&& value) { SetDefaultRootDeviceType(value); return *this;}

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline CloneStackRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline CloneStackRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The default AWS OpsWorks agent version. You have the following options:</p>
     * <ul> <li> <p>Auto-update - Set this parameter to <code>LATEST</code>. AWS
     * OpsWorks automatically installs new agent versions on the stack's instances as
     * soon as they are available.</p> </li> <li> <p>Fixed version - Set this parameter
     * to your preferred agent version. To update the agent version, you must edit the
     * stack configuration and specify a new version. AWS OpsWorks then automatically
     * installs that version on the stack's instances.</p> </li> </ul> <p>The default
     * setting is <code>LATEST</code>. To specify an agent version, you must use the
     * complete version number, not the abbreviated number shown on the console. For a
     * list of available agent version numbers, call <a>DescribeAgentVersions</a>.</p>
     * <note> <p>You can also specify an agent version when you create or update an
     * instance, which overrides the stack's default setting.</p> </note>
     */
    inline CloneStackRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:
    Aws::String m_sourceStackId;
    bool m_sourceStackIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_region;
    bool m_regionHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
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
    bool m_useOpsworksSecurityGroups;
    bool m_useOpsworksSecurityGroupsHasBeenSet;
    Source m_customCookbooksSource;
    bool m_customCookbooksSourceHasBeenSet;
    Aws::String m_defaultSshKeyName;
    bool m_defaultSshKeyNameHasBeenSet;
    bool m_clonePermissions;
    bool m_clonePermissionsHasBeenSet;
    Aws::Vector<Aws::String> m_cloneAppIds;
    bool m_cloneAppIdsHasBeenSet;
    RootDeviceType m_defaultRootDeviceType;
    bool m_defaultRootDeviceTypeHasBeenSet;
    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
