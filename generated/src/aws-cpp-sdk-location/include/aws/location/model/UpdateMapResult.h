/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateMapResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateMapResult();
    AWS_LOCATIONSERVICE_API UpdateMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the updated map resource.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }
    inline void SetMapName(const Aws::String& value) { m_mapName = value; }
    inline void SetMapName(Aws::String&& value) { m_mapName = std::move(value); }
    inline void SetMapName(const char* value) { m_mapName.assign(value); }
    inline UpdateMapResult& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}
    inline UpdateMapResult& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}
    inline UpdateMapResult& WithMapName(const char* value) { SetMapName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated map resource. Used to specify a
     * resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline const Aws::String& GetMapArn() const{ return m_mapArn; }
    inline void SetMapArn(const Aws::String& value) { m_mapArn = value; }
    inline void SetMapArn(Aws::String&& value) { m_mapArn = std::move(value); }
    inline void SetMapArn(const char* value) { m_mapArn.assign(value); }
    inline UpdateMapResult& WithMapArn(const Aws::String& value) { SetMapArn(value); return *this;}
    inline UpdateMapResult& WithMapArn(Aws::String&& value) { SetMapArn(std::move(value)); return *this;}
    inline UpdateMapResult& WithMapArn(const char* value) { SetMapArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the map resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline UpdateMapResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline UpdateMapResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMapResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMapResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMapResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mapName;

    Aws::String m_mapArn;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
