/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/location/model/PricingPlan.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class AWS_LOCATIONSERVICE_API DescribePlaceIndexResult
  {
  public:
    DescribePlaceIndexResult();
    DescribePlaceIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePlaceIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the Place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the Place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the Place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the Place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the Place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSource = value; }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSource.assign(value); }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline DescribePlaceIndexResult& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline DescribePlaceIndexResult& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For additional details on data providers,
     * see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline DescribePlaceIndexResult& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The specified data storage option for requesting Places.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>The specified data storage option for requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfiguration = value; }

    /**
     * <p>The specified data storage option for requesting Places.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>The specified data storage option for requesting Places.</p>
     */
    inline DescribePlaceIndexResult& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>The specified data storage option for requesting Places.</p>
     */
    inline DescribePlaceIndexResult& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the Place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline DescribePlaceIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline DescribePlaceIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Place index resource. Used when you
     * need to specify a resource across all AWS. </p>
     */
    inline DescribePlaceIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the Place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The pricing plan selected for the specified Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>The pricing plan selected for the specified Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlan = value; }

    /**
     * <p>The pricing plan selected for the specified Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlan = std::move(value); }

    /**
     * <p>The pricing plan selected for the specified Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline DescribePlaceIndexResult& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>The pricing plan selected for the specified Place index resource.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline DescribePlaceIndexResult& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the Place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the Place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the Place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the Place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the Place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_dataSource;

    DataSourceConfiguration m_dataSourceConfiguration;

    Aws::String m_description;

    Aws::String m_indexArn;

    Aws::String m_indexName;

    PricingPlan m_pricingPlan;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
