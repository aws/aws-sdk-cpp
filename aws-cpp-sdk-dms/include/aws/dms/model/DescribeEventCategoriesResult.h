/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeEventCategoriesResult
  {
  public:
    DescribeEventCategoriesResult();
    DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<EventCategoryGroup> m_eventCategoryGroupList;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
