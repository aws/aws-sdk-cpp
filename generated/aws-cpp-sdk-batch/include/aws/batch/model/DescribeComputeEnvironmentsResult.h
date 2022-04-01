﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ComputeEnvironmentDetail.h>
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
namespace Batch
{
namespace Model
{
  class AWS_BATCH_API DescribeComputeEnvironmentsResult
  {
  public:
    DescribeComputeEnvironmentsResult();
    DescribeComputeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComputeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of compute environments.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentDetail>& GetComputeEnvironments() const{ return m_computeEnvironments; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline void SetComputeEnvironments(const Aws::Vector<ComputeEnvironmentDetail>& value) { m_computeEnvironments = value; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline void SetComputeEnvironments(Aws::Vector<ComputeEnvironmentDetail>&& value) { m_computeEnvironments = std::move(value); }

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithComputeEnvironments(const Aws::Vector<ComputeEnvironmentDetail>& value) { SetComputeEnvironments(value); return *this;}

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithComputeEnvironments(Aws::Vector<ComputeEnvironmentDetail>&& value) { SetComputeEnvironments(std::move(value)); return *this;}

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& AddComputeEnvironments(const ComputeEnvironmentDetail& value) { m_computeEnvironments.push_back(value); return *this; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& AddComputeEnvironments(ComputeEnvironmentDetail&& value) { m_computeEnvironments.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComputeEnvironmentDetail> m_computeEnvironments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
