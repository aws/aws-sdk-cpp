/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/AutoshiftAppliedStatus.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>A complex structure that lists an autoshift that is currently active for a
   * managed resource and information about the autoshift.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.how-it-works.html">How
   * zonal autoshift and practice runs work</a> in the Amazon Route 53 Application
   * Recovery Controller Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/AutoshiftInResource">AWS
   * API Reference</a></p>
   */
  class AutoshiftInResource
  {
  public:
    AWS_ARCZONALSHIFT_API AutoshiftInResource();
    AWS_ARCZONALSHIFT_API AutoshiftInResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API AutoshiftInResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>appliedStatus</code> field specifies which application traffic
     * shift is in effect for a resource when there is more than one active traffic
     * shift. There can be more than one application traffic shift in progress at the
     * same time - that is, practice run zonal shifts, customer-initiated zonal shifts,
     * or an autoshift. The <code>appliedStatus</code> field for a shift that is in
     * progress for a resource can have one of two values: <code>APPLIED</code> or
     * <code>NOT_APPLIED</code>. The zonal shift or autoshift that is currently in
     * effect for the resource has an <code>appliedStatus</code> set to
     * <code>APPLIED</code>.</p> <p>The overall principle for precedence is that zonal
     * shifts that you start as a customer take precedence autoshifts, which take
     * precedence over practice runs. That is, customer-initiated zonal shifts &gt;
     * autoshifts &gt; practice run zonal shifts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.how-it-works.html">How
     * zonal autoshift and practice runs work</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline const AutoshiftAppliedStatus& GetAppliedStatus() const{ return m_appliedStatus; }
    inline bool AppliedStatusHasBeenSet() const { return m_appliedStatusHasBeenSet; }
    inline void SetAppliedStatus(const AutoshiftAppliedStatus& value) { m_appliedStatusHasBeenSet = true; m_appliedStatus = value; }
    inline void SetAppliedStatus(AutoshiftAppliedStatus&& value) { m_appliedStatusHasBeenSet = true; m_appliedStatus = std::move(value); }
    inline AutoshiftInResource& WithAppliedStatus(const AutoshiftAppliedStatus& value) { SetAppliedStatus(value); return *this;}
    inline AutoshiftInResource& WithAppliedStatus(AutoshiftAppliedStatus&& value) { SetAppliedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * shifted away from for a resource, when Amazon Web Services starts an autoshift.
     * Until the autoshift ends, traffic for the resource is instead directed to other
     * Availability Zones in the Amazon Web Services Region. An autoshift can end for a
     * resource, for example, when Amazon Web Services ends the autoshift for the
     * Availability Zone or when you disable zonal autoshift for the resource.</p>
     */
    inline const Aws::String& GetAwayFrom() const{ return m_awayFrom; }
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }
    inline void SetAwayFrom(const Aws::String& value) { m_awayFromHasBeenSet = true; m_awayFrom = value; }
    inline void SetAwayFrom(Aws::String&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::move(value); }
    inline void SetAwayFrom(const char* value) { m_awayFromHasBeenSet = true; m_awayFrom.assign(value); }
    inline AutoshiftInResource& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}
    inline AutoshiftInResource& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}
    inline AutoshiftInResource& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the autoshift started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AutoshiftInResource& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AutoshiftInResource& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}
  private:

    AutoshiftAppliedStatus m_appliedStatus;
    bool m_appliedStatusHasBeenSet = false;

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
