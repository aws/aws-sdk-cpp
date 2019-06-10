/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API GetSolutionMetricsResult
  {
  public:
    GetSolutionMetricsResult();
    GetSolutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSolutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The metrics for the solution version.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metrics = value; }

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline GetSolutionMetricsResult& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline GetSolutionMetricsResult& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(const Aws::String& key, double value) { m_metrics.emplace(key, value); return *this; }

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(Aws::String&& key, double value) { m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metrics for the solution version.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(const char* key, double value) { m_metrics.emplace(key, value); return *this; }

  private:

    Aws::String m_solutionVersionArn;

    Aws::Map<Aws::String, double> m_metrics;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
