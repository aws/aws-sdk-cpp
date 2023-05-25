/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class UpdatePlaceIndexRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdatePlaceIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePlaceIndex"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline UpdatePlaceIndexRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Updates the data storage option for the place index resource.</p>
     */
    inline UpdatePlaceIndexRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline UpdatePlaceIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline UpdatePlaceIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Updates the description for the place index resource.</p>
     */
    inline UpdatePlaceIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline UpdatePlaceIndexRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline UpdatePlaceIndexRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource to update.</p>
     */
    inline UpdatePlaceIndexRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}

  private:

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
