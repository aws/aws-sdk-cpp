/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/SchemaVersionSummary.h>
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
  class ListSchemaVersionsResult
  {
  public:
    AWS_SCHEMAS_API ListSchemaVersionsResult();
    AWS_SCHEMAS_API ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSchemaVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemaVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemaVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of schema version summaries.</p>
     */
    inline const Aws::Vector<SchemaVersionSummary>& GetSchemaVersions() const{ return m_schemaVersions; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline void SetSchemaVersions(const Aws::Vector<SchemaVersionSummary>& value) { m_schemaVersions = value; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline void SetSchemaVersions(Aws::Vector<SchemaVersionSummary>&& value) { m_schemaVersions = std::move(value); }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline ListSchemaVersionsResult& WithSchemaVersions(const Aws::Vector<SchemaVersionSummary>& value) { SetSchemaVersions(value); return *this;}

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline ListSchemaVersionsResult& WithSchemaVersions(Aws::Vector<SchemaVersionSummary>&& value) { SetSchemaVersions(std::move(value)); return *this;}

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline ListSchemaVersionsResult& AddSchemaVersions(const SchemaVersionSummary& value) { m_schemaVersions.push_back(value); return *this; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline ListSchemaVersionsResult& AddSchemaVersions(SchemaVersionSummary&& value) { m_schemaVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SchemaVersionSummary> m_schemaVersions;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
