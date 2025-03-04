/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/SchemaVersionListItem.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListSchemaVersionsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListSchemaVersionsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of schema versions.</p>
     */
    inline const Aws::Vector<SchemaVersionListItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<SchemaVersionListItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<SchemaVersionListItem>&& value) { m_items = std::move(value); }
    inline ListSchemaVersionsResult& WithItems(const Aws::Vector<SchemaVersionListItem>& value) { SetItems(value); return *this;}
    inline ListSchemaVersionsResult& WithItems(Aws::Vector<SchemaVersionListItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& AddItems(const SchemaVersionListItem& value) { m_items.push_back(value); return *this; }
    inline ListSchemaVersionsResult& AddItems(SchemaVersionListItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSchemaVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchemaVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaVersionListItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
