/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DefaultVocabulary.h>
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
namespace Connect
{
namespace Model
{
  class ListDefaultVocabulariesResult
  {
  public:
    AWS_CONNECT_API ListDefaultVocabulariesResult() = default;
    AWS_CONNECT_API ListDefaultVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListDefaultVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of default vocabularies.</p>
     */
    inline const Aws::Vector<DefaultVocabulary>& GetDefaultVocabularyList() const { return m_defaultVocabularyList; }
    template<typename DefaultVocabularyListT = Aws::Vector<DefaultVocabulary>>
    void SetDefaultVocabularyList(DefaultVocabularyListT&& value) { m_defaultVocabularyListHasBeenSet = true; m_defaultVocabularyList = std::forward<DefaultVocabularyListT>(value); }
    template<typename DefaultVocabularyListT = Aws::Vector<DefaultVocabulary>>
    ListDefaultVocabulariesResult& WithDefaultVocabularyList(DefaultVocabularyListT&& value) { SetDefaultVocabularyList(std::forward<DefaultVocabularyListT>(value)); return *this;}
    template<typename DefaultVocabularyListT = DefaultVocabulary>
    ListDefaultVocabulariesResult& AddDefaultVocabularyList(DefaultVocabularyListT&& value) { m_defaultVocabularyListHasBeenSet = true; m_defaultVocabularyList.emplace_back(std::forward<DefaultVocabularyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDefaultVocabulariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDefaultVocabulariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DefaultVocabulary> m_defaultVocabularyList;
    bool m_defaultVocabularyListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
