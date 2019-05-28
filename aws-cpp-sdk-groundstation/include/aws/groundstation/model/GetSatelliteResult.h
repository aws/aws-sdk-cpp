/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatelliteResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API GetSatelliteResult
  {
  public:
    GetSatelliteResult();
    GetSatelliteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSatelliteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When a satellite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>When a satellite was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }

    /**
     * <p>When a satellite was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }

    /**
     * <p>When a satellite was created.</p>
     */
    inline GetSatelliteResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>When a satellite was created.</p>
     */
    inline GetSatelliteResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>When a satellite was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When a satellite was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>When a satellite was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>When a satellite was last updated.</p>
     */
    inline GetSatelliteResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When a satellite was last updated.</p>
     */
    inline GetSatelliteResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const{ return m_noradSatelliteID; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteID = value; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline GetSatelliteResult& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}


    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArn = value; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArn = std::move(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const char* value) { m_satelliteArn.assign(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}


    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteId = value; }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteId = std::move(value); }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(const char* value) { m_satelliteId.assign(value); }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}

    /**
     * <p>UUID of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}

    /**
     * <p>UUID of a satellite.</p>
     */
    inline GetSatelliteResult& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}


    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a satellite.</p>
     */
    inline GetSatelliteResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_lastUpdated;

    int m_noradSatelliteID;

    Aws::String m_satelliteArn;

    Aws::String m_satelliteId;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
