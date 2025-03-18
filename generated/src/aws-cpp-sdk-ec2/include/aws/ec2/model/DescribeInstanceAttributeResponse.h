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
    AWS_EC2_API DescribeInstanceAttributeResponse() = default;
    AWS_EC2_API DescribeInstanceAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The block device mapping of the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    DescribeInstanceAttributeResponse& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = InstanceBlockDeviceMapping>
    DescribeInstanceAttributeResponse& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether termination protection is enabled. If the value is
     * <code>true</code>, you can't terminate the instance using the Amazon EC2
     * console, command line tools, or API.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const { return m_disableApiTermination; }
    template<typename DisableApiTerminationT = AttributeBooleanValue>
    void SetDisableApiTermination(DisableApiTerminationT&& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = std::forward<DisableApiTerminationT>(value); }
    template<typename DisableApiTerminationT = AttributeBooleanValue>
    DescribeInstanceAttributeResponse& WithDisableApiTermination(DisableApiTerminationT&& value) { SetDisableApiTermination(std::forward<DisableApiTerminationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether enhanced networking with ENA is enabled.</p>
     */
    inline const AttributeBooleanValue& GetEnaSupport() const { return m_enaSupport; }
    template<typename EnaSupportT = AttributeBooleanValue>
    void SetEnaSupport(EnaSupportT&& value) { m_enaSupportHasBeenSet = true; m_enaSupport = std::forward<EnaSupportT>(value); }
    template<typename EnaSupportT = AttributeBooleanValue>
    DescribeInstanceAttributeResponse& WithEnaSupport(EnaSupportT&& value) { SetEnaSupport(std::forward<EnaSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline const EnclaveOptions& GetEnclaveOptions() const { return m_enclaveOptions; }
    template<typename EnclaveOptionsT = EnclaveOptions>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = EnclaveOptions>
    DescribeInstanceAttributeResponse& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const { return m_ebsOptimized; }
    template<typename EbsOptimizedT = AttributeBooleanValue>
    void SetEbsOptimized(EbsOptimizedT&& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = std::forward<EbsOptimizedT>(value); }
    template<typename EbsOptimizedT = AttributeBooleanValue>
    DescribeInstanceAttributeResponse& WithEbsOptimized(EbsOptimizedT&& value) { SetEbsOptimized(std::forward<EbsOptimizedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeInstanceAttributeResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const { return m_instanceInitiatedShutdownBehavior; }
    template<typename InstanceInitiatedShutdownBehaviorT = AttributeValue>
    void SetInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::forward<InstanceInitiatedShutdownBehaviorT>(value); }
    template<typename InstanceInitiatedShutdownBehaviorT = AttributeValue>
    DescribeInstanceAttributeResponse& WithInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { SetInstanceInitiatedShutdownBehavior(std::forward<InstanceInitiatedShutdownBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const AttributeValue& GetInstanceType() const { return m_instanceType; }
    template<typename InstanceTypeT = AttributeValue>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = AttributeValue>
    DescribeInstanceAttributeResponse& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel ID.</p>
     */
    inline const AttributeValue& GetKernelId() const { return m_kernelId; }
    template<typename KernelIdT = AttributeValue>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = AttributeValue>
    DescribeInstanceAttributeResponse& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    DescribeInstanceAttributeResponse& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    DescribeInstanceAttributeResponse& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The RAM disk ID.</p>
     */
    inline const AttributeValue& GetRamdiskId() const { return m_ramdiskId; }
    template<typename RamdiskIdT = AttributeValue>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = AttributeValue>
    DescribeInstanceAttributeResponse& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const AttributeValue& GetRootDeviceName() const { return m_rootDeviceName; }
    template<typename RootDeviceNameT = AttributeValue>
    void SetRootDeviceName(RootDeviceNameT&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::forward<RootDeviceNameT>(value); }
    template<typename RootDeviceNameT = AttributeValue>
    DescribeInstanceAttributeResponse& WithRootDeviceName(RootDeviceNameT&& value) { SetRootDeviceName(std::forward<RootDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checks are enabled.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const { return m_sourceDestCheck; }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    void SetSourceDestCheck(SourceDestCheckT&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::forward<SourceDestCheckT>(value); }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    DescribeInstanceAttributeResponse& WithSourceDestCheck(SourceDestCheckT&& value) { SetSourceDestCheck(std::forward<SourceDestCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const { return m_sriovNetSupport; }
    template<typename SriovNetSupportT = AttributeValue>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = AttributeValue>
    DescribeInstanceAttributeResponse& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data.</p>
     */
    inline const AttributeValue& GetUserData() const { return m_userData; }
    template<typename UserDataT = AttributeValue>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = AttributeValue>
    DescribeInstanceAttributeResponse& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether stop protection is enabled for the instance.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiStop() const { return m_disableApiStop; }
    template<typename DisableApiStopT = AttributeBooleanValue>
    void SetDisableApiStop(DisableApiStopT&& value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = std::forward<DisableApiStopT>(value); }
    template<typename DisableApiStopT = AttributeBooleanValue>
    DescribeInstanceAttributeResponse& WithDisableApiStop(DisableApiStopT&& value) { SetDisableApiStop(std::forward<DisableApiStopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the instance.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const { return m_groups; }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    DescribeInstanceAttributeResponse& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = GroupIdentifier>
    DescribeInstanceAttributeResponse& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstanceAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    AttributeBooleanValue m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    AttributeBooleanValue m_enaSupport;
    bool m_enaSupportHasBeenSet = false;

    EnclaveOptions m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    AttributeBooleanValue m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    AttributeValue m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    AttributeValue m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AttributeValue m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    AttributeValue m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    AttributeValue m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    AttributeValue m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    AttributeValue m_userData;
    bool m_userDataHasBeenSet = false;

    AttributeBooleanValue m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
