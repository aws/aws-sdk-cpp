/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
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
   * with information about zonal shifts and autoshifts.</p> <p>You can start a zonal
   * shift in ARC for a managed resource to temporarily move traffic for the resource
   * away from an Availability Zone in an Amazon Web Services Region. You can also
   * configure zonal autoshift for a managed resource.</p>  <p>At this time,
   * managed resources are Amazon EC2 Auto Scaling groups, Amazon Elastic Kubernetes
   * Service, Network Load Balancers, and Application Load Balancer.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ManagedResourceSummary">AWS
   * API Reference</a></p>
   */
  class ManagedResourceSummary
  {
  public:
    AWS_ARCZONALSHIFT_API ManagedResourceSummary() = default;
    AWS_ARCZONALSHIFT_API ManagedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ManagedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ManagedResourceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ManagedResourceSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    ManagedResourceSummary& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    ManagedResourceSummary& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAppliedWeights() const { return m_appliedWeights; }
    inline bool AppliedWeightsHasBeenSet() const { return m_appliedWeightsHasBeenSet; }
    template<typename AppliedWeightsT = Aws::Map<Aws::String, double>>
    void SetAppliedWeights(AppliedWeightsT&& value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights = std::forward<AppliedWeightsT>(value); }
    template<typename AppliedWeightsT = Aws::Map<Aws::String, double>>
    ManagedResourceSummary& WithAppliedWeights(AppliedWeightsT&& value) { SetAppliedWeights(std::forward<AppliedWeightsT>(value)); return *this;}
    inline ManagedResourceSummary& AddAppliedWeights(Aws::String key, double value) {
      m_appliedWeightsHasBeenSet = true; m_appliedWeights.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of the zonal shifts for a resource.</p>
     */
    inline const Aws::Vector<ZonalShiftInResource>& GetZonalShifts() const { return m_zonalShifts; }
    inline bool ZonalShiftsHasBeenSet() const { return m_zonalShiftsHasBeenSet; }
    template<typename ZonalShiftsT = Aws::Vector<ZonalShiftInResource>>
    void SetZonalShifts(ZonalShiftsT&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts = std::forward<ZonalShiftsT>(value); }
    template<typename ZonalShiftsT = Aws::Vector<ZonalShiftInResource>>
    ManagedResourceSummary& WithZonalShifts(ZonalShiftsT&& value) { SetZonalShifts(std::forward<ZonalShiftsT>(value)); return *this;}
    template<typename ZonalShiftsT = ZonalShiftInResource>
    ManagedResourceSummary& AddZonalShifts(ZonalShiftsT&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts.emplace_back(std::forward<ZonalShiftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the autoshifts that have been completed for a resource.</p>
     */
    inline const Aws::Vector<AutoshiftInResource>& GetAutoshifts() const { return m_autoshifts; }
    inline bool AutoshiftsHasBeenSet() const { return m_autoshiftsHasBeenSet; }
    template<typename AutoshiftsT = Aws::Vector<AutoshiftInResource>>
    void SetAutoshifts(AutoshiftsT&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts = std::forward<AutoshiftsT>(value); }
    template<typename AutoshiftsT = Aws::Vector<AutoshiftInResource>>
    ManagedResourceSummary& WithAutoshifts(AutoshiftsT&& value) { SetAutoshifts(std::forward<AutoshiftsT>(value)); return *this;}
    template<typename AutoshiftsT = AutoshiftInResource>
    ManagedResourceSummary& AddAutoshifts(AutoshiftsT&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts.emplace_back(std::forward<AutoshiftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of autoshift for a resource. When you configure zonal autoshift
     * for a resource, you can set the value of the status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline ZonalAutoshiftStatus GetZonalAutoshiftStatus() const { return m_zonalAutoshiftStatus; }
    inline bool ZonalAutoshiftStatusHasBeenSet() const { return m_zonalAutoshiftStatusHasBeenSet; }
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }
    inline ManagedResourceSummary& WithZonalAutoshiftStatus(ZonalAutoshiftStatus value) { SetZonalAutoshiftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This status tracks whether a practice run configuration exists for a
     * resource. When you configure a practice run for a resource so that a practice
     * run configuration exists, ARC sets this value to <code>ENABLED</code>. If a you
     * have not configured a practice run for the resource, or delete a practice run
     * configuration, ARC sets the value to <code>DISABLED</code>.</p> <p>ARC updates
     * this status; you can't set a practice run status to <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline ZonalAutoshiftStatus GetPracticeRunStatus() const { return m_practiceRunStatus; }
    inline bool PracticeRunStatusHasBeenSet() const { return m_practiceRunStatusHasBeenSet; }
    inline void SetPracticeRunStatus(ZonalAutoshiftStatus value) { m_practiceRunStatusHasBeenSet = true; m_practiceRunStatus = value; }
    inline ManagedResourceSummary& WithPracticeRunStatus(ZonalAutoshiftStatus value) { SetPracticeRunStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Map<Aws::String, double> m_appliedWeights;
    bool m_appliedWeightsHasBeenSet = false;

    Aws::Vector<ZonalShiftInResource> m_zonalShifts;
    bool m_zonalShiftsHasBeenSet = false;

    Aws::Vector<AutoshiftInResource> m_autoshifts;
    bool m_autoshiftsHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_zonalAutoshiftStatusHasBeenSet = false;

    ZonalAutoshiftStatus m_practiceRunStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_practiceRunStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
