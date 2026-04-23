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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/InsightResults.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API GetInsightResultsResult
  {
  public:
    GetInsightResultsResult();
    GetInsightResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInsightResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline const InsightResults& GetInsightResults() const{ return m_insightResults; }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline void SetInsightResults(const InsightResults& value) { m_insightResults = value; }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline void SetInsightResults(InsightResults&& value) { m_insightResults = std::move(value); }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline GetInsightResultsResult& WithInsightResults(const InsightResults& value) { SetInsightResults(value); return *this;}

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline GetInsightResultsResult& WithInsightResults(InsightResults&& value) { SetInsightResults(std::move(value)); return *this;}

  private:

    InsightResults m_insightResults;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
