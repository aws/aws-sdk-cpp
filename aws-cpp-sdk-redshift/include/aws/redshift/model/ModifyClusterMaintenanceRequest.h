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
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API ModifyClusterMaintenanceRequest : public RedshiftRequest
  {
  public:
    ModifyClusterMaintenanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterMaintenance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the cluster.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>A boolean indicating whether to enable the deferred maintenance window. </p>
     */
    inline bool GetDeferMaintenance() const{ return m_deferMaintenance; }

    /**
     * <p>A boolean indicating whether to enable the deferred maintenance window. </p>
     */
    inline bool DeferMaintenanceHasBeenSet() const { return m_deferMaintenanceHasBeenSet; }

    /**
     * <p>A boolean indicating whether to enable the deferred maintenance window. </p>
     */
    inline void SetDeferMaintenance(bool value) { m_deferMaintenanceHasBeenSet = true; m_deferMaintenance = value; }

    /**
     * <p>A boolean indicating whether to enable the deferred maintenance window. </p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenance(bool value) { SetDeferMaintenance(value); return *this;}


    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const{ return m_deferMaintenanceIdentifier; }

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const Aws::String& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = value; }

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(Aws::String&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const char* value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceIdentifier(const Aws::String& value) { SetDeferMaintenanceIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceIdentifier(Aws::String&& value) { SetDeferMaintenanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the deferred maintenance window.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceIdentifier(const char* value) { SetDeferMaintenanceIdentifier(value); return *this;}


    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceStartTime() const{ return m_deferMaintenanceStartTime; }

    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline void SetDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = value; }

    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline void SetDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::move(value); }

    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceStartTime(value); return *this;}

    /**
     * <p>A timestamp indicating the start time for the deferred maintenance
     * window.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceEndTime() const{ return m_deferMaintenanceEndTime; }

    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }

    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline void SetDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = value; }

    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline void SetDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::move(value); }

    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceEndTime(value); return *this;}

    /**
     * <p>A timestamp indicating end time for the deferred maintenance window. If you
     * specify an end time, you can't specify a duration.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceEndTime(std::move(value)); return *this;}


    /**
     * <p>An integer indicating the duration of the maintenance window in days. If you
     * specify a duration, you can't specify an end time. The duration must be 45 days
     * or less.</p>
     */
    inline int GetDeferMaintenanceDuration() const{ return m_deferMaintenanceDuration; }

    /**
     * <p>An integer indicating the duration of the maintenance window in days. If you
     * specify a duration, you can't specify an end time. The duration must be 45 days
     * or less.</p>
     */
    inline bool DeferMaintenanceDurationHasBeenSet() const { return m_deferMaintenanceDurationHasBeenSet; }

    /**
     * <p>An integer indicating the duration of the maintenance window in days. If you
     * specify a duration, you can't specify an end time. The duration must be 45 days
     * or less.</p>
     */
    inline void SetDeferMaintenanceDuration(int value) { m_deferMaintenanceDurationHasBeenSet = true; m_deferMaintenanceDuration = value; }

    /**
     * <p>An integer indicating the duration of the maintenance window in days. If you
     * specify a duration, you can't specify an end time. The duration must be 45 days
     * or less.</p>
     */
    inline ModifyClusterMaintenanceRequest& WithDeferMaintenanceDuration(int value) { SetDeferMaintenanceDuration(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    bool m_deferMaintenance;
    bool m_deferMaintenanceHasBeenSet;

    Aws::String m_deferMaintenanceIdentifier;
    bool m_deferMaintenanceIdentifierHasBeenSet;

    Aws::Utils::DateTime m_deferMaintenanceStartTime;
    bool m_deferMaintenanceStartTimeHasBeenSet;

    Aws::Utils::DateTime m_deferMaintenanceEndTime;
    bool m_deferMaintenanceEndTimeHasBeenSet;

    int m_deferMaintenanceDuration;
    bool m_deferMaintenanceDurationHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
