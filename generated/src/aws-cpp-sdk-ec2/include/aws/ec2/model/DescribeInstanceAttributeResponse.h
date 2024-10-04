/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/ec2/model/EnclaveOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceBlockDeviceMapping.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <utility>

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
   * <p>Describes an instance attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceAttribute">AWS
   * API Reference</a></p>
   */
  class DescribeInstanceAttributeResponse
  {
  public:
    AWS_EC2_API DescribeInstanceAttributeResponse();
    AWS_EC2_API DescribeInstanceAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappings = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline DescribeInstanceAttributeResponse& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappings.push_back(value); return *this; }
    inline DescribeInstanceAttributeResponse& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance through
     * the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const{ return m_disableApiTermination; }
    inline void SetDisableApiTermination(const AttributeBooleanValue& value) { m_disableApiTermination = value; }
    inline void SetDisableApiTermination(AttributeBooleanValue&& value) { m_disableApiTermination = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithDisableApiTermination(const AttributeBooleanValue& value) { SetDisableApiTermination(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithDisableApiTermination(AttributeBooleanValue&& value) { SetDisableApiTermination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether enhanced networking with ENA is enabled.</p>
     */
    inline const AttributeBooleanValue& GetEnaSupport() const{ return m_enaSupport; }
    inline void SetEnaSupport(const AttributeBooleanValue& value) { m_enaSupport = value; }
    inline void SetEnaSupport(AttributeBooleanValue&& value) { m_enaSupport = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithEnaSupport(const AttributeBooleanValue& value) { SetEnaSupport(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithEnaSupport(AttributeBooleanValue&& value) { SetEnaSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To enable the instance for Amazon Web Services Nitro Enclaves, set this
     * parameter to <code>true</code>; otherwise, set it to <code>false</code>.</p>
     */
    inline const EnclaveOptions& GetEnclaveOptions() const{ return m_enclaveOptions; }
    inline void SetEnclaveOptions(const EnclaveOptions& value) { m_enclaveOptions = value; }
    inline void SetEnclaveOptions(EnclaveOptions&& value) { m_enclaveOptions = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithEnclaveOptions(const EnclaveOptions& value) { SetEnclaveOptions(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithEnclaveOptions(EnclaveOptions&& value) { SetEnclaveOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const{ return m_ebsOptimized; }
    inline void SetEbsOptimized(const AttributeBooleanValue& value) { m_ebsOptimized = value; }
    inline void SetEbsOptimized(AttributeBooleanValue&& value) { m_ebsOptimized = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithEbsOptimized(const AttributeBooleanValue& value) { SetEbsOptimized(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithEbsOptimized(AttributeBooleanValue&& value) { SetEbsOptimized(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline DescribeInstanceAttributeResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DescribeInstanceAttributeResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }
    inline void SetInstanceInitiatedShutdownBehavior(const AttributeValue& value) { m_instanceInitiatedShutdownBehavior = value; }
    inline void SetInstanceInitiatedShutdownBehavior(AttributeValue&& value) { m_instanceInitiatedShutdownBehavior = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithInstanceInitiatedShutdownBehavior(const AttributeValue& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithInstanceInitiatedShutdownBehavior(AttributeValue&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const AttributeValue& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const AttributeValue& value) { m_instanceType = value; }
    inline void SetInstanceType(AttributeValue&& value) { m_instanceType = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithInstanceType(const AttributeValue& value) { SetInstanceType(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithInstanceType(AttributeValue&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel ID.</p>
     */
    inline const AttributeValue& GetKernelId() const{ return m_kernelId; }
    inline void SetKernelId(const AttributeValue& value) { m_kernelId = value; }
    inline void SetKernelId(AttributeValue&& value) { m_kernelId = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithKernelId(const AttributeValue& value) { SetKernelId(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithKernelId(AttributeValue&& value) { SetKernelId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline DescribeInstanceAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }
    inline DescribeInstanceAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The RAM disk ID.</p>
     */
    inline const AttributeValue& GetRamdiskId() const{ return m_ramdiskId; }
    inline void SetRamdiskId(const AttributeValue& value) { m_ramdiskId = value; }
    inline void SetRamdiskId(AttributeValue&& value) { m_ramdiskId = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithRamdiskId(const AttributeValue& value) { SetRamdiskId(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithRamdiskId(AttributeValue&& value) { SetRamdiskId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const AttributeValue& GetRootDeviceName() const{ return m_rootDeviceName; }
    inline void SetRootDeviceName(const AttributeValue& value) { m_rootDeviceName = value; }
    inline void SetRootDeviceName(AttributeValue&& value) { m_rootDeviceName = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithRootDeviceName(const AttributeValue& value) { SetRootDeviceName(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithRootDeviceName(AttributeValue&& value) { SetRootDeviceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable source/destination checks, which ensure that the instance
     * is either the source or the destination of any traffic that it receives. If the
     * value is <code>true</code>, source/destination checks are enabled; otherwise,
     * they are disabled. The default value is <code>true</code>. You must disable
     * source/destination checks if the instance runs services such as network address
     * translation, routing, or firewalls.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheck = value; }
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheck = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupport = value; }
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupport = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data.</p>
     */
    inline const AttributeValue& GetUserData() const{ return m_userData; }
    inline void SetUserData(const AttributeValue& value) { m_userData = value; }
    inline void SetUserData(AttributeValue&& value) { m_userData = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithUserData(const AttributeValue& value) { SetUserData(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithUserData(AttributeValue&& value) { SetUserData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To enable the instance for Amazon Web Services Stop Protection, set this
     * parameter to <code>true</code>; otherwise, set it to <code>false</code>.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiStop() const{ return m_disableApiStop; }
    inline void SetDisableApiStop(const AttributeBooleanValue& value) { m_disableApiStop = value; }
    inline void SetDisableApiStop(AttributeBooleanValue&& value) { m_disableApiStop = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithDisableApiStop(const AttributeBooleanValue& value) { SetDisableApiStop(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithDisableApiStop(AttributeBooleanValue&& value) { SetDisableApiStop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline DescribeInstanceAttributeResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }
    inline DescribeInstanceAttributeResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeInstanceAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeInstanceAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;

    AttributeBooleanValue m_disableApiTermination;

    AttributeBooleanValue m_enaSupport;

    EnclaveOptions m_enclaveOptions;

    AttributeBooleanValue m_ebsOptimized;

    Aws::String m_instanceId;

    AttributeValue m_instanceInitiatedShutdownBehavior;

    AttributeValue m_instanceType;

    AttributeValue m_kernelId;

    Aws::Vector<ProductCode> m_productCodes;

    AttributeValue m_ramdiskId;

    AttributeValue m_rootDeviceName;

    AttributeBooleanValue m_sourceDestCheck;

    AttributeValue m_sriovNetSupport;

    AttributeValue m_userData;

    AttributeBooleanValue m_disableApiStop;

    Aws::Vector<GroupIdentifier> m_groups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
