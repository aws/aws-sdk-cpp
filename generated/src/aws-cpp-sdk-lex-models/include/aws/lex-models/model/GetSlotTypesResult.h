/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/SlotTypeMetadata.h>
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
  class GetSlotTypesResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each slot type, that provides information such
     * as the name of the slot type, the version, and a description.</p>
     */
    inline const Aws::Vector<SlotTypeMetadata>& GetSlotTypes() const { return m_slotTypes; }
    template<typename SlotTypesT = Aws::Vector<SlotTypeMetadata>>
    void SetSlotTypes(SlotTypesT&& value) { m_slotTypesHasBeenSet = true; m_slotTypes = std::forward<SlotTypesT>(value); }
    template<typename SlotTypesT = Aws::Vector<SlotTypeMetadata>>
    GetSlotTypesResult& WithSlotTypes(SlotTypesT&& value) { SetSlotTypes(std::forward<SlotTypesT>(value)); return *this;}
    template<typename SlotTypesT = SlotTypeMetadata>
    GetSlotTypesResult& AddSlotTypes(SlotTypesT&& value) { m_slotTypesHasBeenSet = true; m_slotTypes.emplace_back(std::forward<SlotTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of slot types.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSlotTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSlotTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SlotTypeMetadata> m_slotTypes;
    bool m_slotTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
