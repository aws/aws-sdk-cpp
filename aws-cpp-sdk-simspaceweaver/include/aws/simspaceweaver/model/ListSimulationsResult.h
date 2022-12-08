/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simspaceweaver/model/SimulationMetadata.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class ListSimulationsResult
  {
  public:
    AWS_SIMSPACEWEAVER_API ListSimulationsResult();
    AWS_SIMSPACEWEAVER_API ListSimulationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API ListSimulationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListSimulationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListSimulationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListSimulationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of simulations.</p>
     */
    inline const Aws::Vector<SimulationMetadata>& GetSimulations() const{ return m_simulations; }

    /**
     * <p>The list of simulations.</p>
     */
    inline void SetSimulations(const Aws::Vector<SimulationMetadata>& value) { m_simulations = value; }

    /**
     * <p>The list of simulations.</p>
     */
    inline void SetSimulations(Aws::Vector<SimulationMetadata>&& value) { m_simulations = std::move(value); }

    /**
     * <p>The list of simulations.</p>
     */
    inline ListSimulationsResult& WithSimulations(const Aws::Vector<SimulationMetadata>& value) { SetSimulations(value); return *this;}

    /**
     * <p>The list of simulations.</p>
     */
    inline ListSimulationsResult& WithSimulations(Aws::Vector<SimulationMetadata>&& value) { SetSimulations(std::move(value)); return *this;}

    /**
     * <p>The list of simulations.</p>
     */
    inline ListSimulationsResult& AddSimulations(const SimulationMetadata& value) { m_simulations.push_back(value); return *this; }

    /**
     * <p>The list of simulations.</p>
     */
    inline ListSimulationsResult& AddSimulations(SimulationMetadata&& value) { m_simulations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SimulationMetadata> m_simulations;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
