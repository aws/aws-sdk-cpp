/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/GroupOrderingIdSummary.h>
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
namespace kendra
{
namespace Model
{
  class DescribePrincipalMappingResult
  {
  public:
    AWS_KENDRA_API DescribePrincipalMappingResult() = default;
    AWS_KENDRA_API DescribePrincipalMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribePrincipalMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    DescribePrincipalMappingResult& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DescribePrincipalMappingResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    DescribePrincipalMappingResult& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status—the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated—the last date-time an action
     * was updated.</p> </li> <li> <p>Received—the last date-time an action was
     * received or submitted.</p> </li> <li> <p>Ordering ID—the latest action that
     * should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason—the reason an action could not be processed.</p> </li> </ul>
     */
    inline const Aws::Vector<GroupOrderingIdSummary>& GetGroupOrderingIdSummaries() const { return m_groupOrderingIdSummaries; }
    template<typename GroupOrderingIdSummariesT = Aws::Vector<GroupOrderingIdSummary>>
    void SetGroupOrderingIdSummaries(GroupOrderingIdSummariesT&& value) { m_groupOrderingIdSummariesHasBeenSet = true; m_groupOrderingIdSummaries = std::forward<GroupOrderingIdSummariesT>(value); }
    template<typename GroupOrderingIdSummariesT = Aws::Vector<GroupOrderingIdSummary>>
    DescribePrincipalMappingResult& WithGroupOrderingIdSummaries(GroupOrderingIdSummariesT&& value) { SetGroupOrderingIdSummaries(std::forward<GroupOrderingIdSummariesT>(value)); return *this;}
    template<typename GroupOrderingIdSummariesT = GroupOrderingIdSummary>
    DescribePrincipalMappingResult& AddGroupOrderingIdSummaries(GroupOrderingIdSummariesT&& value) { m_groupOrderingIdSummariesHasBeenSet = true; m_groupOrderingIdSummaries.emplace_back(std::forward<GroupOrderingIdSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePrincipalMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<GroupOrderingIdSummary> m_groupOrderingIdSummaries;
    bool m_groupOrderingIdSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
