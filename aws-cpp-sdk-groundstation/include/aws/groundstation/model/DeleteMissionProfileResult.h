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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/MissionProfileIdResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API DeleteMissionProfileResult
  {
  public:
    DeleteMissionProfileResult();
    DeleteMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileId = value; }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileId = std::move(value); }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const char* value) { m_missionProfileId.assign(value); }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline DeleteMissionProfileResult& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}

    /**
     * <p>ID of a mission profile.</p>
     */
    inline DeleteMissionProfileResult& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}

    /**
     * <p>ID of a mission profile.</p>
     */
    inline DeleteMissionProfileResult& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}

  private:

    Aws::String m_missionProfileId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
