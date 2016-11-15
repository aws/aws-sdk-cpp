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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceBlockDeviceMapping.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/GroupIdentifier.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Describes an instance attribute.</p>
   */
  class AWS_EC2_API DescribeInstanceAttributeResponse
  {
  public:
    DescribeInstanceAttributeResponse();
    DescribeInstanceAttributeResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstanceAttributeResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline const AttributeValue& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const AttributeValue& value) { m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(AttributeValue&& value) { m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceType(const AttributeValue& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceType(AttributeValue&& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The kernel ID.</p>
     */
    inline const AttributeValue& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The kernel ID.</p>
     */
    inline void SetKernelId(const AttributeValue& value) { m_kernelId = value; }

    /**
     * <p>The kernel ID.</p>
     */
    inline void SetKernelId(AttributeValue&& value) { m_kernelId = value; }

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeInstanceAttributeResponse& WithKernelId(const AttributeValue& value) { SetKernelId(value); return *this;}

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeInstanceAttributeResponse& WithKernelId(AttributeValue&& value) { SetKernelId(value); return *this;}

    /**
     * <p>The RAM disk ID.</p>
     */
    inline const AttributeValue& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline void SetRamdiskId(const AttributeValue& value) { m_ramdiskId = value; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline void SetRamdiskId(AttributeValue&& value) { m_ramdiskId = value; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeInstanceAttributeResponse& WithRamdiskId(const AttributeValue& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeInstanceAttributeResponse& WithRamdiskId(AttributeValue&& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The Base64-encoded MIME user data.</p>
     */
    inline const AttributeValue& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded MIME user data.</p>
     */
    inline void SetUserData(const AttributeValue& value) { m_userData = value; }

    /**
     * <p>The Base64-encoded MIME user data.</p>
     */
    inline void SetUserData(AttributeValue&& value) { m_userData = value; }

    /**
     * <p>The Base64-encoded MIME user data.</p>
     */
    inline DescribeInstanceAttributeResponse& WithUserData(const AttributeValue& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded MIME user data.</p>
     */
    inline DescribeInstanceAttributeResponse& WithUserData(AttributeValue&& value) { SetUserData(value); return *this;}

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline void SetDisableApiTermination(const AttributeBooleanValue& value) { m_disableApiTermination = value; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline void SetDisableApiTermination(AttributeBooleanValue&& value) { m_disableApiTermination = value; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline DescribeInstanceAttributeResponse& WithDisableApiTermination(const AttributeBooleanValue& value) { SetDisableApiTermination(value); return *this;}

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline DescribeInstanceAttributeResponse& WithDisableApiTermination(AttributeBooleanValue&& value) { SetDisableApiTermination(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const AttributeValue& value) { m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(AttributeValue&& value) { m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceInitiatedShutdownBehavior(const AttributeValue& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline DescribeInstanceAttributeResponse& WithInstanceInitiatedShutdownBehavior(AttributeValue&& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code> or
     * <code>/dev/xvda</code>).</p>
     */
    inline const AttributeValue& GetRootDeviceName() const{ return m_rootDeviceName; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code> or
     * <code>/dev/xvda</code>).</p>
     */
    inline void SetRootDeviceName(const AttributeValue& value) { m_rootDeviceName = value; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code> or
     * <code>/dev/xvda</code>).</p>
     */
    inline void SetRootDeviceName(AttributeValue&& value) { m_rootDeviceName = value; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code> or
     * <code>/dev/xvda</code>).</p>
     */
    inline DescribeInstanceAttributeResponse& WithRootDeviceName(const AttributeValue& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code> or
     * <code>/dev/xvda</code>).</p>
     */
    inline DescribeInstanceAttributeResponse& WithRootDeviceName(AttributeValue&& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>A list of product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>A list of product codes.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }

    /**
     * <p>A list of product codes.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = value; }

    /**
     * <p>A list of product codes.</p>
     */
    inline DescribeInstanceAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>A list of product codes.</p>
     */
    inline DescribeInstanceAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(value); return *this;}

    /**
     * <p>A list of product codes.</p>
     */
    inline DescribeInstanceAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }

    /**
     * <p>A list of product codes.</p>
     */
    inline DescribeInstanceAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(value); return *this; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O.</p>
     */
    inline void SetEbsOptimized(const AttributeBooleanValue& value) { m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O.</p>
     */
    inline void SetEbsOptimized(AttributeBooleanValue&& value) { m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O.</p>
     */
    inline DescribeInstanceAttributeResponse& WithEbsOptimized(const AttributeBooleanValue& value) { SetEbsOptimized(value); return *this;}

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O.</p>
     */
    inline DescribeInstanceAttributeResponse& WithEbsOptimized(AttributeBooleanValue&& value) { SetEbsOptimized(value); return *this;}

    
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupport = value; }

    
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupport = value; }

    
    inline DescribeInstanceAttributeResponse& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}

    
    inline DescribeInstanceAttributeResponse& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline DescribeInstanceAttributeResponse& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline DescribeInstanceAttributeResponse& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = value; }

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(value); return *this;}

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline DescribeInstanceAttributeResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeInstanceAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_instanceId;
    AttributeValue m_instanceType;
    AttributeValue m_kernelId;
    AttributeValue m_ramdiskId;
    AttributeValue m_userData;
    AttributeBooleanValue m_disableApiTermination;
    AttributeValue m_instanceInitiatedShutdownBehavior;
    AttributeValue m_rootDeviceName;
    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    Aws::Vector<ProductCode> m_productCodes;
    AttributeBooleanValue m_ebsOptimized;
    AttributeValue m_sriovNetSupport;
    AttributeBooleanValue m_sourceDestCheck;
    Aws::Vector<GroupIdentifier> m_groups;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws