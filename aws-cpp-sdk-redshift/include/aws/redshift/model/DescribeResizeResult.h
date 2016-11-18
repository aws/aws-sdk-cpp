﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>

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
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes the result of a cluster resize operation.</p>
   */
  class AWS_REDSHIFT_API DescribeResizeResult
  {
  public:
    DescribeResizeResult();
    DescribeResizeResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeResizeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline const Aws::String& GetTargetNodeType() const{ return m_targetNodeType; }

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline void SetTargetNodeType(const Aws::String& value) { m_targetNodeType = value; }

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline void SetTargetNodeType(Aws::String&& value) { m_targetNodeType = value; }

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline void SetTargetNodeType(const char* value) { m_targetNodeType.assign(value); }

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline DescribeResizeResult& WithTargetNodeType(const Aws::String& value) { SetTargetNodeType(value); return *this;}

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline DescribeResizeResult& WithTargetNodeType(Aws::String&& value) { SetTargetNodeType(value); return *this;}

    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline DescribeResizeResult& WithTargetNodeType(const char* value) { SetTargetNodeType(value); return *this;}

    /**
     * <p>The number of nodes that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline int GetTargetNumberOfNodes() const{ return m_targetNumberOfNodes; }

    /**
     * <p>The number of nodes that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline void SetTargetNumberOfNodes(int value) { m_targetNumberOfNodes = value; }

    /**
     * <p>The number of nodes that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline DescribeResizeResult& WithTargetNumberOfNodes(int value) { SetTargetNumberOfNodes(value); return *this;}

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline const Aws::String& GetTargetClusterType() const{ return m_targetClusterType; }

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline void SetTargetClusterType(const Aws::String& value) { m_targetClusterType = value; }

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline void SetTargetClusterType(Aws::String&& value) { m_targetClusterType = value; }

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline void SetTargetClusterType(const char* value) { m_targetClusterType.assign(value); }

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline DescribeResizeResult& WithTargetClusterType(const Aws::String& value) { SetTargetClusterType(value); return *this;}

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline DescribeResizeResult& WithTargetClusterType(Aws::String&& value) { SetTargetClusterType(value); return *this;}

    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline DescribeResizeResult& WithTargetClusterType(const char* value) { SetTargetClusterType(value); return *this;}

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = value; }

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline DescribeResizeResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline DescribeResizeResult& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> </p>
     */
    inline DescribeResizeResult& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesCompleted() const{ return m_importTablesCompleted; }

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline void SetImportTablesCompleted(const Aws::Vector<Aws::String>& value) { m_importTablesCompleted = value; }

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline void SetImportTablesCompleted(Aws::Vector<Aws::String>&& value) { m_importTablesCompleted = value; }

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& WithImportTablesCompleted(const Aws::Vector<Aws::String>& value) { SetImportTablesCompleted(value); return *this;}

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& WithImportTablesCompleted(Aws::Vector<Aws::String>&& value) { SetImportTablesCompleted(value); return *this;}

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesCompleted(const Aws::String& value) { m_importTablesCompleted.push_back(value); return *this; }

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesCompleted(Aws::String&& value) { m_importTablesCompleted.push_back(value); return *this; }

    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesCompleted(const char* value) { m_importTablesCompleted.push_back(value); return *this; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesInProgress() const{ return m_importTablesInProgress; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline void SetImportTablesInProgress(const Aws::Vector<Aws::String>& value) { m_importTablesInProgress = value; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline void SetImportTablesInProgress(Aws::Vector<Aws::String>&& value) { m_importTablesInProgress = value; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& WithImportTablesInProgress(const Aws::Vector<Aws::String>& value) { SetImportTablesInProgress(value); return *this;}

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& WithImportTablesInProgress(Aws::Vector<Aws::String>&& value) { SetImportTablesInProgress(value); return *this;}

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesInProgress(const Aws::String& value) { m_importTablesInProgress.push_back(value); return *this; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesInProgress(Aws::String&& value) { m_importTablesInProgress.push_back(value); return *this; }

    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline DescribeResizeResult& AddImportTablesInProgress(const char* value) { m_importTablesInProgress.push_back(value); return *this; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesNotStarted() const{ return m_importTablesNotStarted; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline void SetImportTablesNotStarted(const Aws::Vector<Aws::String>& value) { m_importTablesNotStarted = value; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline void SetImportTablesNotStarted(Aws::Vector<Aws::String>&& value) { m_importTablesNotStarted = value; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline DescribeResizeResult& WithImportTablesNotStarted(const Aws::Vector<Aws::String>& value) { SetImportTablesNotStarted(value); return *this;}

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline DescribeResizeResult& WithImportTablesNotStarted(Aws::Vector<Aws::String>&& value) { SetImportTablesNotStarted(value); return *this;}

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline DescribeResizeResult& AddImportTablesNotStarted(const Aws::String& value) { m_importTablesNotStarted.push_back(value); return *this; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline DescribeResizeResult& AddImportTablesNotStarted(Aws::String&& value) { m_importTablesNotStarted.push_back(value); return *this; }

    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline DescribeResizeResult& AddImportTablesNotStarted(const char* value) { m_importTablesNotStarted.push_back(value); return *this; }

    /**
     * <p>The average rate of the resize operation over the last few minutes, measured
     * in megabytes per second. After the resize operation completes, this value shows
     * the average rate of the entire resize operation.</p>
     */
    inline double GetAvgResizeRateInMegaBytesPerSecond() const{ return m_avgResizeRateInMegaBytesPerSecond; }

    /**
     * <p>The average rate of the resize operation over the last few minutes, measured
     * in megabytes per second. After the resize operation completes, this value shows
     * the average rate of the entire resize operation.</p>
     */
    inline void SetAvgResizeRateInMegaBytesPerSecond(double value) { m_avgResizeRateInMegaBytesPerSecond = value; }

    /**
     * <p>The average rate of the resize operation over the last few minutes, measured
     * in megabytes per second. After the resize operation completes, this value shows
     * the average rate of the entire resize operation.</p>
     */
    inline DescribeResizeResult& WithAvgResizeRateInMegaBytesPerSecond(double value) { SetAvgResizeRateInMegaBytesPerSecond(value); return *this;}

    /**
     * <p>The estimated total amount of data, in megabytes, on the cluster before the
     * resize operation began.</p>
     */
    inline long long GetTotalResizeDataInMegaBytes() const{ return m_totalResizeDataInMegaBytes; }

    /**
     * <p>The estimated total amount of data, in megabytes, on the cluster before the
     * resize operation began.</p>
     */
    inline void SetTotalResizeDataInMegaBytes(long long value) { m_totalResizeDataInMegaBytes = value; }

    /**
     * <p>The estimated total amount of data, in megabytes, on the cluster before the
     * resize operation began.</p>
     */
    inline DescribeResizeResult& WithTotalResizeDataInMegaBytes(long long value) { SetTotalResizeDataInMegaBytes(value); return *this;}

    /**
     * <p>While the resize operation is in progress, this value shows the current
     * amount of data, in megabytes, that has been processed so far. When the resize
     * operation is complete, this value shows the total amount of data, in megabytes,
     * on the cluster, which may be more or less than TotalResizeDataInMegaBytes (the
     * estimated total amount of data before resize).</p>
     */
    inline long long GetProgressInMegaBytes() const{ return m_progressInMegaBytes; }

    /**
     * <p>While the resize operation is in progress, this value shows the current
     * amount of data, in megabytes, that has been processed so far. When the resize
     * operation is complete, this value shows the total amount of data, in megabytes,
     * on the cluster, which may be more or less than TotalResizeDataInMegaBytes (the
     * estimated total amount of data before resize).</p>
     */
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytes = value; }

    /**
     * <p>While the resize operation is in progress, this value shows the current
     * amount of data, in megabytes, that has been processed so far. When the resize
     * operation is complete, this value shows the total amount of data, in megabytes,
     * on the cluster, which may be more or less than TotalResizeDataInMegaBytes (the
     * estimated total amount of data before resize).</p>
     */
    inline DescribeResizeResult& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}

    /**
     * <p>The amount of seconds that have elapsed since the resize operation began.
     * After the resize operation completes, this value shows the total actual time, in
     * seconds, for the resize operation.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>The amount of seconds that have elapsed since the resize operation began.
     * After the resize operation completes, this value shows the total actual time, in
     * seconds, for the resize operation.</p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSeconds = value; }

    /**
     * <p>The amount of seconds that have elapsed since the resize operation began.
     * After the resize operation completes, this value shows the total actual time, in
     * seconds, for the resize operation.</p>
     */
    inline DescribeResizeResult& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}

    /**
     * <p>The estimated time remaining, in seconds, until the resize operation is
     * complete. This value is calculated based on the average resize rate and the
     * estimated amount of data remaining to be processed. Once the resize operation is
     * complete, this value will be 0.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const{ return m_estimatedTimeToCompletionInSeconds; }

    /**
     * <p>The estimated time remaining, in seconds, until the resize operation is
     * complete. This value is calculated based on the average resize rate and the
     * estimated amount of data remaining to be processed. Once the resize operation is
     * complete, this value will be 0.</p>
     */
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSeconds = value; }

    /**
     * <p>The estimated time remaining, in seconds, until the resize operation is
     * complete. This value is calculated based on the average resize rate and the
     * estimated amount of data remaining to be processed. Once the resize operation is
     * complete, this value will be 0.</p>
     */
    inline DescribeResizeResult& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeResizeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeResizeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_targetNodeType;
    int m_targetNumberOfNodes;
    Aws::String m_targetClusterType;
    Aws::String m_status;
    Aws::Vector<Aws::String> m_importTablesCompleted;
    Aws::Vector<Aws::String> m_importTablesInProgress;
    Aws::Vector<Aws::String> m_importTablesNotStarted;
    double m_avgResizeRateInMegaBytesPerSecond;
    long long m_totalResizeDataInMegaBytes;
    long long m_progressInMegaBytes;
    long long m_elapsedTimeInSeconds;
    long long m_estimatedTimeToCompletionInSeconds;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws