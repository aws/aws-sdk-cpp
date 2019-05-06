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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API ModifySnapshotScheduleRequest : public RedshiftRequest
  {
  public:
    ModifySnapshotScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotSchedule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}


    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const{ return m_scheduleDefinitions; }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline void SetScheduleDefinitions(const Aws::Vector<Aws::String>& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = value; }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline void SetScheduleDefinitions(Aws::Vector<Aws::String>&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::move(value); }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline ModifySnapshotScheduleRequest& WithScheduleDefinitions(const Aws::Vector<Aws::String>& value) { SetScheduleDefinitions(value); return *this;}

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline ModifySnapshotScheduleRequest& WithScheduleDefinitions(Aws::Vector<Aws::String>&& value) { SetScheduleDefinitions(std::move(value)); return *this;}

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(const Aws::String& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(Aws::String&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(std::move(value)); return *this; }

    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(const char* value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }

  private:

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_scheduleDefinitions;
    bool m_scheduleDefinitionsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
