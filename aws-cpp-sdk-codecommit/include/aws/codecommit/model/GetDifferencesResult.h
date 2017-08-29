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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Difference.h>
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
namespace CodeCommit
{
namespace Model
{
  class AWS_CODECOMMIT_API GetDifferencesResult
  {
  public:
    GetDifferencesResult();
    GetDifferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDifferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline const Aws::Vector<Difference>& GetDifferences() const{ return m_differences; }

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline void SetDifferences(const Aws::Vector<Difference>& value) { m_differences = value; }

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline void SetDifferences(Aws::Vector<Difference>&& value) { m_differences = std::move(value); }

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline GetDifferencesResult& WithDifferences(const Aws::Vector<Difference>& value) { SetDifferences(value); return *this;}

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline GetDifferencesResult& WithDifferences(Aws::Vector<Difference>&& value) { SetDifferences(std::move(value)); return *this;}

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline GetDifferencesResult& AddDifferences(const Difference& value) { m_differences.push_back(value); return *this; }

    /**
     * <p>A differences data type object that contains information about the
     * differences, including whether the difference is added, modified, or deleted (A,
     * D, M).</p>
     */
    inline GetDifferencesResult& AddDifferences(Difference&& value) { m_differences.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetDifferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetDifferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetDifferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Difference> m_differences;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
