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
    AWS_CLOUDFORMATION_API DescribeResourceScanResult();
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
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanId = value; }
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanId = std::move(value); }
    inline void SetResourceScanId(const char* value) { m_resourceScanId.assign(value); }
    inline DescribeResourceScanResult& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}
    inline DescribeResourceScanResult& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}
    inline DescribeResourceScanResult& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the resource scan.</p> <dl> <dt> INPROGRESS </dt> <dd> <p>The
     * resource scan is still in progress.</p> </dd> <dt> COMPLETE </dt> <dd> <p>The
     * resource scan is complete.</p> </dd> <dt> EXPIRED </dt> <dd> <p>The resource
     * scan has expired.</p> </dd> <dt> FAILED </dt> <dd> <p>The resource scan has
     * failed.</p> </dd> </dl>
     */
    inline const ResourceScanStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceScanStatus& value) { m_status = value; }
    inline void SetStatus(ResourceScanStatus&& value) { m_status = std::move(value); }
    inline DescribeResourceScanResult& WithStatus(const ResourceScanStatus& value) { SetStatus(value); return *this;}
    inline DescribeResourceScanResult& WithStatus(ResourceScanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource scan status, providing more information if a
     * failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline DescribeResourceScanResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DescribeResourceScanResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DescribeResourceScanResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeResourceScanResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeResourceScanResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the resource scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeResourceScanResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeResourceScanResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the resource scan that has been completed.</p>
     */
    inline double GetPercentageCompleted() const{ return m_percentageCompleted; }
    inline void SetPercentageCompleted(double value) { m_percentageCompleted = value; }
    inline DescribeResourceScanResult& WithPercentageCompleted(double value) { SetPercentageCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource types for the specified scan. Resource types are only
     * available for scans with a <code>Status</code> set to <code>COMPLETE</code> or
     * <code>FAILED </code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypes = std::move(value); }
    inline DescribeResourceScanResult& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline DescribeResourceScanResult& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline DescribeResourceScanResult& AddResourceTypes(const Aws::String& value) { m_resourceTypes.push_back(value); return *this; }
    inline DescribeResourceScanResult& AddResourceTypes(Aws::String&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }
    inline DescribeResourceScanResult& AddResourceTypes(const char* value) { m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of resources that were listed. This is only available for scans
     * with a <code>Status</code> set to <code>COMPLETE</code>, <code>EXPIRED</code>,
     * or <code>FAILED </code>.</p>
     */
    inline int GetResourcesScanned() const{ return m_resourcesScanned; }
    inline void SetResourcesScanned(int value) { m_resourcesScanned = value; }
    inline DescribeResourceScanResult& WithResourcesScanned(int value) { SetResourcesScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that were read. This is only available for scans with
     * a <code>Status</code> set to <code>COMPLETE</code>, <code>EXPIRED</code>, or
     * <code>FAILED </code>.</p>  <p>This field may be 0 if the resource scan
     * failed with a <code>ResourceScanLimitExceededException</code>.</p> 
     */
    inline int GetResourcesRead() const{ return m_resourcesRead; }
    inline void SetResourcesRead(int value) { m_resourcesRead = value; }
    inline DescribeResourceScanResult& WithResourcesRead(int value) { SetResourcesRead(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeResourceScanResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeResourceScanResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;

    ResourceScanStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    double m_percentageCompleted;

    Aws::Vector<Aws::String> m_resourceTypes;

    int m_resourcesScanned;

    int m_resourcesRead;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
