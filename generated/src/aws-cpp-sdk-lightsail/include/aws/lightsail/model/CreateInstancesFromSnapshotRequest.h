/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <aws/lightsail/model/DiskMap.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateInstancesFromSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateInstancesFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstancesFromSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names for your new instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const { return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    void SetInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::forward<InstanceNamesT>(value); }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    CreateInstancesFromSnapshotRequest& WithInstanceNames(InstanceNamesT&& value) { SetInstanceNames(std::forward<InstanceNamesT>(value)); return *this;}
    template<typename InstanceNamesT = Aws::String>
    CreateInstancesFromSnapshotRequest& AddInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.emplace_back(std::forward<InstanceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DiskMap>>& GetAttachedDiskMapping() const { return m_attachedDiskMapping; }
    inline bool AttachedDiskMappingHasBeenSet() const { return m_attachedDiskMappingHasBeenSet; }
    template<typename AttachedDiskMappingT = Aws::Map<Aws::String, Aws::Vector<DiskMap>>>
    void SetAttachedDiskMapping(AttachedDiskMappingT&& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping = std::forward<AttachedDiskMappingT>(value); }
    template<typename AttachedDiskMappingT = Aws::Map<Aws::String, Aws::Vector<DiskMap>>>
    CreateInstancesFromSnapshotRequest& WithAttachedDiskMapping(AttachedDiskMappingT&& value) { SetAttachedDiskMapping(std::forward<AttachedDiskMappingT>(value)); return *this;}
    template<typename AttachedDiskMappingKeyT = Aws::String, typename AttachedDiskMappingValueT = Aws::Vector<DiskMap>>
    CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(AttachedDiskMappingKeyT&& key, AttachedDiskMappingValueT&& value) {
      m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(std::forward<AttachedDiskMappingKeyT>(key), std::forward<AttachedDiskMappingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceSnapshotName() const { return m_instanceSnapshotName; }
    inline bool InstanceSnapshotNameHasBeenSet() const { return m_instanceSnapshotNameHasBeenSet; }
    template<typename InstanceSnapshotNameT = Aws::String>
    void SetInstanceSnapshotName(InstanceSnapshotNameT&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = std::forward<InstanceSnapshotNameT>(value); }
    template<typename InstanceSnapshotNameT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(InstanceSnapshotNameT&& value) { SetInstanceSnapshotName(std::forward<InstanceSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInstancesFromSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInstancesFromSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const { return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    void SetAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns = std::forward<AddOnsT>(value); }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    CreateInstancesFromSnapshotRequest& WithAddOns(AddOnsT&& value) { SetAddOns(std::forward<AddOnsT>(value)); return *this;}
    template<typename AddOnsT = AddOnRequest>
    CreateInstancesFromSnapshotRequest& AddAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns.emplace_back(std::forward<AddOnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p> <p>The default value is
     * <code>dualstack</code>.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateInstancesFromSnapshotRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceInstanceName() const { return m_sourceInstanceName; }
    inline bool SourceInstanceNameHasBeenSet() const { return m_sourceInstanceNameHasBeenSet; }
    template<typename SourceInstanceNameT = Aws::String>
    void SetSourceInstanceName(SourceInstanceNameT&& value) { m_sourceInstanceNameHasBeenSet = true; m_sourceInstanceName = std::forward<SourceInstanceNameT>(value); }
    template<typename SourceInstanceNameT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithSourceInstanceName(SourceInstanceNameT&& value) { SetSourceInstanceName(std::forward<SourceInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const { return m_restoreDate; }
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }
    template<typename RestoreDateT = Aws::String>
    void SetRestoreDate(RestoreDateT&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::forward<RestoreDateT>(value); }
    template<typename RestoreDateT = Aws::String>
    CreateInstancesFromSnapshotRequest& WithRestoreDate(RestoreDateT&& value) { SetRestoreDate(std::forward<RestoreDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new instance from an automatic snapshot. For more information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const { return m_useLatestRestorableAutoSnapshot; }
    inline bool UseLatestRestorableAutoSnapshotHasBeenSet() const { return m_useLatestRestorableAutoSnapshotHasBeenSet; }
    inline void SetUseLatestRestorableAutoSnapshot(bool value) { m_useLatestRestorableAutoSnapshotHasBeenSet = true; m_useLatestRestorableAutoSnapshot = value; }
    inline CreateInstancesFromSnapshotRequest& WithUseLatestRestorableAutoSnapshot(bool value) { SetUseLatestRestorableAutoSnapshot(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<DiskMap>> m_attachedDiskMapping;
    bool m_attachedDiskMappingHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_sourceInstanceName;
    bool m_sourceInstanceNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot{false};
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
