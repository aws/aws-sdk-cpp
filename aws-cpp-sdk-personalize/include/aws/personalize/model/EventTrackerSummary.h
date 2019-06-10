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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides a summary of the properties of an event tracker. For a complete
   * listing, call the <a>DescribeEventTracker</a> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/EventTrackerSummary">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API EventTrackerSummary
  {
  public:
    EventTrackerSummary();
    EventTrackerSummary(Aws::Utils::Json::JsonView jsonValue);
    EventTrackerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the event tracker.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event tracker.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event tracker.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event tracker.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event tracker.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event tracker.</p>
     */
    inline EventTrackerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event tracker.</p>
     */
    inline EventTrackerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event tracker.</p>
     */
    inline EventTrackerSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline bool EventTrackerArnHasBeenSet() const { return m_eventTrackerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline EventTrackerSummary& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline EventTrackerSummary& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker.</p>
     */
    inline EventTrackerSummary& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}


    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline EventTrackerSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline EventTrackerSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline EventTrackerSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline EventTrackerSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the event tracker was created.</p>
     */
    inline EventTrackerSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline EventTrackerSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline EventTrackerSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_eventTrackerArn;
    bool m_eventTrackerArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
