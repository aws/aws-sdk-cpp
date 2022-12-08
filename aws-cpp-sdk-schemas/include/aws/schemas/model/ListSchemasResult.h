/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/SchemaSummary.h>
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
namespace Schemas
{
namespace Model
{
  class ListSchemasResult
  {
  public:
    AWS_SCHEMAS_API ListSchemasResult();
    AWS_SCHEMAS_API ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of schema summaries.</p>
     */
    inline const Aws::Vector<SchemaSummary>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>An array of schema summaries.</p>
     */
    inline void SetSchemas(const Aws::Vector<SchemaSummary>& value) { m_schemas = value; }

    /**
     * <p>An array of schema summaries.</p>
     */
    inline void SetSchemas(Aws::Vector<SchemaSummary>&& value) { m_schemas = std::move(value); }

    /**
     * <p>An array of schema summaries.</p>
     */
    inline ListSchemasResult& WithSchemas(const Aws::Vector<SchemaSummary>& value) { SetSchemas(value); return *this;}

    /**
     * <p>An array of schema summaries.</p>
     */
    inline ListSchemasResult& WithSchemas(Aws::Vector<SchemaSummary>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>An array of schema summaries.</p>
     */
    inline ListSchemasResult& AddSchemas(const SchemaSummary& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>An array of schema summaries.</p>
     */
    inline ListSchemasResult& AddSchemas(SchemaSummary&& value) { m_schemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SchemaSummary> m_schemas;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
