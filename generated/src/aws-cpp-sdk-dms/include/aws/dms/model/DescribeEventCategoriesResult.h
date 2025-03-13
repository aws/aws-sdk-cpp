/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/EventCategoryGroup.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventCategoriesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeEventCategoriesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of event categories.</p>
     */
    inline const Aws::Vector<EventCategoryGroup>& GetEventCategoryGroupList() const { return m_eventCategoryGroupList; }
    template<typename EventCategoryGroupListT = Aws::Vector<EventCategoryGroup>>
    void SetEventCategoryGroupList(EventCategoryGroupListT&& value) { m_eventCategoryGroupListHasBeenSet = true; m_eventCategoryGroupList = std::forward<EventCategoryGroupListT>(value); }
    template<typename EventCategoryGroupListT = Aws::Vector<EventCategoryGroup>>
    DescribeEventCategoriesResult& WithEventCategoryGroupList(EventCategoryGroupListT&& value) { SetEventCategoryGroupList(std::forward<EventCategoryGroupListT>(value)); return *this;}
    template<typename EventCategoryGroupListT = EventCategoryGroup>
    DescribeEventCategoriesResult& AddEventCategoryGroupList(EventCategoryGroupListT&& value) { m_eventCategoryGroupListHasBeenSet = true; m_eventCategoryGroupList.emplace_back(std::forward<EventCategoryGroupListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventCategoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventCategoryGroup> m_eventCategoryGroupList;
    bool m_eventCategoryGroupListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
