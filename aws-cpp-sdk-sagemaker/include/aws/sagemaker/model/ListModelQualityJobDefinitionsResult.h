/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringJobDefinitionSummary.h>
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
  class ListModelQualityJobDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelQualityJobDefinitionsResult();
    AWS_SAGEMAKER_API ListModelQualityJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelQualityJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline const Aws::Vector<MonitoringJobDefinitionSummary>& GetJobDefinitionSummaries() const{ return m_jobDefinitionSummaries; }

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline void SetJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { m_jobDefinitionSummaries = value; }

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline void SetJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { m_jobDefinitionSummaries = std::move(value); }

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline ListModelQualityJobDefinitionsResult& WithJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { SetJobDefinitionSummaries(value); return *this;}

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline ListModelQualityJobDefinitionsResult& WithJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { SetJobDefinitionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline ListModelQualityJobDefinitionsResult& AddJobDefinitionSummaries(const MonitoringJobDefinitionSummary& value) { m_jobDefinitionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of summaries of model quality monitoring job definitions.</p>
     */
    inline ListModelQualityJobDefinitionsResult& AddJobDefinitionSummaries(MonitoringJobDefinitionSummary&& value) { m_jobDefinitionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline ListModelQualityJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline ListModelQualityJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of model quality monitoring job definitions, use it in the
     * next request.</p>
     */
    inline ListModelQualityJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitoringJobDefinitionSummary> m_jobDefinitionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
