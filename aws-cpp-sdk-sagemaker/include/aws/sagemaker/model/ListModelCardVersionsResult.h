/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardVersionSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListModelCardVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardVersionsResult();
    AWS_SAGEMAKER_API ListModelCardVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline const Aws::Vector<ModelCardVersionSummary>& GetModelCardVersionSummaryList() const{ return m_modelCardVersionSummaryList; }

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline void SetModelCardVersionSummaryList(const Aws::Vector<ModelCardVersionSummary>& value) { m_modelCardVersionSummaryList = value; }

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline void SetModelCardVersionSummaryList(Aws::Vector<ModelCardVersionSummary>&& value) { m_modelCardVersionSummaryList = std::move(value); }

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline ListModelCardVersionsResult& WithModelCardVersionSummaryList(const Aws::Vector<ModelCardVersionSummary>& value) { SetModelCardVersionSummaryList(value); return *this;}

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline ListModelCardVersionsResult& WithModelCardVersionSummaryList(Aws::Vector<ModelCardVersionSummary>&& value) { SetModelCardVersionSummaryList(std::move(value)); return *this;}

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline ListModelCardVersionsResult& AddModelCardVersionSummaryList(const ModelCardVersionSummary& value) { m_modelCardVersionSummaryList.push_back(value); return *this; }

    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline ListModelCardVersionsResult& AddModelCardVersionSummaryList(ModelCardVersionSummary&& value) { m_modelCardVersionSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline ListModelCardVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline ListModelCardVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline ListModelCardVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelCardVersionSummary> m_modelCardVersionSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
