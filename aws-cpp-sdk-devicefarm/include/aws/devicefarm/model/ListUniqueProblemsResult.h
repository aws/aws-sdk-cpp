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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/UniqueProblem.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list unique problems request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblemsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListUniqueProblemsResult
  {
  public:
    ListUniqueProblemsResult();
    ListUniqueProblemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUniqueProblemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& GetUniqueProblems() const{ return m_uniqueProblems; }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline void SetUniqueProblems(const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& value) { m_uniqueProblems = value; }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline void SetUniqueProblems(Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>&& value) { m_uniqueProblems = std::move(value); }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& WithUniqueProblems(const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& value) { SetUniqueProblems(value); return *this;}

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& WithUniqueProblems(Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>&& value) { SetUniqueProblems(std::move(value)); return *this;}

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& AddUniqueProblems(const ExecutionResult& key, const Aws::Vector<UniqueProblem>& value) { m_uniqueProblems.emplace(key, value); return *this; }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& AddUniqueProblems(ExecutionResult&& key, const Aws::Vector<UniqueProblem>& value) { m_uniqueProblems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& AddUniqueProblems(const ExecutionResult& key, Aws::Vector<UniqueProblem>&& value) { m_uniqueProblems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline ListUniqueProblemsResult& AddUniqueProblems(ExecutionResult&& key, Aws::Vector<UniqueProblem>&& value) { m_uniqueProblems.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUniqueProblemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUniqueProblemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUniqueProblemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>> m_uniqueProblems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
