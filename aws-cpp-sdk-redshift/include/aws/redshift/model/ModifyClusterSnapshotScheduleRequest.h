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
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API ModifyClusterSnapshotScheduleRequest : public RedshiftRequest
  {
  public:
    ModifyClusterSnapshotScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterSnapshotSchedule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}


    /**
     * <p>A boolean to indicate whether to remove the assoiciation between the cluster
     * and the schedule.</p>
     */
    inline bool GetDisassociateSchedule() const{ return m_disassociateSchedule; }

    /**
     * <p>A boolean to indicate whether to remove the assoiciation between the cluster
     * and the schedule.</p>
     */
    inline bool DisassociateScheduleHasBeenSet() const { return m_disassociateScheduleHasBeenSet; }

    /**
     * <p>A boolean to indicate whether to remove the assoiciation between the cluster
     * and the schedule.</p>
     */
    inline void SetDisassociateSchedule(bool value) { m_disassociateScheduleHasBeenSet = true; m_disassociateSchedule = value; }

    /**
     * <p>A boolean to indicate whether to remove the assoiciation between the cluster
     * and the schedule.</p>
     */
    inline ModifyClusterSnapshotScheduleRequest& WithDisassociateSchedule(bool value) { SetDisassociateSchedule(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet;

    bool m_disassociateSchedule;
    bool m_disassociateScheduleHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
