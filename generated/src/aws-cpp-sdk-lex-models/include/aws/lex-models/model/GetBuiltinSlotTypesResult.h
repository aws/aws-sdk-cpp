/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BuiltinSlotTypeMetadata.h>
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
  class GetBuiltinSlotTypesResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinSlotTypesResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline const Aws::Vector<BuiltinSlotTypeMetadata>& GetSlotTypes() const { return m_slotTypes; }
    template<typename SlotTypesT = Aws::Vector<BuiltinSlotTypeMetadata>>
    void SetSlotTypes(SlotTypesT&& value) { m_slotTypesHasBeenSet = true; m_slotTypes = std::forward<SlotTypesT>(value); }
    template<typename SlotTypesT = Aws::Vector<BuiltinSlotTypeMetadata>>
    GetBuiltinSlotTypesResult& WithSlotTypes(SlotTypesT&& value) { SetSlotTypes(std::forward<SlotTypesT>(value)); return *this;}
    template<typename SlotTypesT = BuiltinSlotTypeMetadata>
    GetBuiltinSlotTypesResult& AddSlotTypes(SlotTypesT&& value) { m_slotTypesHasBeenSet = true; m_slotTypes.emplace_back(std::forward<SlotTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBuiltinSlotTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBuiltinSlotTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BuiltinSlotTypeMetadata> m_slotTypes;
    bool m_slotTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
