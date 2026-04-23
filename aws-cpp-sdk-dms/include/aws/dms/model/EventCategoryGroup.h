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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/EventCategoryGroup">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API EventCategoryGroup
  {
  public:
    EventCategoryGroup();
    EventCategoryGroup(Aws::Utils::Json::JsonView jsonValue);
    EventCategoryGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline EventCategoryGroup& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline EventCategoryGroup& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p> The type of AWS DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group | migration-task</p>
     */
    inline EventCategoryGroup& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline EventCategoryGroup& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline EventCategoryGroup& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline EventCategoryGroup& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline EventCategoryGroup& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of event categories for a <code>SourceType</code> that you want to
     * subscribe to. </p>
     */
    inline EventCategoryGroup& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
