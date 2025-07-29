/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class CreatePlaceIndexRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CreatePlaceIndexRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlaceIndex"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    CreatePlaceIndexRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Grab</code> – Grab
     * provides place index functionality for Southeast Asia. For additional
     * information about <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html">GrabMaps</a>'
     * coverage, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and areas covered</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services service
     * terms</a> for Amazon Location Service.</p>  </li> </ul> <p>For
     * additional information , see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service developer guide</i>.</p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    CreatePlaceIndexRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePlaceIndexRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    void SetDataSourceConfiguration(DataSourceConfigurationT&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value); }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    CreatePlaceIndexRequest& WithDataSourceConfiguration(DataSourceConfigurationT&& value) { SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies one or more tags to the place index resource. A tag is a key-value
     * pair that helps you manage, identify, search, and filter your resources.</p>
     * <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li>
     * <p>Maximum 50 tags per resource.</p> </li> <li> <p>Each tag key must be unique
     * and must have exactly one associated value.</p> </li> <li> <p>Maximum key
     * length: 128 Unicode characters in UTF-8.</p> </li> <li> <p>Maximum value length:
     * 256 Unicode characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric
     * characters (A–Z, a–z, 0–9), and the following characters: + - = . _ : / @</p>
     * </li> <li> <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePlaceIndexRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePlaceIndexRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
