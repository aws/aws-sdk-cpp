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
  class AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypeVersionsResult
  {
  public:
    GetSlotTypeVersionsResult();
    GetSlotTypeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSlotTypeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline const Aws::Vector<SlotTypeMetadata>& GetSlotTypes() const{ return m_slotTypes; }

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline void SetSlotTypes(const Aws::Vector<SlotTypeMetadata>& value) { m_slotTypes = value; }

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline void SetSlotTypes(Aws::Vector<SlotTypeMetadata>&& value) { m_slotTypes = std::move(value); }

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetSlotTypeVersionsResult& WithSlotTypes(const Aws::Vector<SlotTypeMetadata>& value) { SetSlotTypes(value); return *this;}

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetSlotTypeVersionsResult& WithSlotTypes(Aws::Vector<SlotTypeMetadata>&& value) { SetSlotTypes(std::move(value)); return *this;}

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetSlotTypeVersionsResult& AddSlotTypes(const SlotTypeMetadata& value) { m_slotTypes.push_back(value); return *this; }

    /**
     * <p>An array of <code>SlotTypeMetadata</code> objects, one for each numbered
     * version of the slot type plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetSlotTypeVersionsResult& AddSlotTypes(SlotTypeMetadata&& value) { m_slotTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetSlotTypeVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetSlotTypeVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching the next page of slot type versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetSlotTypeVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SlotTypeMetadata> m_slotTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
