/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceSchedulerSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListInferenceSchedulersResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult();
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline const Aws::Vector<InferenceSchedulerSummary>& GetInferenceSchedulerSummaries() const{ return m_inferenceSchedulerSummaries; }

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline void SetInferenceSchedulerSummaries(const Aws::Vector<InferenceSchedulerSummary>& value) { m_inferenceSchedulerSummaries = value; }

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline void SetInferenceSchedulerSummaries(Aws::Vector<InferenceSchedulerSummary>&& value) { m_inferenceSchedulerSummaries = std::move(value); }

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline ListInferenceSchedulersResult& WithInferenceSchedulerSummaries(const Aws::Vector<InferenceSchedulerSummary>& value) { SetInferenceSchedulerSummaries(value); return *this;}

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline ListInferenceSchedulersResult& WithInferenceSchedulerSummaries(Aws::Vector<InferenceSchedulerSummary>&& value) { SetInferenceSchedulerSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline ListInferenceSchedulersResult& AddInferenceSchedulerSummaries(const InferenceSchedulerSummary& value) { m_inferenceSchedulerSummaries.push_back(value); return *this; }

    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline ListInferenceSchedulersResult& AddInferenceSchedulerSummaries(InferenceSchedulerSummary&& value) { m_inferenceSchedulerSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<InferenceSchedulerSummary> m_inferenceSchedulerSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
