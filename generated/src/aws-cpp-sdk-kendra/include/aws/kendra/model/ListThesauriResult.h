/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ThesaurusSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListThesauriResult
  {
  public:
    AWS_KENDRA_API ListThesauriResult() = default;
    AWS_KENDRA_API ListThesauriResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListThesauriResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThesauriResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline const Aws::Vector<ThesaurusSummary>& GetThesaurusSummaryItems() const { return m_thesaurusSummaryItems; }
    template<typename ThesaurusSummaryItemsT = Aws::Vector<ThesaurusSummary>>
    void SetThesaurusSummaryItems(ThesaurusSummaryItemsT&& value) { m_thesaurusSummaryItemsHasBeenSet = true; m_thesaurusSummaryItems = std::forward<ThesaurusSummaryItemsT>(value); }
    template<typename ThesaurusSummaryItemsT = Aws::Vector<ThesaurusSummary>>
    ListThesauriResult& WithThesaurusSummaryItems(ThesaurusSummaryItemsT&& value) { SetThesaurusSummaryItems(std::forward<ThesaurusSummaryItemsT>(value)); return *this;}
    template<typename ThesaurusSummaryItemsT = ThesaurusSummary>
    ListThesauriResult& AddThesaurusSummaryItems(ThesaurusSummaryItemsT&& value) { m_thesaurusSummaryItemsHasBeenSet = true; m_thesaurusSummaryItems.emplace_back(std::forward<ThesaurusSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThesauriResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ThesaurusSummary> m_thesaurusSummaryItems;
    bool m_thesaurusSummaryItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
