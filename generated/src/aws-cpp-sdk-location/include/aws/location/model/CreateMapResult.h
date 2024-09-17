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
  class CreateMapResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateMapResult();
    AWS_LOCATIONSERVICE_API CreateMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the map resource.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }
    inline void SetMapName(const Aws::String& value) { m_mapName = value; }
    inline void SetMapName(Aws::String&& value) { m_mapName = std::move(value); }
    inline void SetMapName(const char* value) { m_mapName.assign(value); }
    inline CreateMapResult& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}
    inline CreateMapResult& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}
    inline CreateMapResult& WithMapName(const char* value) { SetMapName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all Amazon Web Services.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline const Aws::String& GetMapArn() const{ return m_mapArn; }
    inline void SetMapArn(const Aws::String& value) { m_mapArn = value; }
    inline void SetMapArn(Aws::String&& value) { m_mapArn = std::move(value); }
    inline void SetMapArn(const char* value) { m_mapArn.assign(value); }
    inline CreateMapResult& WithMapArn(const Aws::String& value) { SetMapArn(value); return *this;}
    inline CreateMapResult& WithMapArn(Aws::String&& value) { SetMapArn(std::move(value)); return *this;}
    inline CreateMapResult& WithMapArn(const char* value) { SetMapArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreateMapResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreateMapResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMapResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMapResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMapResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mapName;

    Aws::String m_mapArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
