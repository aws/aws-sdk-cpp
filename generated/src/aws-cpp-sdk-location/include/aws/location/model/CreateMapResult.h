/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateMapResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateMapResult();
    AWS_LOCATIONSERVICE_API CreateMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateMapResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline CreateMapResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


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
    inline CreateMapResult& WithMapArn(const Aws::String& value) { SetMapArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline CreateMapResult& WithMapArn(Aws::String&& value) { SetMapArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline CreateMapResult& WithMapArn(const char* value) { SetMapArn(value); return *this;}


    /**
     * <p>The name of the map resource.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapName = value; }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapName = std::move(value); }

    /**
     * <p>The name of the map resource.</p>
     */
    inline void SetMapName(const char* value) { m_mapName.assign(value); }

    /**
     * <p>The name of the map resource.</p>
     */
    inline CreateMapResult& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The name of the map resource.</p>
     */
    inline CreateMapResult& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The name of the map resource.</p>
     */
    inline CreateMapResult& WithMapName(const char* value) { SetMapName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_mapArn;

    Aws::String m_mapName;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
