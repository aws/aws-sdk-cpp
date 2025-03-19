/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateRelationalDatabaseFromSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateRelationalDatabaseFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelationalDatabaseFromSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const { return m_relationalDatabaseSnapshotName; }
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    void SetRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::forward<RelationalDatabaseSnapshotNameT>(value); }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { SetRelationalDatabaseSnapshotName(std::forward<RelationalDatabaseSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const { return m_relationalDatabaseBundleId; }
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }
    template<typename RelationalDatabaseBundleIdT = Aws::String>
    void SetRelationalDatabaseBundleId(RelationalDatabaseBundleIdT&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::forward<RelationalDatabaseBundleIdT>(value); }
    template<typename RelationalDatabaseBundleIdT = Aws::String>
    CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(RelationalDatabaseBundleIdT&& value) { SetRelationalDatabaseBundleId(std::forward<RelationalDatabaseBundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database.</p>
     */
    inline const Aws::String& GetSourceRelationalDatabaseName() const { return m_sourceRelationalDatabaseName; }
    inline bool SourceRelationalDatabaseNameHasBeenSet() const { return m_sourceRelationalDatabaseNameHasBeenSet; }
    template<typename SourceRelationalDatabaseNameT = Aws::String>
    void SetSourceRelationalDatabaseName(SourceRelationalDatabaseNameT&& value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName = std::forward<SourceRelationalDatabaseNameT>(value); }
    template<typename SourceRelationalDatabaseNameT = Aws::String>
    CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(SourceRelationalDatabaseNameT&& value) { SetSourceRelationalDatabaseName(std::forward<SourceRelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Coordinated
     * Universal Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const { return m_restoreTime; }
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }
    template<typename RestoreTimeT = Aws::Utils::DateTime>
    void SetRestoreTime(RestoreTimeT&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::forward<RestoreTimeT>(value); }
    template<typename RestoreTimeT = Aws::Utils::DateTime>
    CreateRelationalDatabaseFromSnapshotRequest& WithRestoreTime(RestoreTimeT&& value) { SetRestoreTime(std::forward<RestoreTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const { return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
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
    CreateRelationalDatabaseFromSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRelationalDatabaseFromSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet = false;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet = false;

    Aws::String m_sourceRelationalDatabaseName;
    bool m_sourceRelationalDatabaseNameHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTime{};
    bool m_restoreTimeHasBeenSet = false;

    bool m_useLatestRestorableTime{false};
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
