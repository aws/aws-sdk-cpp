/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
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
namespace ARCZonalShift
{
namespace Model
{
  class GetManagedResourceResult
  {
  public:
    AWS_ARCZONALSHIFT_API GetManagedResourceResult() = default;
    AWS_ARCZONALSHIFT_API GetManagedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API GetManagedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetManagedResourceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetManagedResourceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key-value pairs that indicate whether resources are active in
     * Availability Zones or not. The key name is the Availability Zone where the
     * resource is deployed. The value is 1 or 0.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAppliedWeights() const { return m_appliedWeights; }
    template<typename AppliedWeightsT = Aws::Map<Aws::String, double>>
    void SetAppliedWeights(AppliedWeightsT&& value) { m_appliedWeightsHasBeenSet = true; m_appliedWeights = std::forward<AppliedWeightsT>(value); }
    template<typename AppliedWeightsT = Aws::Map<Aws::String, double>>
    GetManagedResourceResult& WithAppliedWeights(AppliedWeightsT&& value) { SetAppliedWeights(std::forward<AppliedWeightsT>(value)); return *this;}
    inline GetManagedResourceResult& AddAppliedWeights(Aws::String key, double value) {
      m_appliedWeightsHasBeenSet = true; m_appliedWeights.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The zonal shifts that are currently active for a resource. </p>
     */
    inline const Aws::Vector<ZonalShiftInResource>& GetZonalShifts() const { return m_zonalShifts; }
    template<typename ZonalShiftsT = Aws::Vector<ZonalShiftInResource>>
    void SetZonalShifts(ZonalShiftsT&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts = std::forward<ZonalShiftsT>(value); }
    template<typename ZonalShiftsT = Aws::Vector<ZonalShiftInResource>>
    GetManagedResourceResult& WithZonalShifts(ZonalShiftsT&& value) { SetZonalShifts(std::forward<ZonalShiftsT>(value)); return *this;}
    template<typename ZonalShiftsT = ZonalShiftInResource>
    GetManagedResourceResult& AddZonalShifts(ZonalShiftsT&& value) { m_zonalShiftsHasBeenSet = true; m_zonalShifts.emplace_back(std::forward<ZonalShiftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the autoshifts that are active for the resource.</p>
     */
    inline const Aws::Vector<AutoshiftInResource>& GetAutoshifts() const { return m_autoshifts; }
    template<typename AutoshiftsT = Aws::Vector<AutoshiftInResource>>
    void SetAutoshifts(AutoshiftsT&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts = std::forward<AutoshiftsT>(value); }
    template<typename AutoshiftsT = Aws::Vector<AutoshiftInResource>>
    GetManagedResourceResult& WithAutoshifts(AutoshiftsT&& value) { SetAutoshifts(std::forward<AutoshiftsT>(value)); return *this;}
    template<typename AutoshiftsT = AutoshiftInResource>
    GetManagedResourceResult& AddAutoshifts(AutoshiftsT&& value) { m_autoshiftsHasBeenSet = true; m_autoshifts.emplace_back(std::forward<AutoshiftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The practice run configuration for zonal autoshift that's associated with the
     * resource.</p>
     */
    inline const PracticeRunConfiguration& GetPracticeRunConfiguration() const { return m_practiceRunConfiguration; }
    template<typename PracticeRunConfigurationT = PracticeRunConfiguration>
    void SetPracticeRunConfiguration(PracticeRunConfigurationT&& value) { m_practiceRunConfigurationHasBeenSet = true; m_practiceRunConfiguration = std::forward<PracticeRunConfigurationT>(value); }
    template<typename PracticeRunConfigurationT = PracticeRunConfiguration>
    GetManagedResourceResult& WithPracticeRunConfiguration(PracticeRunConfigurationT&& value) { SetPracticeRunConfiguration(std::forward<PracticeRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for zonal autoshift for a resource. When the autoshift status is
     * <code>ENABLED</code>, Amazon Web Services shifts traffic for a resource away
     * from an Availability Zone, on your behalf, when Amazon Web Services determines
     * that there's an issue in the Availability Zone that could potentially affect
     * customers.</p>
     */
    inline ZonalAutoshiftStatus GetZonalAutoshiftStatus() const { return m_zonalAutoshiftStatus; }
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }
    inline GetManagedResourceResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus value) { SetZonalAutoshiftStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, double> m_appliedWeights;
    bool m_appliedWeightsHasBeenSet = false;

    Aws::Vector<ZonalShiftInResource> m_zonalShifts;
    bool m_zonalShiftsHasBeenSet = false;

    Aws::Vector<AutoshiftInResource> m_autoshifts;
    bool m_autoshiftsHasBeenSet = false;

    PracticeRunConfiguration m_practiceRunConfiguration;
    bool m_practiceRunConfigurationHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_zonalAutoshiftStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
