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
  class AWS_LIGHTSAIL_API CreateRelationalDatabaseFromSnapshotRequest : public LightsailRequest
  {
  public:
    CreateRelationalDatabaseFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelationalDatabaseFromSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name to use for your new database.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const{ return m_relationalDatabaseSnapshotName; }

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const Aws::String& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = value; }

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(Aws::String&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::move(value); }

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const char* value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName.assign(value); }

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(const Aws::String& value) { SetRelationalDatabaseSnapshotName(value); return *this;}

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(Aws::String&& value) { SetRelationalDatabaseSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(const char* value) { SetRelationalDatabaseSnapshotName(value); return *this;}


    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const{ return m_relationalDatabaseBundleId; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline void SetRelationalDatabaseBundleId(const Aws::String& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = value; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline void SetRelationalDatabaseBundleId(Aws::String&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::move(value); }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline void SetRelationalDatabaseBundleId(const char* value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId.assign(value); }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(const Aws::String& value) { SetRelationalDatabaseBundleId(value); return *this;}

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(Aws::String&& value) { SetRelationalDatabaseBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(const char* value) { SetRelationalDatabaseBundleId(value); return *this;}


    /**
     * <p>The name of the source database.</p>
     */
    inline const Aws::String& GetSourceRelationalDatabaseName() const{ return m_sourceRelationalDatabaseName; }

    /**
     * <p>The name of the source database.</p>
     */
    inline bool SourceRelationalDatabaseNameHasBeenSet() const { return m_sourceRelationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the source database.</p>
     */
    inline void SetSourceRelationalDatabaseName(const Aws::String& value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName = value; }

    /**
     * <p>The name of the source database.</p>
     */
    inline void SetSourceRelationalDatabaseName(Aws::String&& value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName = std::move(value); }

    /**
     * <p>The name of the source database.</p>
     */
    inline void SetSourceRelationalDatabaseName(const char* value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName.assign(value); }

    /**
     * <p>The name of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(const Aws::String& value) { SetSourceRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(Aws::String&& value) { SetSourceRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the source database.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(const char* value) { SetSourceRelationalDatabaseName(value); return *this;}


    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const{ return m_restoreTime; }

    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }

    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline void SetRestoreTime(const Aws::Utils::DateTime& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = value; }

    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline void SetRestoreTime(Aws::Utils::DateTime&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::move(value); }

    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRestoreTime(const Aws::Utils::DateTime& value) { SetRestoreTime(value); return *this;}

    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRestoreTime(Aws::Utils::DateTime&& value) { SetRestoreTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }

    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateRelationalDatabaseFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet;

    Aws::String m_sourceRelationalDatabaseName;
    bool m_sourceRelationalDatabaseNameHasBeenSet;

    Aws::Utils::DateTime m_restoreTime;
    bool m_restoreTimeHasBeenSet;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
