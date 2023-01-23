/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamesparks/model/StageDeploymentSummary.h>
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
  class ListStageDeploymentsResult
  {
  public:
    AWS_GAMESPARKS_API ListStageDeploymentsResult();
    AWS_GAMESPARKS_API ListStageDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListStageDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListStageDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListStageDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListStageDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline const Aws::Vector<StageDeploymentSummary>& GetStageDeployments() const{ return m_stageDeployments; }

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline void SetStageDeployments(const Aws::Vector<StageDeploymentSummary>& value) { m_stageDeployments = value; }

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline void SetStageDeployments(Aws::Vector<StageDeploymentSummary>&& value) { m_stageDeployments = std::move(value); }

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline ListStageDeploymentsResult& WithStageDeployments(const Aws::Vector<StageDeploymentSummary>& value) { SetStageDeployments(value); return *this;}

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline ListStageDeploymentsResult& WithStageDeployments(Aws::Vector<StageDeploymentSummary>&& value) { SetStageDeployments(std::move(value)); return *this;}

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline ListStageDeploymentsResult& AddStageDeployments(const StageDeploymentSummary& value) { m_stageDeployments.push_back(value); return *this; }

    /**
     * <p> A list of stage deployment summaries. You can use the deployment IDs in the
     * <code>UpdateStageDeployment</code> and <code>GetStageDeployment</code> actions.
     * </p>
     */
    inline ListStageDeploymentsResult& AddStageDeployments(StageDeploymentSummary&& value) { m_stageDeployments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StageDeploymentSummary> m_stageDeployments;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
