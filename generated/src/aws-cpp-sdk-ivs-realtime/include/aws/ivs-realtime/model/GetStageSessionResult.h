/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/StageSession.h>
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
namespace ivsrealtime
{
namespace Model
{
  class GetStageSessionResult
  {
  public:
    AWS_IVSREALTIME_API GetStageSessionResult();
    AWS_IVSREALTIME_API GetStageSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetStageSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stage session that is returned.</p>
     */
    inline const StageSession& GetStageSession() const{ return m_stageSession; }

    /**
     * <p>The stage session that is returned.</p>
     */
    inline void SetStageSession(const StageSession& value) { m_stageSession = value; }

    /**
     * <p>The stage session that is returned.</p>
     */
    inline void SetStageSession(StageSession&& value) { m_stageSession = std::move(value); }

    /**
     * <p>The stage session that is returned.</p>
     */
    inline GetStageSessionResult& WithStageSession(const StageSession& value) { SetStageSession(value); return *this;}

    /**
     * <p>The stage session that is returned.</p>
     */
    inline GetStageSessionResult& WithStageSession(StageSession&& value) { SetStageSession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStageSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStageSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStageSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StageSession m_stageSession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
