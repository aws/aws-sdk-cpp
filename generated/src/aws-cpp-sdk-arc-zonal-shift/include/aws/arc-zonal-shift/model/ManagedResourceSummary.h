/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>A complex structure for a managed resource in an Amazon Web Services account
   * with information about zonal shifts and autoshifts.</p> <p>A managed resource is
   * a load balancer that has been registered with Route 53 ARC by Elastic Load
   * Balancing. You can start a zonal shift in Route 53 ARC for a managed resource to
   * temporarily move traffic for the resource away from an Availability Zone in an
   * Amazon Web Services Region. You can also configure zonal autoshift for a managed
   * resource.</p>  <p>At this time, managed resources are Network Load
   * Balancers and Application Load Balancers with cross-zone load balancing turned
   * off.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ManagedResourceSummary">AWS
   * API Reference</a></p>
   */
  class ManagedResourceSummary
  {
  public:
    AWS_ARCZONALSHIFT_API ManagedResourceSummary();
    AWS_ARCZONALSHIFT_API ManagedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ManagedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAppliedWeights() const{ return m_appliedWeights; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline bool AppliedWeightsHasBeenSet() const { return m_appliedWeightsHasBeenSet; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline void SetAppliedWeights(const Aws::Map<Aws::String, double>& value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights = value; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline void SetAppliedWeights(Aws::Map<Aws::String, double>&& value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights = std::move(value); }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline ManagedResourceSummary& WithAppliedWeights(const Aws::Map<Aws::String, double>& value) { SetAppliedWeights(value); return *this;}

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline ManagedResourceSummary& WithAppliedWeights(Aws::Map<Aws::String, double>&& value) { SetAppliedWeights(std::move(value)); return *this;}

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline ManagedResourceSummary& AddAppliedWeights(const Aws::String& key, double value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights.emplace(key, value); return *this; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline ManagedResourceSummary& AddAppliedWeights(Aws::String&& key, double value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline ManagedResourceSummary& AddAppliedWeights(const char* key, double value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline const Aws::Vector<AutoshiftInResource>& GetAutoshifts() const{ return m_autoshifts; }

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline bool AutoshiftsHasBeenSet() const { return m_autoshiftsHasBeenSet; }

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline void SetAutoshifts(const Aws::Vector<AutoshiftInResource>& value) { m_autoshiftsHasBeenSet = true; m_autoshifts = value; }

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline void SetAutoshifts(Aws::Vector<AutoshiftInResource>&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts = std::move(value); }

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline ManagedResourceSummary& WithAutoshifts(const Aws::Vector<AutoshiftInResource>& value) { SetAutoshifts(value); return *this;}

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline ManagedResourceSummary& WithAutoshifts(Aws::Vector<AutoshiftInResource>&& value) { SetAutoshifts(std::move(value)); return *this;}

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline ManagedResourceSummary& AddAutoshifts(const AutoshiftInResource& value) { m_autoshiftsHasBeenSet = true; m_autoshifts.push_back(value); return *this; }

    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline ManagedResourceSummary& AddAutoshifts(AutoshiftInResource&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The name of the managed resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const ZonalAutoshiftStatus& GetPracticeRunStatus() const{ return m_practiceRunStatus; }

    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline bool PracticeRunStatusHasBeenSet() const { return m_practiceRunStatusHasBeenSet; }

    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetPracticeRunStatus(const ZonalAutoshiftStatus& value) { m_practiceRunStatusHasBeenSet = true; m_practiceRunStatus = value; }

    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetPracticeRunStatus(ZonalAutoshiftStatus&& value) { m_practiceRunStatusHasBeenSet = true; m_practiceRunStatus = std::move(value); }

    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline ManagedResourceSummary& WithPracticeRunStatus(const ZonalAutoshiftStatus& value) { SetPracticeRunStatus(value); return *this;}

    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, Route 53 ARC sets this value to <code>ENABLED</code>.
     * If a you have not configured a practice run for the resource, or delete a
     * practice run configuration, Route 53 ARC sets the value to
     * <code>DISABLED</code>.</p> <p>Route 53 ARC updates this status; you can't set a
     * practice run status to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline ManagedResourceSummary& WithPracticeRunStatus(ZonalAutoshiftStatus&& value) { SetPracticeRunStatus(std::move(value)); return *this;}


    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline bool ZonalAutoshiftStatusHasBeenSet() const { return m_zonalAutoshiftStatusHasBeenSet; }

    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }

    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline ManagedResourceSummary& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline ManagedResourceSummary& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline const Aws::Vector<ZonalShiftInResource>& GetZonalShifts() const{ return m_zonalShifts; }

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline bool ZonalShiftsHasBeenSet() const { return m_zonalShiftsHasBeenSet; }

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline void SetZonalShifts(const Aws::Vector<ZonalShiftInResource>& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts = value; }

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline void SetZonalShifts(Aws::Vector<ZonalShiftInResource>&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts = std::move(value); }

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline ManagedResourceSummary& WithZonalShifts(const Aws::Vector<ZonalShiftInResource>& value) { SetZonalShifts(value); return *this;}

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline ManagedResourceSummary& WithZonalShifts(Aws::Vector<ZonalShiftInResource>&& value) { SetZonalShifts(std::move(value)); return *this;}

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline ManagedResourceSummary& AddZonalShifts(const ZonalShiftInResource& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts.push_back(value); return *this; }

    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline ManagedResourceSummary& AddZonalShifts(ZonalShiftInResource&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, double> m_appliedWeights;
    bool m_appliedWeightsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AutoshiftInResource> m_autoshifts;
    bool m_autoshiftsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ZonalAutoshiftStatus m_practiceRunStatus;
    bool m_practiceRunStatusHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus;
    bool m_zonalAutoshiftStatusHasBeenSet = false;

    Aws::Vector<ZonalShiftInResource> m_zonalShifts;
    bool m_zonalShiftsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
