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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionVersionSummary.h>
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
  class AWS_PERSONALIZE_API ListSolutionVersionsResult
  {
  public:
    ListSolutionVersionsResult();
    ListSolutionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSolutionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline const Aws::Vector<SolutionVersionSummary>& GetSolutionVersions() const{ return m_solutionVersions; }

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline void SetSolutionVersions(const Aws::Vector<SolutionVersionSummary>& value) { m_solutionVersions = value; }

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline void SetSolutionVersions(Aws::Vector<SolutionVersionSummary>&& value) { m_solutionVersions = std::move(value); }

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline ListSolutionVersionsResult& WithSolutionVersions(const Aws::Vector<SolutionVersionSummary>& value) { SetSolutionVersions(value); return *this;}

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline ListSolutionVersionsResult& WithSolutionVersions(Aws::Vector<SolutionVersionSummary>&& value) { SetSolutionVersions(std::move(value)); return *this;}

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline ListSolutionVersionsResult& AddSolutionVersions(const SolutionVersionSummary& value) { m_solutionVersions.push_back(value); return *this; }

    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline ListSolutionVersionsResult& AddSolutionVersions(SolutionVersionSummary&& value) { m_solutionVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline ListSolutionVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline ListSolutionVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline ListSolutionVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SolutionVersionSummary> m_solutionVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
