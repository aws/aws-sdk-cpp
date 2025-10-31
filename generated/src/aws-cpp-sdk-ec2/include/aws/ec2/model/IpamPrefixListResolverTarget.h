/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverTargetState.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an IPAM prefix list resolver target.</p> <p>An IPAM prefix list
 * resolver target is an association between a specific customer-managed prefix
 * list and an IPAM prefix list resolver. The target enables the resolver to
 * synchronize CIDRs selected by its rules into the specified prefix list, which
 * can then be referenced in Amazon Web Services resources.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolverTarget">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolverTarget {
 public:
  AWS_EC2_API IpamPrefixListResolverTarget() = default;
  AWS_EC2_API IpamPrefixListResolverTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolverTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver target.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverTargetId() const { return m_ipamPrefixListResolverTargetId; }
  inline bool IpamPrefixListResolverTargetIdHasBeenSet() const { return m_ipamPrefixListResolverTargetIdHasBeenSet; }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  void SetIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    m_ipamPrefixListResolverTargetIdHasBeenSet = true;
    m_ipamPrefixListResolverTargetId = std::forward<IpamPrefixListResolverTargetIdT>(value);
  }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  IpamPrefixListResolverTarget& WithIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    SetIpamPrefixListResolverTargetId(std::forward<IpamPrefixListResolverTargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IPAM prefix list resolver target.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverTargetArn() const { return m_ipamPrefixListResolverTargetArn; }
  inline bool IpamPrefixListResolverTargetArnHasBeenSet() const { return m_ipamPrefixListResolverTargetArnHasBeenSet; }
  template <typename IpamPrefixListResolverTargetArnT = Aws::String>
  void SetIpamPrefixListResolverTargetArn(IpamPrefixListResolverTargetArnT&& value) {
    m_ipamPrefixListResolverTargetArnHasBeenSet = true;
    m_ipamPrefixListResolverTargetArn = std::forward<IpamPrefixListResolverTargetArnT>(value);
  }
  template <typename IpamPrefixListResolverTargetArnT = Aws::String>
  IpamPrefixListResolverTarget& WithIpamPrefixListResolverTargetArn(IpamPrefixListResolverTargetArnT&& value) {
    SetIpamPrefixListResolverTargetArn(std::forward<IpamPrefixListResolverTargetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver associated with this target.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  IpamPrefixListResolverTarget& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the IPAM prefix list
   * resolver target.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  IpamPrefixListResolverTarget& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the managed prefix list associated with this target.</p>
   */
  inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
  inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
  template <typename PrefixListIdT = Aws::String>
  void SetPrefixListId(PrefixListIdT&& value) {
    m_prefixListIdHasBeenSet = true;
    m_prefixListId = std::forward<PrefixListIdT>(value);
  }
  template <typename PrefixListIdT = Aws::String>
  IpamPrefixListResolverTarget& WithPrefixListId(PrefixListIdT&& value) {
    SetPrefixListId(std::forward<PrefixListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the prefix list associated with this
   * target is located.</p>
   */
  inline const Aws::String& GetPrefixListRegion() const { return m_prefixListRegion; }
  inline bool PrefixListRegionHasBeenSet() const { return m_prefixListRegionHasBeenSet; }
  template <typename PrefixListRegionT = Aws::String>
  void SetPrefixListRegion(PrefixListRegionT&& value) {
    m_prefixListRegionHasBeenSet = true;
    m_prefixListRegion = std::forward<PrefixListRegionT>(value);
  }
  template <typename PrefixListRegionT = Aws::String>
  IpamPrefixListResolverTarget& WithPrefixListRegion(PrefixListRegionT&& value) {
    SetPrefixListRegion(std::forward<PrefixListRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired version of the prefix list that this target should synchronize
   * with.</p>
   */
  inline long long GetDesiredVersion() const { return m_desiredVersion; }
  inline bool DesiredVersionHasBeenSet() const { return m_desiredVersionHasBeenSet; }
  inline void SetDesiredVersion(long long value) {
    m_desiredVersionHasBeenSet = true;
    m_desiredVersion = value;
  }
  inline IpamPrefixListResolverTarget& WithDesiredVersion(long long value) {
    SetDesiredVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the prefix list that was last successfully synchronized by
   * this target.</p>
   */
  inline long long GetLastSyncedVersion() const { return m_lastSyncedVersion; }
  inline bool LastSyncedVersionHasBeenSet() const { return m_lastSyncedVersionHasBeenSet; }
  inline void SetLastSyncedVersion(long long value) {
    m_lastSyncedVersionHasBeenSet = true;
    m_lastSyncedVersion = value;
  }
  inline IpamPrefixListResolverTarget& WithLastSyncedVersion(long long value) {
    SetLastSyncedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this target automatically tracks the latest version of the
   * prefix list.</p>
   */
  inline bool GetTrackLatestVersion() const { return m_trackLatestVersion; }
  inline bool TrackLatestVersionHasBeenSet() const { return m_trackLatestVersionHasBeenSet; }
  inline void SetTrackLatestVersion(bool value) {
    m_trackLatestVersionHasBeenSet = true;
    m_trackLatestVersion = value;
  }
  inline IpamPrefixListResolverTarget& WithTrackLatestVersion(bool value) {
    SetTrackLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the current state of the IPAM prefix list resolver
   * target, including any error information.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  IpamPrefixListResolverTarget& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the IPAM prefix list resolver target. Valid values
   * include <code>create-in-progress</code>, <code>create-complete</code>,
   * <code>create-failed</code>, <code>modify-in-progress</code>,
   * <code>modify-complete</code>, <code>modify-failed</code>,
   * <code>delete-in-progress</code>, <code>delete-complete</code>, and
   * <code>delete-failed</code>.</p>
   */
  inline IpamPrefixListResolverTargetState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamPrefixListResolverTargetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamPrefixListResolverTarget& WithState(IpamPrefixListResolverTargetState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the IPAM prefix list resolver target.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  IpamPrefixListResolverTarget& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  IpamPrefixListResolverTarget& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipamPrefixListResolverTargetId;
  bool m_ipamPrefixListResolverTargetIdHasBeenSet = false;

  Aws::String m_ipamPrefixListResolverTargetArn;
  bool m_ipamPrefixListResolverTargetArnHasBeenSet = false;

  Aws::String m_ipamPrefixListResolverId;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;

  Aws::String m_ownerId;
  bool m_ownerIdHasBeenSet = false;

  Aws::String m_prefixListId;
  bool m_prefixListIdHasBeenSet = false;

  Aws::String m_prefixListRegion;
  bool m_prefixListRegionHasBeenSet = false;

  long long m_desiredVersion{0};
  bool m_desiredVersionHasBeenSet = false;

  long long m_lastSyncedVersion{0};
  bool m_lastSyncedVersionHasBeenSet = false;

  bool m_trackLatestVersion{false};
  bool m_trackLatestVersionHasBeenSet = false;

  Aws::String m_stateMessage;
  bool m_stateMessageHasBeenSet = false;

  IpamPrefixListResolverTargetState m_state{IpamPrefixListResolverTargetState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
