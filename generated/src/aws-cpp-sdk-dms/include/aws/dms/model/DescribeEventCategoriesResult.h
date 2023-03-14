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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of event categories.</p>
     */
    inline const Aws::Vector<EventCategoryGroup>& GetEventCategoryGroupList() const{ return m_eventCategoryGroupList; }

    /**
     * <p>A list of event categories.</p>
     */
    inline void SetEventCategoryGroupList(const Aws::Vector<EventCategoryGroup>& value) { m_eventCategoryGroupList = value; }

    /**
     * <p>A list of event categories.</p>
     */
    inline void SetEventCategoryGroupList(Aws::Vector<EventCategoryGroup>&& value) { m_eventCategoryGroupList = std::move(value); }

    /**
     * <p>A list of event categories.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoryGroupList(const Aws::Vector<EventCategoryGroup>& value) { SetEventCategoryGroupList(value); return *this;}

    /**
     * <p>A list of event categories.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoryGroupList(Aws::Vector<EventCategoryGroup>&& value) { SetEventCategoryGroupList(std::move(value)); return *this;}

    /**
     * <p>A list of event categories.</p>
     */
    inline DescribeEventCategoriesResult& AddEventCategoryGroupList(const EventCategoryGroup& value) { m_eventCategoryGroupList.push_back(value); return *this; }

    /**
     * <p>A list of event categories.</p>
     */
    inline DescribeEventCategoriesResult& AddEventCategoryGroupList(EventCategoryGroup&& value) { m_eventCategoryGroupList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEventCategoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEventCategoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEventCategoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EventCategoryGroup> m_eventCategoryGroupList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
