/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/SchemaType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class ListSchemasRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API ListSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchemas"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

    AWS_CLEANROOMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline ListSchemasRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline ListSchemasRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline ListSchemasRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline const SchemaType& GetSchemaType() const{ return m_schemaType; }

    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline bool SchemaTypeHasBeenSet() const { return m_schemaTypeHasBeenSet; }

    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline void SetSchemaType(const SchemaType& value) { m_schemaTypeHasBeenSet = true; m_schemaType = value; }

    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline void SetSchemaType(SchemaType&& value) { m_schemaTypeHasBeenSet = true; m_schemaType = std::move(value); }

    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline ListSchemasRequest& WithSchemaType(const SchemaType& value) { SetSchemaType(value); return *this;}

    /**
     * <p>If present, filter schemas by schema type. The only valid schema type is
     * currently `TABLE`.</p>
     */
    inline ListSchemasRequest& WithSchemaType(SchemaType&& value) { SetSchemaType(std::move(value)); return *this;}


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline ListSchemasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    SchemaType m_schemaType;
    bool m_schemaTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
