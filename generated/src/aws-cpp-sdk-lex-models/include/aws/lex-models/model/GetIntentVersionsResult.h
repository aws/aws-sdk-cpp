/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/IntentMetadata.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetIntentVersionsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>IntentMetadata</code> objects, one for each numbered
     * version of the intent plus one for the <code>$LATEST</code> version.</p>
     */
    inline const Aws::Vector<IntentMetadata>& GetIntents() const { return m_intents; }
    template<typename IntentsT = Aws::Vector<IntentMetadata>>
    void SetIntents(IntentsT&& value) { m_intentsHasBeenSet = true; m_intents = std::forward<IntentsT>(value); }
    template<typename IntentsT = Aws::Vector<IntentMetadata>>
    GetIntentVersionsResult& WithIntents(IntentsT&& value) { SetIntents(std::forward<IntentsT>(value)); return *this;}
    template<typename IntentsT = IntentMetadata>
    GetIntentVersionsResult& AddIntents(IntentsT&& value) { m_intentsHasBeenSet = true; m_intents.emplace_back(std::forward<IntentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIntentVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIntentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IntentMetadata> m_intents;
    bool m_intentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
