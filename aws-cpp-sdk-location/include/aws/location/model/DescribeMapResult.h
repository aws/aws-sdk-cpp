/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/MapConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeMapResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeMapResult();
    AWS_LOCATIONSERVICE_API DescribeMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the map tile style selected from a partner data provider.</p>
     */
    inline const MapConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies the map tile style selected from a partner data provider.</p>
     */
    inline void SetConfiguration(const MapConfiguration& value) { m_configuration = value; }

    /**
     * <p>Specifies the map tile style selected from a partner data provider.</p>
     */
    inline void SetConfiguration(MapConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Specifies the map tile style selected from a partner data provider.</p>
     */
    inline DescribeMapResult& WithConfiguration(const MapConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies the map tile style selected from a partner data provider.</p>
     */
    inline DescribeMapResult& WithConfiguration(MapConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline DescribeMapResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline DescribeMapResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSource = value; }

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSource = std::move(value); }

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSource.assign(value); }

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline DescribeMapResult& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline DescribeMapResult& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>Specifies the data provider for the associated map tiles.</p>
     */
    inline DescribeMapResult& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The optional description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline DescribeMapResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline DescribeMapResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the map resource.</p>
     */
    inline DescribeMapResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline const Aws::String& GetMapArn() const{ return m_mapArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline void SetMapArn(const Aws::String& value) { m_mapArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline void SetMapArn(Aws::String&& value) { m_mapArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline void SetMapArn(const char* value) { m_mapArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline DescribeMapResult& WithMapArn(const Aws::String& value) { SetMapArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline DescribeMapResult& WithMapArn(Aws::String&& value) { SetMapArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline DescribeMapResult& WithMapArn(const char* value) { SetMapArn(value); return *this;}


    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapName = value; }

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapName = std::move(value); }

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline void SetMapName(const char* value) { m_mapName.assign(value); }

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline DescribeMapResult& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline DescribeMapResult& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The map style selected from an available provider.</p>
     */
    inline DescribeMapResult& WithMapName(const char* value) { SetMapName(value); return *this;}


    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the map resource.</p>
     */
    inline DescribeMapResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp for when the map resource was last update in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the map resource was last update in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the map resource was last update in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the map resource was last update in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline DescribeMapResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the map resource was last update in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline DescribeMapResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    MapConfiguration m_configuration;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_dataSource;

    Aws::String m_description;

    Aws::String m_mapArn;

    Aws::String m_mapName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
