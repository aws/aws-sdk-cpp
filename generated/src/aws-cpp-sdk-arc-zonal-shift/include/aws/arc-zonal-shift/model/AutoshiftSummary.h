/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-zonal-shift/model/AutoshiftExecutionStatus.h>
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
   * <p>Information about an autoshift. Amazon Web Services starts an autoshift to
   * temporarily move traffic for a resource away from an Availability Zone in an
   * Amazon Web Services Region when Amazon Web Services determines that there's an
   * issue in the Availability Zone that could potentially affect customers. You can
   * configure zonal autoshift in Route 53 ARC for managed resources in your Amazon
   * Web Services account in a Region. Supported Amazon Web Services resources are
   * automatically registered with Route 53 ARC.</p> <p>Autoshifts are temporary.
   * When the Availability Zone recovers, Amazon Web Services ends the autoshift, and
   * traffic for the resource is no longer directed to the other Availability Zones
   * in the Region.</p> <p>You can stop an autoshift for a resource by disabling
   * zonal autoshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/AutoshiftSummary">AWS
   * API Reference</a></p>
   */
  class AutoshiftSummary
  {
  public:
    AWS_ARCZONALSHIFT_API AutoshiftSummary();
    AWS_ARCZONALSHIFT_API AutoshiftSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API AutoshiftSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * shifted away from for a resource when Amazon Web Services starts an autoshift.
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
    inline AutoshiftSummary& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}
    inline AutoshiftSummary& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}
    inline AutoshiftSummary& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (in UTC) when the autoshift ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AutoshiftSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AutoshiftSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (in UTC) when the autoshift started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AutoshiftSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AutoshiftSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for an autoshift. </p>
     */
    inline const AutoshiftExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AutoshiftExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AutoshiftExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AutoshiftSummary& WithStatus(const AutoshiftExecutionStatus& value) { SetStatus(value); return *this;}
    inline AutoshiftSummary& WithStatus(AutoshiftExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AutoshiftExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
