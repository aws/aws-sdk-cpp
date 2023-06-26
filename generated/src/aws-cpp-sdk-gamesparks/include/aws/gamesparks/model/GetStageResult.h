/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/StageDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class GetStageResult
  {
  public:
    AWS_GAMESPARKS_API GetStageResult();
    AWS_GAMESPARKS_API GetStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the stage.</p>
     */
    inline const StageDetails& GetStage() const{ return m_stage; }

    /**
     * <p>Properties that provide details of the stage.</p>
     */
    inline void SetStage(const StageDetails& value) { m_stage = value; }

    /**
     * <p>Properties that provide details of the stage.</p>
     */
    inline void SetStage(StageDetails&& value) { m_stage = std::move(value); }

    /**
     * <p>Properties that provide details of the stage.</p>
     */
    inline GetStageResult& WithStage(const StageDetails& value) { SetStage(value); return *this;}

    /**
     * <p>Properties that provide details of the stage.</p>
     */
    inline GetStageResult& WithStage(StageDetails&& value) { SetStage(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StageDetails m_stage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
