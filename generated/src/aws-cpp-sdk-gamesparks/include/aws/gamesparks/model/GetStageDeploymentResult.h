/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/StageDeploymentDetails.h>
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
  class GetStageDeploymentResult
  {
  public:
    AWS_GAMESPARKS_API GetStageDeploymentResult();
    AWS_GAMESPARKS_API GetStageDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetStageDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the stage deployment.</p>
     */
    inline const StageDeploymentDetails& GetStageDeployment() const{ return m_stageDeployment; }

    /**
     * <p>Properties that provide details of the stage deployment.</p>
     */
    inline void SetStageDeployment(const StageDeploymentDetails& value) { m_stageDeployment = value; }

    /**
     * <p>Properties that provide details of the stage deployment.</p>
     */
    inline void SetStageDeployment(StageDeploymentDetails&& value) { m_stageDeployment = std::move(value); }

    /**
     * <p>Properties that provide details of the stage deployment.</p>
     */
    inline GetStageDeploymentResult& WithStageDeployment(const StageDeploymentDetails& value) { SetStageDeployment(value); return *this;}

    /**
     * <p>Properties that provide details of the stage deployment.</p>
     */
    inline GetStageDeploymentResult& WithStageDeployment(StageDeploymentDetails&& value) { SetStageDeployment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStageDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStageDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStageDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StageDeploymentDetails m_stageDeployment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
