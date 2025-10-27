/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TagSpecification.h>
#include <aws/ec2/model/VolumeType.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CopyVolumesRequest : public EC2Request {
 public:
  AWS_EC2_API CopyVolumesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CopyVolumes"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the source EBS volume to copy.</p>
   */
  inline const Aws::String& GetSourceVolumeId() const { return m_sourceVolumeId; }
  inline bool SourceVolumeIdHasBeenSet() const { return m_sourceVolumeIdHasBeenSet; }
  template <typename SourceVolumeIdT = Aws::String>
  void SetSourceVolumeId(SourceVolumeIdT&& value) {
    m_sourceVolumeIdHasBeenSet = true;
    m_sourceVolumeId = std::forward<SourceVolumeIdT>(value);
  }
  template <typename SourceVolumeIdT = Aws::String>
  CopyVolumesRequest& WithSourceVolumeId(SourceVolumeIdT&& value) {
    SetSourceVolumeId(std::forward<SourceVolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of I/O operations per second (IOPS) to provision for the volume
   * copy. Required for <code>io1</code> and <code>io2</code> volumes. Optional for
   * <code>gp3</code> volumes. Omit for all other volume types. Full provisioned IOPS
   * performance can be achieved only once the volume copy is fully initialized. </p>
   * <p>Valid ranges:</p> <ul> <li> <p>gp3: <code>3,000 </code>(<i>default</i>)<code>
   * - 80,000</code> IOPS</p> </li> <li> <p>io1: <code>100 - 64,000</code> IOPS</p>
   * </li> <li> <p>io2: <code>100 - 256,000</code> IOPS</p> </li> </ul>  <p> <a
   * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-nitro-instances.html">
   * Instances built on the Nitro System</a> can support up to 256,000 IOPS. Other
   * instances can support up to 32,000 IOPS.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline CopyVolumesRequest& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the volume copy, in GiBs. The size must be equal to or greater
   * than the size of the source volume. If not specified, the size defaults to the
   * size of the source volume.</p> <p>Maximum supported sizes:</p> <ul> <li> <p>gp2:
   * <code>16,384</code> GiB</p> </li> <li> <p>gp3: <code>65,536</code> GiB</p> </li>
   * <li> <p>io1: <code>16,384</code> GiB</p> </li> <li> <p>io2: <code>65,536</code>
   * GiB</p> </li> <li> <p>st1 and sc1: <code>16,384</code> GiB</p> </li> <li>
   * <p>standard: <code>1024</code> GiB</p> </li> </ul>
   */
  inline int GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(int value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline CopyVolumesRequest& WithSize(int value) {
    SetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The volume type for the volume copy. If not specified, the volume type
   * defaults to <code>gp2</code>.</p>
   */
  inline VolumeType GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(VolumeType value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline CopyVolumesRequest& WithVolumeType(VolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CopyVolumesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the volume copy during creation.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CopyVolumesRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CopyVolumesRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to enable Amazon EBS Multi-Attach for the volume copy. If
   * you enable Multi-Attach, you can attach the volume to up to 16 Nitro instances
   * in the same Availability Zone simultaneously. Supported with <code>io1</code>
   * and <code>io2</code> volumes only. For more information, see <a
   * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-volumes-multi.html">
   * Amazon EBS Multi-Attach</a>.</p>
   */
  inline bool GetMultiAttachEnabled() const { return m_multiAttachEnabled; }
  inline bool MultiAttachEnabledHasBeenSet() const { return m_multiAttachEnabledHasBeenSet; }
  inline void SetMultiAttachEnabled(bool value) {
    m_multiAttachEnabledHasBeenSet = true;
    m_multiAttachEnabled = value;
  }
  inline CopyVolumesRequest& WithMultiAttachEnabled(bool value) {
    SetMultiAttachEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput to provision for the volume copy, in MiB/s. Supported for
   * <code>gp3</code> volumes only. Omit for all other volume types. Full provisioned
   * throughput performance can be achieved only once the volume copy is fully
   * initialized.</p> <p>Valid Range: <code>125 - 2000</code> MiB/s</p> <p/>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline CopyVolumesRequest& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">
   * Ensure Idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CopyVolumesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceVolumeId;
  bool m_sourceVolumeIdHasBeenSet = false;

  int m_iops{0};
  bool m_iopsHasBeenSet = false;

  int m_size{0};
  bool m_sizeHasBeenSet = false;

  VolumeType m_volumeType{VolumeType::NOT_SET};
  bool m_volumeTypeHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_tagSpecificationsHasBeenSet = false;

  bool m_multiAttachEnabled{false};
  bool m_multiAttachEnabledHasBeenSet = false;

  int m_throughput{0};
  bool m_throughputHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
