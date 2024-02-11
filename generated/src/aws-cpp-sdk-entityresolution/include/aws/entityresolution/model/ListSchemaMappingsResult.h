/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/SchemaMappingSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListSchemaMappingsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult();
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListSchemaMappingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListSchemaMappingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListSchemaMappingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline const Aws::Vector<SchemaMappingSummary>& GetSchemaList() const{ return m_schemaList; }

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline void SetSchemaList(const Aws::Vector<SchemaMappingSummary>& value) { m_schemaList = value; }

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline void SetSchemaList(Aws::Vector<SchemaMappingSummary>&& value) { m_schemaList = std::move(value); }

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline ListSchemaMappingsResult& WithSchemaList(const Aws::Vector<SchemaMappingSummary>& value) { SetSchemaList(value); return *this;}

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline ListSchemaMappingsResult& WithSchemaList(Aws::Vector<SchemaMappingSummary>&& value) { SetSchemaList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline ListSchemaMappingsResult& AddSchemaList(const SchemaMappingSummary& value) { m_schemaList.push_back(value); return *this; }

    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline ListSchemaMappingsResult& AddSchemaList(SchemaMappingSummary&& value) { m_schemaList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSchemaMappingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSchemaMappingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSchemaMappingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SchemaMappingSummary> m_schemaList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
