/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentAccountConnectionSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentAccountConnectionsResult
  {
  public:
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult();
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline const Aws::Vector<EnvironmentAccountConnectionSummary>& GetEnvironmentAccountConnections() const{ return m_environmentAccountConnections; }

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline void SetEnvironmentAccountConnections(const Aws::Vector<EnvironmentAccountConnectionSummary>& value) { m_environmentAccountConnections = value; }

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline void SetEnvironmentAccountConnections(Aws::Vector<EnvironmentAccountConnectionSummary>&& value) { m_environmentAccountConnections = std::move(value); }

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline ListEnvironmentAccountConnectionsResult& WithEnvironmentAccountConnections(const Aws::Vector<EnvironmentAccountConnectionSummary>& value) { SetEnvironmentAccountConnections(value); return *this;}

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline ListEnvironmentAccountConnectionsResult& WithEnvironmentAccountConnections(Aws::Vector<EnvironmentAccountConnectionSummary>&& value) { SetEnvironmentAccountConnections(std::move(value)); return *this;}

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline ListEnvironmentAccountConnectionsResult& AddEnvironmentAccountConnections(const EnvironmentAccountConnectionSummary& value) { m_environmentAccountConnections.push_back(value); return *this; }

    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline ListEnvironmentAccountConnectionsResult& AddEnvironmentAccountConnections(EnvironmentAccountConnectionSummary&& value) { m_environmentAccountConnections.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline ListEnvironmentAccountConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline ListEnvironmentAccountConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline ListEnvironmentAccountConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentAccountConnectionSummary> m_environmentAccountConnections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
