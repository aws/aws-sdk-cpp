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
  class CreateMissionProfileResult
  {
  public:
    AWS_GROUNDSTATION_API CreateMissionProfileResult();
    AWS_GROUNDSTATION_API CreateMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API CreateMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileId = value; }
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileId = std::move(value); }
    inline void SetMissionProfileId(const char* value) { m_missionProfileId.assign(value); }
    inline CreateMissionProfileResult& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}
    inline CreateMissionProfileResult& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}
    inline CreateMissionProfileResult& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMissionProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMissionProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMissionProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_missionProfileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
