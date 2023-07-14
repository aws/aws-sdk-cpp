﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryItemSchema.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetInventorySchemaResult
  {
  public:
    GetInventorySchemaResult();
    GetInventorySchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInventorySchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline const Aws::Vector<InventoryItemSchema>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline void SetSchemas(const Aws::Vector<InventoryItemSchema>& value) { m_schemas = value; }

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline void SetSchemas(Aws::Vector<InventoryItemSchema>&& value) { m_schemas = std::move(value); }

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline GetInventorySchemaResult& WithSchemas(const Aws::Vector<InventoryItemSchema>& value) { SetSchemas(value); return *this;}

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline GetInventorySchemaResult& WithSchemas(Aws::Vector<InventoryItemSchema>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline GetInventorySchemaResult& AddSchemas(const InventoryItemSchema& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline GetInventorySchemaResult& AddSchemas(InventoryItemSchema&& value) { m_schemas.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventorySchemaResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventorySchemaResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventorySchemaResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InventoryItemSchema> m_schemas;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
