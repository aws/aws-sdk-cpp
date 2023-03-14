/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaListItem.h>
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
namespace Glue
{
namespace Model
{
  class ListSchemasResult
  {
  public:
    AWS_GLUE_API ListSchemasResult();
    AWS_GLUE_API ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline const Aws::Vector<SchemaListItem>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline void SetSchemas(const Aws::Vector<SchemaListItem>& value) { m_schemas = value; }

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline void SetSchemas(Aws::Vector<SchemaListItem>&& value) { m_schemas = std::move(value); }

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline ListSchemasResult& WithSchemas(const Aws::Vector<SchemaListItem>& value) { SetSchemas(value); return *this;}

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline ListSchemasResult& WithSchemas(Aws::Vector<SchemaListItem>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline ListSchemasResult& AddSchemas(const SchemaListItem& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>An array of <code>SchemaListItem</code> objects containing details of each
     * schema.</p>
     */
    inline ListSchemasResult& AddSchemas(SchemaListItem&& value) { m_schemas.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListSchemasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListSchemasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListSchemasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSchemasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSchemasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSchemasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SchemaListItem> m_schemas;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
