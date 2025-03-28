/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResourceScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ScanFilter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeResourceScanResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeResourceScanResult() = default;
    AWS_CLOUDFORMATION_API DescribeResourceScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeResourceScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:resourceScan/${Id}</code>.
     * An example is
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:resourceScan/<i>f5b490f7-7ed4-428a-aa06-31ff25db0772</i>
     * </code>.</p>
     */
    inline const Aws::String& GetResourceScanId() const { return m_resourceScanId; }
    template<typename ResourceScanIdT = Aws::String>
    void SetResourceScanId(ResourceScanIdT&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::forward<ResourceScanIdT>(value); }
    template<typename ResourceScanIdT = Aws::String>
    DescribeResourceScanResult& WithResourceScanId(ResourceScanIdT&& value) { SetResourceScanId(std::forward<ResourceScanIdT>(value)); return *this;}
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
    inline void SetStatus(ResourceScanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeResourceScanResult& WithStatus(ResourceScanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeResourceScanResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeResourceScanResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeResourceScanResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline double GetPercentageCompleted() const { return m_percentageCompleted; }
    inline void SetPercentageCompleted(double value) { m_percentageCompletedHasBeenSet = true; m_percentageCompleted = value; }
    inline DescribeResourceScanResult& WithPercentageCompleted(double value) { SetPercentageCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource types for the specified scan. Resource types are only
     * available for scans with a <code>Status</code> set to <code>COMPLETE</code> or
     * <code>FAILED </code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    DescribeResourceScanResult& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    DescribeResourceScanResult& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of resources that were listed. This is only available for scans
     * with a <code>Status</code> set to <code>COMPLETE</code>, <code>EXPIRED</code>,
     * or <code>FAILED </code>.</p>
     */
    inline int GetResourcesScanned() const { return m_resourcesScanned; }
    inline void SetResourcesScanned(int value) { m_resourcesScannedHasBeenSet = true; m_resourcesScanned = value; }
    inline DescribeResourceScanResult& WithResourcesScanned(int value) { SetResourcesScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that were read. This is only available for scans with
     * a <code>Status</code> set to <code>COMPLETE</code>, <code>EXPIRED</code>, or
     * <code>FAILED</code>.</p>  <p>This field may be 0 if the resource scan
     * failed with a <code>ResourceScanLimitExceededException</code>.</p> 
     */
    inline int GetResourcesRead() const { return m_resourcesRead; }
    inline void SetResourcesRead(int value) { m_resourcesReadHasBeenSet = true; m_resourcesRead = value; }
    inline DescribeResourceScanResult& WithResourcesRead(int value) { SetResourcesRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan filters that were used.</p>
     */
    inline const Aws::Vector<ScanFilter>& GetScanFilters() const { return m_scanFilters; }
    template<typename ScanFiltersT = Aws::Vector<ScanFilter>>
    void SetScanFilters(ScanFiltersT&& value) { m_scanFiltersHasBeenSet = true; m_scanFilters = std::forward<ScanFiltersT>(value); }
    template<typename ScanFiltersT = Aws::Vector<ScanFilter>>
    DescribeResourceScanResult& WithScanFilters(ScanFiltersT&& value) { SetScanFilters(std::forward<ScanFiltersT>(value)); return *this;}
    template<typename ScanFiltersT = ScanFilter>
    DescribeResourceScanResult& AddScanFilters(ScanFiltersT&& value) { m_scanFiltersHasBeenSet = true; m_scanFilters.emplace_back(std::forward<ScanFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeResourceScanResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    int m_resourcesScanned{0};
    bool m_resourcesScannedHasBeenSet = false;

    int m_resourcesRead{0};
    bool m_resourcesReadHasBeenSet = false;

    Aws::Vector<ScanFilter> m_scanFilters;
    bool m_scanFiltersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
