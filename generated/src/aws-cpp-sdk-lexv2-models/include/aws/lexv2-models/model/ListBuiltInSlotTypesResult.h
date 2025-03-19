/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BuiltInSlotTypeSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListBuiltInSlotTypesResult
  {
  public:
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult() = default;
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the built-in slot types that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more slot types
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BuiltInSlotTypeSummary>& GetBuiltInSlotTypeSummaries() const { return m_builtInSlotTypeSummaries; }
    template<typename BuiltInSlotTypeSummariesT = Aws::Vector<BuiltInSlotTypeSummary>>
    void SetBuiltInSlotTypeSummaries(BuiltInSlotTypeSummariesT&& value) { m_builtInSlotTypeSummariesHasBeenSet = true; m_builtInSlotTypeSummaries = std::forward<BuiltInSlotTypeSummariesT>(value); }
    template<typename BuiltInSlotTypeSummariesT = Aws::Vector<BuiltInSlotTypeSummary>>
    ListBuiltInSlotTypesResult& WithBuiltInSlotTypeSummaries(BuiltInSlotTypeSummariesT&& value) { SetBuiltInSlotTypeSummaries(std::forward<BuiltInSlotTypeSummariesT>(value)); return *this;}
    template<typename BuiltInSlotTypeSummariesT = BuiltInSlotTypeSummary>
    ListBuiltInSlotTypesResult& AddBuiltInSlotTypeSummaries(BuiltInSlotTypeSummariesT&& value) { m_builtInSlotTypeSummariesHasBeenSet = true; m_builtInSlotTypeSummaries.emplace_back(std::forward<BuiltInSlotTypeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBuiltInSlotTypes</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>LIstBuiltInSlotTypes</code>
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBuiltInSlotTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale of the slot types in the list.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    ListBuiltInSlotTypesResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBuiltInSlotTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BuiltInSlotTypeSummary> m_builtInSlotTypeSummaries;
    bool m_builtInSlotTypeSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
