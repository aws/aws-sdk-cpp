/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResourceScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ScanType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>A summary of the resource scan. This is returned by the
   * <code>ListResourceScan</code> API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceScanSummary">AWS
   * API Reference</a></p>
   */
  class ResourceScanSummary
  {
  public:
    AWS_CLOUDFORMATION_API ResourceScanSummary() = default;
    AWS_CLOUDFORMATION_API ResourceScanSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceScanSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline const Aws::String& GetResourceScanId() const { return m_resourceScanId; }
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }
    template<typename ResourceScanIdT = Aws::String>
    void SetResourceScanId(ResourceScanIdT&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::forward<ResourceScanIdT>(value); }
    template<typename ResourceScanIdT = Aws::String>
    ResourceScanSummary& WithResourceScanId(ResourceScanIdT&& value) { SetResourceScanId(std::forward<ResourceScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the resource scan.</p> <dl> <dt> IN_PROGRESS </dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt> COMPLETE </dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt> EXPIRED </dt> <dd> <p>The resource
     * scan has expired.</p> </dd> <dt> FAILED </dt> <dd> <p>The resource scan has
     * failed.</p> </dd> </dl>
     */
    inline ResourceScanStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceScanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceScanSummary& WithStatus(ResourceScanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ResourceScanSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ResourceScanSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ResourceScanSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline double GetPercentageCompleted() const { return m_percentageCompleted; }
    inline bool PercentageCompletedHasBeenSet() const { return m_percentageCompletedHasBeenSet; }
    inline void SetPercentageCompleted(double value) { m_percentageCompletedHasBeenSet = true; m_percentageCompleted = value; }
    inline ResourceScanSummary& WithPercentageCompleted(double value) { SetPercentageCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan type that has been completed.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline ResourceScanSummary& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;
    bool m_resourceScanIdHasBeenSet = false;

    ResourceScanStatus m_status{ResourceScanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    double m_percentageCompleted{0.0};
    bool m_percentageCompletedHasBeenSet = false;

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
