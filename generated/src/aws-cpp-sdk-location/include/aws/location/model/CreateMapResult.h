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
    AWS_LOCATIONSERVICE_API CreateMapResult() = default;
    AWS_LOCATIONSERVICE_API CreateMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the map resource.</p>
     */
    inline const Aws::String& GetMapName() const { return m_mapName; }
    template<typename MapNameT = Aws::String>
    void SetMapName(MapNameT&& value) { m_mapNameHasBeenSet = true; m_mapName = std::forward<MapNameT>(value); }
    template<typename MapNameT = Aws::String>
    CreateMapResult& WithMapName(MapNameT&& value) { SetMapName(std::forward<MapNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the map resource. Used to specify a
     * resource across all Amazon Web Services.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:map/ExampleMap</code> </p> </li> </ul>
     */
    inline const Aws::String& GetMapArn() const { return m_mapArn; }
    template<typename MapArnT = Aws::String>
    void SetMapArn(MapArnT&& value) { m_mapArnHasBeenSet = true; m_mapArn = std::forward<MapArnT>(value); }
    template<typename MapArnT = Aws::String>
    CreateMapResult& WithMapArn(MapArnT&& value) { SetMapArn(std::forward<MapArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the map resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateMapResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMapResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

    Aws::String m_mapArn;
    bool m_mapArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
