/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/GroupingAttributeDefinition.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class ListGroupingAttributeDefinitionsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListGroupingAttributeDefinitionsResult() = default;
    AWS_APPLICATIONSIGNALS_API ListGroupingAttributeDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListGroupingAttributeDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures, where each structure contains information about one
     * grouping attribute definition, including the grouping name, source keys, and
     * default values.</p>
     */
    inline const Aws::Vector<GroupingAttributeDefinition>& GetGroupingAttributeDefinitions() const { return m_groupingAttributeDefinitions; }
    template<typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
    void SetGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { m_groupingAttributeDefinitionsHasBeenSet = true; m_groupingAttributeDefinitions = std::forward<GroupingAttributeDefinitionsT>(value); }
    template<typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
    ListGroupingAttributeDefinitionsResult& WithGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { SetGroupingAttributeDefinitions(std::forward<GroupingAttributeDefinitionsT>(value)); return *this;}
    template<typename GroupingAttributeDefinitionsT = GroupingAttributeDefinition>
    ListGroupingAttributeDefinitionsResult& AddGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { m_groupingAttributeDefinitionsHasBeenSet = true; m_groupingAttributeDefinitions.emplace_back(std::forward<GroupingAttributeDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the grouping configuration was last updated. When used in
     * a raw HTTP Query API, it is formatted as epoch time in seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ListGroupingAttributeDefinitionsResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get the next set of
     * grouping attribute definitions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGroupingAttributeDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroupingAttributeDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupingAttributeDefinition> m_groupingAttributeDefinitions;
    bool m_groupingAttributeDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
