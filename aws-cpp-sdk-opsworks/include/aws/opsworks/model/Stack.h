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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a stack.</p>
   */
  class AWS_OPSWORKS_API Stack
  {
  public:
    Stack();
    Stack(const Aws::Utils::Json::JsonValue& jsonValue);
    Stack& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline Stack& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Stack& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Stack& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The stack name.</p>
     */
    inline Stack& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline Stack& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline Stack& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The stack's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The stack's ARN.</p>
     */
    inline Stack& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The stack's ARN.</p>
     */
    inline Stack& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The stack's ARN.</p>
     */
    inline Stack& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    /**
     * <p>The stack AWS region, such as "ap-northeast-2". For more information about
     * AWS regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithRegion(const char* value) { SetRegion(value); return *this;}

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The stack's attributes.</p>
     */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline void SetAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& WithAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& WithAttributes(Aws::Map<StackAttributesKeys, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(const StackAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(StackAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(const StackAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(StackAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(StackAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack's attributes.</p>
     */
    inline Stack& AddAttributes(const StackAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline Stack& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline Stack& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The stack AWS Identity and Access Management (IAM) role.</p>
     */
    inline Stack& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetDefaultInstanceProfileArn() const{ return m_defaultInstanceProfileArn; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const Aws::String& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = value; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(Aws::String&& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = value; }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetDefaultInstanceProfileArn(const char* value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn.assign(value); }

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Stack& WithDefaultInstanceProfileArn(const Aws::String& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Stack& WithDefaultInstanceProfileArn(Aws::String&& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Stack& WithDefaultInstanceProfileArn(const char* value) { SetDefaultInstanceProfileArn(value); return *this;}

    /**
     * <p>The stack's default operating system.</p>
     */
    inline const Aws::String& GetDefaultOs() const{ return m_defaultOs; }

    /**
     * <p>The stack's default operating system.</p>
     */
    inline void SetDefaultOs(const Aws::String& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /**
     * <p>The stack's default operating system.</p>
     */
    inline void SetDefaultOs(Aws::String&& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /**
     * <p>The stack's default operating system.</p>
     */
    inline void SetDefaultOs(const char* value) { m_defaultOsHasBeenSet = true; m_defaultOs.assign(value); }

    /**
     * <p>The stack's default operating system.</p>
     */
    inline Stack& WithDefaultOs(const Aws::String& value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's default operating system.</p>
     */
    inline Stack& WithDefaultOs(Aws::String&& value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack's default operating system.</p>
     */
    inline Stack& WithDefaultOs(const char* value) { SetDefaultOs(value); return *this;}

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline const Aws::String& GetHostnameTheme() const{ return m_hostnameTheme; }

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline void SetHostnameTheme(const Aws::String& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline void SetHostnameTheme(Aws::String&& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline void SetHostnameTheme(const char* value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme.assign(value); }

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline Stack& WithHostnameTheme(const Aws::String& value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline Stack& WithHostnameTheme(Aws::String&& value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline Stack& WithHostnameTheme(const char* value) { SetHostnameTheme(value); return *this;}

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetDefaultAvailabilityZone() const{ return m_defaultAvailabilityZone; }

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetDefaultAvailabilityZone(const Aws::String& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetDefaultAvailabilityZone(Aws::String&& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetDefaultAvailabilityZone(const char* value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone.assign(value); }

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithDefaultAvailabilityZone(const Aws::String& value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithDefaultAvailabilityZone(Aws::String&& value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Stack& WithDefaultAvailabilityZone(const char* value) { SetDefaultAvailabilityZone(value); return *this;}

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline const Aws::String& GetDefaultSubnetId() const{ return m_defaultSubnetId; }

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetDefaultSubnetId(const Aws::String& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetDefaultSubnetId(Aws::String&& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline void SetDefaultSubnetId(const char* value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId.assign(value); }

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithDefaultSubnetId(const Aws::String& value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithDefaultSubnetId(Aws::String&& value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline Stack& WithDefaultSubnetId(const char* value) { SetDefaultSubnetId(value); return *this;}

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Stack& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Stack& WithCustomJson(Aws::String&& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Stack& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline Stack& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline Stack& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline const ChefConfiguration& GetChefConfiguration() const{ return m_chefConfiguration; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(const ChefConfiguration& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline void SetChefConfiguration(ChefConfiguration&& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline Stack& WithChefConfiguration(const ChefConfiguration& value) { SetChefConfiguration(value); return *this;}

    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline Stack& WithChefConfiguration(ChefConfiguration&& value) { SetChefConfiguration(value); return *this;}

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline bool GetUseCustomCookbooks() const{ return m_useCustomCookbooks; }

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }

    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline Stack& WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}

    /**
     * <p>Whether the stack automatically associates the AWS OpsWorks built-in security
     * groups with the stack's layers.</p>
     */
    inline bool GetUseOpsworksSecurityGroups() const{ return m_useOpsworksSecurityGroups; }

    /**
     * <p>Whether the stack automatically associates the AWS OpsWorks built-in security
     * groups with the stack's layers.</p>
     */
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }

    /**
     * <p>Whether the stack automatically associates the AWS OpsWorks built-in security
     * groups with the stack's layers.</p>
     */
    inline Stack& WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}

    
    inline const Source& GetCustomCookbooksSource() const{ return m_customCookbooksSource; }

    
    inline void SetCustomCookbooksSource(const Source& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    
    inline void SetCustomCookbooksSource(Source&& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    
    inline Stack& WithCustomCookbooksSource(const Source& value) { SetCustomCookbooksSource(value); return *this;}

    
    inline Stack& WithCustomCookbooksSource(Source&& value) { SetCustomCookbooksSource(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline const Aws::String& GetDefaultSshKeyName() const{ return m_defaultSshKeyName; }

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline void SetDefaultSshKeyName(const Aws::String& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline void SetDefaultSshKeyName(Aws::String&& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline void SetDefaultSshKeyName(const char* value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName.assign(value); }

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline Stack& WithDefaultSshKeyName(const Aws::String& value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline Stack& WithDefaultSshKeyName(Aws::String&& value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline Stack& WithDefaultSshKeyName(const char* value) { SetDefaultSshKeyName(value); return *this;}

    /**
     * <p>The date when the stack was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the stack was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the stack was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the stack was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>The date when the stack was created.</p>
     */
    inline Stack& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the stack was created.</p>
     */
    inline Stack& WithCreatedAt(Aws::String&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the stack was created.</p>
     */
    inline Stack& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetDefaultRootDeviceType() const{ return m_defaultRootDeviceType; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(const RootDeviceType& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetDefaultRootDeviceType(RootDeviceType&& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline Stack& WithDefaultRootDeviceType(const RootDeviceType& value) { SetDefaultRootDeviceType(value); return *this;}

    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline Stack& WithDefaultRootDeviceType(RootDeviceType&& value) { SetDefaultRootDeviceType(value); return *this;}

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline Stack& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline Stack& WithAgentVersion(Aws::String&& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline Stack& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
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
    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;
    RootDeviceType m_defaultRootDeviceType;
    bool m_defaultRootDeviceTypeHasBeenSet;
    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
