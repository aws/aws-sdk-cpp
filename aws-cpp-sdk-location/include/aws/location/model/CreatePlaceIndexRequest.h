/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/location/model/PricingPlan.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API CreatePlaceIndexRequest : public LocationServiceRequest
  {
  public:
    CreatePlaceIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlaceIndex"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>Specifies the data provider of geospatial data.</p>  <p>This field is
     * case-sensitive. Enter the valid values as shown. For example, entering
     * <code>HERE</code> will return an error.</p>  <p>Valid values include:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Specifies the data storage option for requesting Places.</p>
     */
    inline CreatePlaceIndexRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline CreatePlaceIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the Place index resource. </p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Place index
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExamplePlaceIndex</code>.</p> </li> </ul>
     */
    inline CreatePlaceIndexRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreatePlaceIndexRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Specifies the pricing plan for your Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreatePlaceIndexRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
