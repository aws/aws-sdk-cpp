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
    AWS_MACIE2_API ListClassificationScopesResult() = default;
    AWS_MACIE2_API ListClassificationScopesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListClassificationScopesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that specifies the unique identifier and name of the classification
     * scope for the account.</p>
     */
    inline const Aws::Vector<ClassificationScopeSummary>& GetClassificationScopes() const { return m_classificationScopes; }
    template<typename ClassificationScopesT = Aws::Vector<ClassificationScopeSummary>>
    void SetClassificationScopes(ClassificationScopesT&& value) { m_classificationScopesHasBeenSet = true; m_classificationScopes = std::forward<ClassificationScopesT>(value); }
    template<typename ClassificationScopesT = Aws::Vector<ClassificationScopeSummary>>
    ListClassificationScopesResult& WithClassificationScopes(ClassificationScopesT&& value) { SetClassificationScopes(std::forward<ClassificationScopesT>(value)); return *this;}
    template<typename ClassificationScopesT = ClassificationScopeSummary>
    ListClassificationScopesResult& AddClassificationScopes(ClassificationScopesT&& value) { m_classificationScopesHasBeenSet = true; m_classificationScopes.emplace_back(std::forward<ClassificationScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClassificationScopesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClassificationScopesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClassificationScopeSummary> m_classificationScopes;
    bool m_classificationScopesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
