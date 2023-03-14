/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemResponse.h>
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
namespace DynamoDB
{
namespace Model
{
  class TransactGetItemsResult
  {
  public:
    AWS_DYNAMODB_API TransactGetItemsResult();
    AWS_DYNAMODB_API TransactGetItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API TransactGetItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline void SetConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { m_consumedCapacity = value; }

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline void SetConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline TransactGetItemsResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline TransactGetItemsResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline TransactGetItemsResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline TransactGetItemsResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }


    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline const Aws::Vector<ItemResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline void SetResponses(const Aws::Vector<ItemResponse>& value) { m_responses = value; }

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline void SetResponses(Aws::Vector<ItemResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline TransactGetItemsResult& WithResponses(const Aws::Vector<ItemResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline TransactGetItemsResult& WithResponses(Aws::Vector<ItemResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline TransactGetItemsResult& AddResponses(const ItemResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline TransactGetItemsResult& AddResponses(ItemResponse&& value) { m_responses.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TransactGetItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TransactGetItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TransactGetItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;

    Aws::Vector<ItemResponse> m_responses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
