/**
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


    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline CreateKxDataviewRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline CreateKxDataviewRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The name of the database where you want to create a dataview. </p>
     */
    inline CreateKxDataviewRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline CreateKxDataviewRequest& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline CreateKxDataviewRequest& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline CreateKxDataviewRequest& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline CreateKxDataviewRequest& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline CreateKxDataviewRequest& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const{ return m_segmentConfigurations; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = value; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::move(value); }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewRequest& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewRequest& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewRequest& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewRequest& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview, when you ingest new changesets. The
     * default value is false.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview, when you ingest new changesets. The
     * default value is false.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview, when you ingest new changesets. The
     * default value is false.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview, when you ingest new changesets. The
     * default value is false.</p>
     */
    inline CreateKxDataviewRequest& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    /**
     * <p>A description of the dataview.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the dataview.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs to label the dataview. You can add up to 50 tags
     * to a dataview. </p>
     */
    inline CreateKxDataviewRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxDataviewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxDataviewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxDataviewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

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
