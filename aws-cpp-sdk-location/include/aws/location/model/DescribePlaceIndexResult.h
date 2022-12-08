/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribePlaceIndexResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribePlaceIndexResult();
    AWS_LOCATIONSERVICE_API DescribePlaceIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribePlaceIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSource = value; }

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSource.assign(value); }

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline DescribePlaceIndexResult& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline DescribePlaceIndexResult& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of geospatial data. Values can be one of the following:</p>
     * <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li>
     * </ul> <p>For more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
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
     * <p>The optional description for the place index resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline DescribePlaceIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline DescribePlaceIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline DescribePlaceIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource being described.</p>
     */
    inline DescribePlaceIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with place index resource.</p>
     */
    inline DescribePlaceIndexResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribePlaceIndexResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
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

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
