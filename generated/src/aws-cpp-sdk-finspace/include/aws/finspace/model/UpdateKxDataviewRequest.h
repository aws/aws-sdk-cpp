﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateKxDataviewRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateKxDataviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxDataview"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, where you want to update the
     * dataview.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline UpdateKxDataviewRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateKxDataviewRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline UpdateKxDataviewRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline UpdateKxDataviewRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataview that you want to update.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }
    inline UpdateKxDataviewRequest& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}
    inline UpdateKxDataviewRequest& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for a dataview. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateKxDataviewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateKxDataviewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }
    inline UpdateKxDataviewRequest& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}
    inline UpdateKxDataviewRequest& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}
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
    inline UpdateKxDataviewRequest& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}
    inline UpdateKxDataviewRequest& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }
    inline UpdateKxDataviewRequest& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }
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
    inline UpdateKxDataviewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateKxDataviewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateKxDataviewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
