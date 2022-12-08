/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListLogPatternSetsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult();
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListLogPatternSetsResult& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListLogPatternSetsResult& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListLogPatternSetsResult& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The list of log pattern sets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPatternSets() const{ return m_logPatternSets; }

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline void SetLogPatternSets(const Aws::Vector<Aws::String>& value) { m_logPatternSets = value; }

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline void SetLogPatternSets(Aws::Vector<Aws::String>&& value) { m_logPatternSets = std::move(value); }

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline ListLogPatternSetsResult& WithLogPatternSets(const Aws::Vector<Aws::String>& value) { SetLogPatternSets(value); return *this;}

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline ListLogPatternSetsResult& WithLogPatternSets(Aws::Vector<Aws::String>&& value) { SetLogPatternSets(std::move(value)); return *this;}

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline ListLogPatternSetsResult& AddLogPatternSets(const Aws::String& value) { m_logPatternSets.push_back(value); return *this; }

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline ListLogPatternSetsResult& AddLogPatternSets(Aws::String&& value) { m_logPatternSets.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log pattern sets.</p>
     */
    inline ListLogPatternSetsResult& AddLogPatternSets(const char* value) { m_logPatternSets.push_back(value); return *this; }


    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListLogPatternSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListLogPatternSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListLogPatternSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceGroupName;

    Aws::Vector<Aws::String> m_logPatternSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
