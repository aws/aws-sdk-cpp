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
    AWS_CLOUDFORMATION_API ResourceScanSummary();
    AWS_CLOUDFORMATION_API ResourceScanSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceScanSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline void SetResourceScanId(const char* value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline ResourceScanSummary& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline ResourceScanSummary& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline ResourceScanSummary& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}


    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline const ResourceScanStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline void SetStatus(const ResourceScanStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline void SetStatus(ResourceScanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline ResourceScanSummary& WithStatus(const ResourceScanStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the resource scan.</p> <dl> <dt>INPROGRESS</dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt>COMPLETE</dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt>EXPIRED</dt> <dd> <p>The resource scan
     * has expired.</p> </dd> <dt>FAILED</dt> <dd> <p>The resource scan has failed.</p>
     * </dd> </dl>
     */
    inline ResourceScanSummary& WithStatus(ResourceScanStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline ResourceScanSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline ResourceScanSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline ResourceScanSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline ResourceScanSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline ResourceScanSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline ResourceScanSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline ResourceScanSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline double GetPercentageCompleted() const{ return m_percentageCompleted; }

    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline bool PercentageCompletedHasBeenSet() const { return m_percentageCompletedHasBeenSet; }

    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline void SetPercentageCompleted(double value) { m_percentageCompletedHasBeenSet = true; m_percentageCompleted = value; }

    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline ResourceScanSummary& WithPercentageCompleted(double value) { SetPercentageCompleted(value); return *this;}

  private:

    Aws::String m_resourceScanId;
    bool m_resourceScanIdHasBeenSet = false;

    ResourceScanStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    double m_percentageCompleted;
    bool m_percentageCompletedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
