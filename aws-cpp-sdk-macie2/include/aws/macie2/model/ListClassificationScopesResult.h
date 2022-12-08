/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/ClassificationScopeSummary.h>
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
namespace Macie2
{
namespace Model
{
  class ListClassificationScopesResult
  {
  public:
    AWS_MACIE2_API ListClassificationScopesResult();
    AWS_MACIE2_API ListClassificationScopesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListClassificationScopesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline const Aws::Vector<ClassificationScopeSummary>& GetClassificationScopes() const{ return m_classificationScopes; }

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline void SetClassificationScopes(const Aws::Vector<ClassificationScopeSummary>& value) { m_classificationScopes = value; }

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline void SetClassificationScopes(Aws::Vector<ClassificationScopeSummary>&& value) { m_classificationScopes = std::move(value); }

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline ListClassificationScopesResult& WithClassificationScopes(const Aws::Vector<ClassificationScopeSummary>& value) { SetClassificationScopes(value); return *this;}

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline ListClassificationScopesResult& WithClassificationScopes(Aws::Vector<ClassificationScopeSummary>&& value) { SetClassificationScopes(std::move(value)); return *this;}

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline ListClassificationScopesResult& AddClassificationScopes(const ClassificationScopeSummary& value) { m_classificationScopes.push_back(value); return *this; }

    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline ListClassificationScopesResult& AddClassificationScopes(ClassificationScopeSummary&& value) { m_classificationScopes.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationScopesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationScopesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationScopesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ClassificationScopeSummary> m_classificationScopes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
