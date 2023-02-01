/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/StageDetails.h>
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
  class UpdateStageResult
  {
  public:
    AWS_GAMESPARKS_API UpdateStageResult();
    AWS_GAMESPARKS_API UpdateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API UpdateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the updated stage.</p>
     */
    inline const StageDetails& GetStage() const{ return m_stage; }

    /**
     * <p>Properties that provide details of the updated stage.</p>
     */
    inline void SetStage(const StageDetails& value) { m_stage = value; }

    /**
     * <p>Properties that provide details of the updated stage.</p>
     */
    inline void SetStage(StageDetails&& value) { m_stage = std::move(value); }

    /**
     * <p>Properties that provide details of the updated stage.</p>
     */
    inline UpdateStageResult& WithStage(const StageDetails& value) { SetStage(value); return *this;}

    /**
     * <p>Properties that provide details of the updated stage.</p>
     */
    inline UpdateStageResult& WithStage(StageDetails&& value) { SetStage(std::move(value)); return *this;}

  private:

    StageDetails m_stage;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
