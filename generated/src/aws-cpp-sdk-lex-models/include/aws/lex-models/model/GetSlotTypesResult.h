﻿/**
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
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each slot type, that provides information such
     * as the name of the slot type, the version, and a description.</p>
     */
    inline const Aws::Vector<SlotTypeMetadata>& GetSlotTypes() const{ return m_slotTypes; }
    inline void SetSlotTypes(const Aws::Vector<SlotTypeMetadata>& value) { m_slotTypes = value; }
    inline void SetSlotTypes(Aws::Vector<SlotTypeMetadata>&& value) { m_slotTypes = std::move(value); }
    inline GetSlotTypesResult& WithSlotTypes(const Aws::Vector<SlotTypeMetadata>& value) { SetSlotTypes(value); return *this;}
    inline GetSlotTypesResult& WithSlotTypes(Aws::Vector<SlotTypeMetadata>&& value) { SetSlotTypes(std::move(value)); return *this;}
    inline GetSlotTypesResult& AddSlotTypes(const SlotTypeMetadata& value) { m_slotTypes.push_back(value); return *this; }
    inline GetSlotTypesResult& AddSlotTypes(SlotTypeMetadata&& value) { m_slotTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of slot types.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetSlotTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSlotTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSlotTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSlotTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSlotTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSlotTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SlotTypeMetadata> m_slotTypes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
