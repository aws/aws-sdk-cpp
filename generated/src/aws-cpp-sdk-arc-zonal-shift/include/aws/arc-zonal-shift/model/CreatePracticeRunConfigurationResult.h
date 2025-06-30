/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
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
  class CreatePracticeRunConfigurationResult
  {
  public:
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult() = default;
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreatePracticeRunConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePracticeRunConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for zonal autoshift for a resource. When you specify
     * <code>ENABLED</code> for the autoshift status, Amazon Web Services shifts
     * traffic away from shifts away application resource traffic from an Availability
     * Zone, on your behalf, when internal telemetry indicates that there is an
     * Availability Zone impairment that could potentially impact customers.</p>
     * <p>When you enable zonal autoshift, you must also configure practice runs for
     * the resource.</p>
     */
    inline ZonalAutoshiftStatus GetZonalAutoshiftStatus() const { return m_zonalAutoshiftStatus; }
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }
    inline CreatePracticeRunConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus value) { SetZonalAutoshiftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline const PracticeRunConfiguration& GetPracticeRunConfiguration() const { return m_practiceRunConfiguration; }
    template<typename PracticeRunConfigurationT = PracticeRunConfiguration>
    void SetPracticeRunConfiguration(PracticeRunConfigurationT&& value) { m_practiceRunConfigurationHasBeenSet = true; m_practiceRunConfiguration = std::forward<PracticeRunConfigurationT>(value); }
    template<typename PracticeRunConfigurationT = PracticeRunConfiguration>
    CreatePracticeRunConfigurationResult& WithPracticeRunConfiguration(PracticeRunConfigurationT&& value) { SetPracticeRunConfiguration(std::forward<PracticeRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePracticeRunConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_zonalAutoshiftStatusHasBeenSet = false;

    PracticeRunConfiguration m_practiceRunConfiguration;
    bool m_practiceRunConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
