/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/MembershipDatasources.h>
#include <aws/detective/model/UnprocessedGraph.h>
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
namespace Detective
{
namespace Model
{
  class BatchGetMembershipDatasourcesResult
  {
  public:
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult();
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline const Aws::Vector<MembershipDatasources>& GetMembershipDatasources() const{ return m_membershipDatasources; }

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline void SetMembershipDatasources(const Aws::Vector<MembershipDatasources>& value) { m_membershipDatasources = value; }

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline void SetMembershipDatasources(Aws::Vector<MembershipDatasources>&& value) { m_membershipDatasources = std::move(value); }

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline BatchGetMembershipDatasourcesResult& WithMembershipDatasources(const Aws::Vector<MembershipDatasources>& value) { SetMembershipDatasources(value); return *this;}

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline BatchGetMembershipDatasourcesResult& WithMembershipDatasources(Aws::Vector<MembershipDatasources>&& value) { SetMembershipDatasources(std::move(value)); return *this;}

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline BatchGetMembershipDatasourcesResult& AddMembershipDatasources(const MembershipDatasources& value) { m_membershipDatasources.push_back(value); return *this; }

    /**
     * <p>Details on the data source package history for an member of the behavior
     * graph.</p>
     */
    inline BatchGetMembershipDatasourcesResult& AddMembershipDatasources(MembershipDatasources&& value) { m_membershipDatasources.push_back(std::move(value)); return *this; }


    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline const Aws::Vector<UnprocessedGraph>& GetUnprocessedGraphs() const{ return m_unprocessedGraphs; }

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline void SetUnprocessedGraphs(const Aws::Vector<UnprocessedGraph>& value) { m_unprocessedGraphs = value; }

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline void SetUnprocessedGraphs(Aws::Vector<UnprocessedGraph>&& value) { m_unprocessedGraphs = std::move(value); }

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline BatchGetMembershipDatasourcesResult& WithUnprocessedGraphs(const Aws::Vector<UnprocessedGraph>& value) { SetUnprocessedGraphs(value); return *this;}

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline BatchGetMembershipDatasourcesResult& WithUnprocessedGraphs(Aws::Vector<UnprocessedGraph>&& value) { SetUnprocessedGraphs(std::move(value)); return *this;}

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline BatchGetMembershipDatasourcesResult& AddUnprocessedGraphs(const UnprocessedGraph& value) { m_unprocessedGraphs.push_back(value); return *this; }

    /**
     * <p>Graphs that data source package information could not be retrieved for.</p>
     */
    inline BatchGetMembershipDatasourcesResult& AddUnprocessedGraphs(UnprocessedGraph&& value) { m_unprocessedGraphs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MembershipDatasources> m_membershipDatasources;

    Aws::Vector<UnprocessedGraph> m_unprocessedGraphs;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
