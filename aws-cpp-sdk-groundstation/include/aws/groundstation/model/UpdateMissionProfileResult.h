﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_GROUNDSTATION_API UpdateMissionProfileResult
  {
  public:
    UpdateMissionProfileResult();
    UpdateMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileId = value; }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileId = std::move(value); }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const char* value) { m_missionProfileId.assign(value); }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline UpdateMissionProfileResult& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline UpdateMissionProfileResult& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline UpdateMissionProfileResult& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}

  private:

    Aws::String m_missionProfileId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
