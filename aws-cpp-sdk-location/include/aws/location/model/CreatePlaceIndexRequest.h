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
    AWS_LOCATIONSERVICE_API CreatePlaceIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlaceIndex"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>Specifies the geospatial data provider for the new place index.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://developers.arcgis.com/rest/geocode/api-reference/geocode-coverage.htm">Esri
     * details on geocoding coverage</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/geocoder/dev_guide/topics/coverage-geocoder.html">HERE
     * details on goecoding coverage</a>.</p>  <p>If you specify HERE
     * Technologies (<code>Here</code>) as the data provider, you may not <a
     * href="https://docs.aws.amazon.com/location-places/latest/APIReference/API_DataSourceConfiguration.html">store
     * results</a> for locations in Japan. For more information, see the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul> <p>For additional information ,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Specifies the data storage option requesting Places.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
    inline CreatePlaceIndexRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

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
    inline CreatePlaceIndexRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

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
    inline CreatePlaceIndexRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline CreatePlaceIndexRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
