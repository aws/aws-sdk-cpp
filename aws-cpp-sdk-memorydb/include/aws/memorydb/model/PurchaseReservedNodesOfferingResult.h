﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ReservedNode.h>
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
namespace MemoryDB
{
namespace Model
{
  class PurchaseReservedNodesOfferingResult
  {
  public:
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult();
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline const ReservedNode& GetReservedNode() const{ return m_reservedNode; }

    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline void SetReservedNode(const ReservedNode& value) { m_reservedNode = value; }

    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline void SetReservedNode(ReservedNode&& value) { m_reservedNode = std::move(value); }

    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline PurchaseReservedNodesOfferingResult& WithReservedNode(const ReservedNode& value) { SetReservedNode(value); return *this;}

    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline PurchaseReservedNodesOfferingResult& WithReservedNode(ReservedNode&& value) { SetReservedNode(std::move(value)); return *this;}

  private:

    ReservedNode m_reservedNode;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
