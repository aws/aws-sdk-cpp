/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AnalyzedResourceSummary.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListAnalyzedResourcesResult
  {
  public:
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult();
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline const Aws::Vector<AnalyzedResourceSummary>& GetAnalyzedResources() const{ return m_analyzedResources; }

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline void SetAnalyzedResources(const Aws::Vector<AnalyzedResourceSummary>& value) { m_analyzedResources = value; }

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline void SetAnalyzedResources(Aws::Vector<AnalyzedResourceSummary>&& value) { m_analyzedResources = std::move(value); }

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline ListAnalyzedResourcesResult& WithAnalyzedResources(const Aws::Vector<AnalyzedResourceSummary>& value) { SetAnalyzedResources(value); return *this;}

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline ListAnalyzedResourcesResult& WithAnalyzedResources(Aws::Vector<AnalyzedResourceSummary>&& value) { SetAnalyzedResources(std::move(value)); return *this;}

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline ListAnalyzedResourcesResult& AddAnalyzedResources(const AnalyzedResourceSummary& value) { m_analyzedResources.push_back(value); return *this; }

    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline ListAnalyzedResourcesResult& AddAnalyzedResources(AnalyzedResourceSummary&& value) { m_analyzedResources.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAnalyzedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAnalyzedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAnalyzedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnalyzedResourceSummary> m_analyzedResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
