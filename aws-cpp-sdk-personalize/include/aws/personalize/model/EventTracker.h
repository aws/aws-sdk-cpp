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
   * <p>Provides information about an event tracker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/EventTracker">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API EventTracker
  {
  public:
    EventTracker();
    EventTracker(Aws::Utils::Json::JsonView jsonValue);
    EventTracker& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EventTracker& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event tracker.</p>
     */
    inline EventTracker& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event tracker.</p>
     */
    inline EventTracker& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline bool EventTrackerArnHasBeenSet() const { return m_eventTrackerArnHasBeenSet; }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = value; }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = std::move(value); }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn.assign(value); }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline EventTracker& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline EventTracker& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline EventTracker& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}


    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline EventTracker& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline EventTracker& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon AWS account that owns the event tracker.</p>
     */
    inline EventTracker& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline bool TrackingIdHasBeenSet() const { return m_trackingIdHasBeenSet; }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(const Aws::String& value) { m_trackingIdHasBeenSet = true; m_trackingId = value; }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(Aws::String&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::move(value); }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(const char* value) { m_trackingIdHasBeenSet = true; m_trackingId.assign(value); }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline EventTracker& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline EventTracker& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline EventTracker& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline EventTracker& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline EventTracker& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline EventTracker& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


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
    inline EventTracker& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline EventTracker& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline EventTracker& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline EventTracker& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline EventTracker& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


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
    inline EventTracker& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline EventTracker& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_eventTrackerArn;
    bool m_eventTrackerArnHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet;

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
