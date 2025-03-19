/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AuditManager
{
namespace Model
{
  class ListKeywordsForDataSourceResult
  {
  public:
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult() = default;
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of keywords for the control mapping source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const { return m_keywords; }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    ListKeywordsForDataSourceResult& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    ListKeywordsForDataSourceResult& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKeywordsForDataSourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKeywordsForDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
