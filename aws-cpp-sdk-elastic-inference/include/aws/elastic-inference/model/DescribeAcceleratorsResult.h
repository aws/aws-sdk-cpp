/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastic-inference/model/ElasticInferenceAccelerator.h>
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
namespace ElasticInference
{
namespace Model
{
  class DescribeAcceleratorsResult
  {
  public:
    AWS_ELASTICINFERENCE_API DescribeAcceleratorsResult();
    AWS_ELASTICINFERENCE_API DescribeAcceleratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICINFERENCE_API DescribeAcceleratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline const Aws::Vector<ElasticInferenceAccelerator>& GetAcceleratorSet() const{ return m_acceleratorSet; }

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline void SetAcceleratorSet(const Aws::Vector<ElasticInferenceAccelerator>& value) { m_acceleratorSet = value; }

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline void SetAcceleratorSet(Aws::Vector<ElasticInferenceAccelerator>&& value) { m_acceleratorSet = std::move(value); }

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline DescribeAcceleratorsResult& WithAcceleratorSet(const Aws::Vector<ElasticInferenceAccelerator>& value) { SetAcceleratorSet(value); return *this;}

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline DescribeAcceleratorsResult& WithAcceleratorSet(Aws::Vector<ElasticInferenceAccelerator>&& value) { SetAcceleratorSet(std::move(value)); return *this;}

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline DescribeAcceleratorsResult& AddAcceleratorSet(const ElasticInferenceAccelerator& value) { m_acceleratorSet.push_back(value); return *this; }

    /**
     * <p> The details of the Elastic Inference Accelerators. </p>
     */
    inline DescribeAcceleratorsResult& AddAcceleratorSet(ElasticInferenceAccelerator&& value) { m_acceleratorSet.push_back(std::move(value)); return *this; }


    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ElasticInferenceAccelerator> m_acceleratorSet;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
