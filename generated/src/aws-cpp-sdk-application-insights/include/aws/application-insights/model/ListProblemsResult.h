/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Problem.h>
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
  class ListProblemsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListProblemsResult();
    AWS_APPLICATIONINSIGHTS_API ListProblemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListProblemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of problems. </p>
     */
    inline const Aws::Vector<Problem>& GetProblemList() const{ return m_problemList; }

    /**
     * <p>The list of problems. </p>
     */
    inline void SetProblemList(const Aws::Vector<Problem>& value) { m_problemList = value; }

    /**
     * <p>The list of problems. </p>
     */
    inline void SetProblemList(Aws::Vector<Problem>&& value) { m_problemList = std::move(value); }

    /**
     * <p>The list of problems. </p>
     */
    inline ListProblemsResult& WithProblemList(const Aws::Vector<Problem>& value) { SetProblemList(value); return *this;}

    /**
     * <p>The list of problems. </p>
     */
    inline ListProblemsResult& WithProblemList(Aws::Vector<Problem>&& value) { SetProblemList(std::move(value)); return *this;}

    /**
     * <p>The list of problems. </p>
     */
    inline ListProblemsResult& AddProblemList(const Problem& value) { m_problemList.push_back(value); return *this; }

    /**
     * <p>The list of problems. </p>
     */
    inline ListProblemsResult& AddProblemList(Problem&& value) { m_problemList.push_back(std::move(value)); return *this; }


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
    inline ListProblemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProblemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProblemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The name of the resource group. </p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p> The name of the resource group. </p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupName = value; }

    /**
     * <p> The name of the resource group. </p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupName = std::move(value); }

    /**
     * <p> The name of the resource group. </p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupName.assign(value); }

    /**
     * <p> The name of the resource group. </p>
     */
    inline ListProblemsResult& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p> The name of the resource group. </p>
     */
    inline ListProblemsResult& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the resource group. </p>
     */
    inline ListProblemsResult& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}

  private:

    Aws::Vector<Problem> m_problemList;

    Aws::String m_nextToken;

    Aws::String m_resourceGroupName;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
