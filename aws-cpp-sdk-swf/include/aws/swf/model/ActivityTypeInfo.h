/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Detailed information about an activity type.</p>
   */
  class AWS_SWF_API ActivityTypeInfo
  {
  public:
    ActivityTypeInfo();
    ActivityTypeInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ActivityTypeInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline ActivityTypeInfo& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline ActivityTypeInfo& WithActivityType(ActivityType&& value) { SetActivityType(value); return *this;}

    /**
     * <p>The current status of the activity type.</p>
     */
    inline const RegistrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the activity type.</p>
     */
    inline void SetStatus(const RegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the activity type.</p>
     */
    inline void SetStatus(RegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the activity type.</p>
     */
    inline ActivityTypeInfo& WithStatus(const RegistrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the activity type.</p>
     */
    inline ActivityTypeInfo& WithStatus(RegistrationStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline ActivityTypeInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline ActivityTypeInfo& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline ActivityTypeInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline ActivityTypeInfo& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline ActivityTypeInfo& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }

    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline ActivityTypeInfo& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}

    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline ActivityTypeInfo& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(value); return *this;}

  private:
    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;
    RegistrationStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
