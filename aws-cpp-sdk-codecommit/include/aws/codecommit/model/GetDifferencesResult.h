/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDifferencesResult
  {
  public:
    AWS_CODECOMMIT_API GetDifferencesResult();
    AWS_CODECOMMIT_API GetDifferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetDifferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline const Aws::Vector<Difference>& GetDifferences() const{ return m_differences; }

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline void SetDifferences(const Aws::Vector<Difference>& value) { m_differences = value; }

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline void SetDifferences(Aws::Vector<Difference>&& value) { m_differences = std::move(value); }

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline GetDifferencesResult& WithDifferences(const Aws::Vector<Difference>& value) { SetDifferences(value); return *this;}

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline GetDifferencesResult& WithDifferences(Aws::Vector<Difference>&& value) { SetDifferences(std::move(value)); return *this;}

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
     */
    inline GetDifferencesResult& AddDifferences(const Difference& value) { m_differences.push_back(value); return *this; }

    /**
     * <p>A data type object that contains information about the differences, including
     * whether the difference is added, modified, or deleted (A, D, M).</p>
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
