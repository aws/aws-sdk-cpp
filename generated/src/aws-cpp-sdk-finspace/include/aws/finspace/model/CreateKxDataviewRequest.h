﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateKxDataviewRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateKxDataviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxDataview"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline CreateKxDataviewRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateKxDataviewRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateKxDataviewRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateKxDataviewRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }
    inline CreateKxDataviewRequest& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}
    inline CreateKxDataviewRequest& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }
    inline CreateKxDataviewRequest& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline CreateKxDataviewRequest& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }
    inline CreateKxDataviewRequest& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}
    inline CreateKxDataviewRequest& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const{ return m_segmentConfigurations; }
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = value; }
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::move(value); }
    inline CreateKxDataviewRequest& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}
    inline CreateKxDataviewRequest& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }
    inline CreateKxDataviewRequest& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview, when you ingest new changesets. The
     * default value is false.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline CreateKxDataviewRequest& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The option to specify whether you want to make the dataview writable to
     * perform database maintenance. The following are some considerations related to
     * writable dataviews.&#x2028;&#x2028;</p> <ul> <li> <p>You cannot create partial
     * writable dataviews. When you create writeable dataviews you must provide the
     * entire database path.</p> </li> <li> <p>You cannot perform updates on a
     * writeable dataview. Hence, <code>autoUpdate</code> must be set as <b>False</b>
     * if <code>readWrite</code> is <b>True</b> for a dataview.</p> </li> <li> <p>You
     * must also use a unique volume for creating a writeable dataview. So, if you
     * choose a volume that is already in use by another dataview, the dataview
     * creation fails.</p> </li> <li> <p>Once you create a dataview as writeable, you
     * cannot change it to read-only. So, you cannot update the <code>readWrite</code>
     * parameter later.</p> </li> </ul>
     */
    inline bool GetReadWrite() const{ return m_readWrite; }
    inline bool ReadWriteHasBeenSet() const { return m_readWriteHasBeenSet; }
    inline void SetReadWrite(bool value) { m_readWriteHasBeenSet = true; m_readWrite = value; }
    inline CreateKxDataviewRequest& WithReadWrite(bool value) { SetReadWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the dataview.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateKxDataviewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateKxDataviewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateKxDataviewRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateKxDataviewRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxDataviewRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateKxDataviewRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxDataviewRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateKxDataviewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateKxDataviewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateKxDataviewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    bool m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;

    bool m_readWrite;
    bool m_readWriteHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
