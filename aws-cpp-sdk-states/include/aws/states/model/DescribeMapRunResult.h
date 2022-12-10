/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/MapRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/MapRunItemCounts.h>
#include <aws/states/model/MapRunExecutionCounts.h>
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
namespace SFN
{
namespace Model
{
  class DescribeMapRunResult
  {
  public:
    AWS_SFN_API DescribeMapRunResult();
    AWS_SFN_API DescribeMapRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeMapRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline void SetMapRunArn(const char* value) { m_mapRunArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline DescribeMapRunResult& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline DescribeMapRunResult& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline DescribeMapRunResult& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline DescribeMapRunResult& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline DescribeMapRunResult& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline DescribeMapRunResult& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}


    /**
     * <p>The current status of the Map Run.</p>
     */
    inline const MapRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Map Run.</p>
     */
    inline void SetStatus(const MapRunStatus& value) { m_status = value; }

    /**
     * <p>The current status of the Map Run.</p>
     */
    inline void SetStatus(MapRunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the Map Run.</p>
     */
    inline DescribeMapRunResult& WithStatus(const MapRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Map Run.</p>
     */
    inline DescribeMapRunResult& WithStatus(MapRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }

    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }

    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline DescribeMapRunResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline DescribeMapRunResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }

    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDate = value; }

    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = std::move(value); }

    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline DescribeMapRunResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline DescribeMapRunResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}


    /**
     * <p>The maximum number of child workflow executions configured to run in parallel
     * for the Map Run at the same time.</p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of child workflow executions configured to run in parallel
     * for the Map Run at the same time.</p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrency = value; }

    /**
     * <p>The maximum number of child workflow executions configured to run in parallel
     * for the Map Run at the same time.</p>
     */
    inline DescribeMapRunResult& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum percentage of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline double GetToleratedFailurePercentage() const{ return m_toleratedFailurePercentage; }

    /**
     * <p>The maximum percentage of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline void SetToleratedFailurePercentage(double value) { m_toleratedFailurePercentage = value; }

    /**
     * <p>The maximum percentage of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline DescribeMapRunResult& WithToleratedFailurePercentage(double value) { SetToleratedFailurePercentage(value); return *this;}


    /**
     * <p>The maximum number of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline long long GetToleratedFailureCount() const{ return m_toleratedFailureCount; }

    /**
     * <p>The maximum number of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline void SetToleratedFailureCount(long long value) { m_toleratedFailureCount = value; }

    /**
     * <p>The maximum number of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline DescribeMapRunResult& WithToleratedFailureCount(long long value) { SetToleratedFailureCount(value); return *this;}


    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline const MapRunItemCounts& GetItemCounts() const{ return m_itemCounts; }

    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline void SetItemCounts(const MapRunItemCounts& value) { m_itemCounts = value; }

    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline void SetItemCounts(MapRunItemCounts&& value) { m_itemCounts = std::move(value); }

    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline DescribeMapRunResult& WithItemCounts(const MapRunItemCounts& value) { SetItemCounts(value); return *this;}

    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline DescribeMapRunResult& WithItemCounts(MapRunItemCounts&& value) { SetItemCounts(std::move(value)); return *this;}


    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline const MapRunExecutionCounts& GetExecutionCounts() const{ return m_executionCounts; }

    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline void SetExecutionCounts(const MapRunExecutionCounts& value) { m_executionCounts = value; }

    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline void SetExecutionCounts(MapRunExecutionCounts&& value) { m_executionCounts = std::move(value); }

    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline DescribeMapRunResult& WithExecutionCounts(const MapRunExecutionCounts& value) { SetExecutionCounts(value); return *this;}

    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline DescribeMapRunResult& WithExecutionCounts(MapRunExecutionCounts&& value) { SetExecutionCounts(std::move(value)); return *this;}

  private:

    Aws::String m_mapRunArn;

    Aws::String m_executionArn;

    MapRunStatus m_status;

    Aws::Utils::DateTime m_startDate;

    Aws::Utils::DateTime m_stopDate;

    int m_maxConcurrency;

    double m_toleratedFailurePercentage;

    long long m_toleratedFailureCount;

    MapRunItemCounts m_itemCounts;

    MapRunExecutionCounts m_executionCounts;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
