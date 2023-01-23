/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamesparks/model/StageSummary.h>
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
  class ListStagesResult
  {
  public:
    AWS_GAMESPARKS_API ListStagesResult();
    AWS_GAMESPARKS_API ListStagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListStagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListStagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListStagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListStagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline const Aws::Vector<StageSummary>& GetStages() const{ return m_stages; }

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline void SetStages(const Aws::Vector<StageSummary>& value) { m_stages = value; }

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline void SetStages(Aws::Vector<StageSummary>&& value) { m_stages = std::move(value); }

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline ListStagesResult& WithStages(const Aws::Vector<StageSummary>& value) { SetStages(value); return *this;}

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline ListStagesResult& WithStages(Aws::Vector<StageSummary>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline ListStagesResult& AddStages(const StageSummary& value) { m_stages.push_back(value); return *this; }

    /**
     * <p> A list of stage summaries. You can use the stage names in the
     * <code>UpdateStage</code> and <code>GetStage</code> actions. </p>
     */
    inline ListStagesResult& AddStages(StageSummary&& value) { m_stages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StageSummary> m_stages;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
