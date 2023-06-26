/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/glue/model/SchemaVersionNumber.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/MetadataKeyValuePair.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class QuerySchemaVersionMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API QuerySchemaVersionMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QuerySchemaVersionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline const SchemaVersionNumber& GetSchemaVersionNumber() const{ return m_schemaVersionNumber; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersionNumber(const SchemaVersionNumber& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersionNumber(SchemaVersionNumber&& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = std::move(value); }

    /**
     * <p>The version number of the schema.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaVersionNumber(const SchemaVersionNumber& value) { SetSchemaVersionNumber(value); return *this;}

    /**
     * <p>The version number of the schema.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaVersionNumber(SchemaVersionNumber&& value) { SetSchemaVersionNumber(std::move(value)); return *this;}


    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = value; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::move(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId.assign(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline const Aws::Vector<MetadataKeyValuePair>& GetMetadataList() const{ return m_metadataList; }

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline bool MetadataListHasBeenSet() const { return m_metadataListHasBeenSet; }

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline void SetMetadataList(const Aws::Vector<MetadataKeyValuePair>& value) { m_metadataListHasBeenSet = true; m_metadataList = value; }

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline void SetMetadataList(Aws::Vector<MetadataKeyValuePair>&& value) { m_metadataListHasBeenSet = true; m_metadataList = std::move(value); }

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithMetadataList(const Aws::Vector<MetadataKeyValuePair>& value) { SetMetadataList(value); return *this;}

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithMetadataList(Aws::Vector<MetadataKeyValuePair>&& value) { SetMetadataList(std::move(value)); return *this;}

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline QuerySchemaVersionMetadataRequest& AddMetadataList(const MetadataKeyValuePair& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(value); return *this; }

    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline QuerySchemaVersionMetadataRequest& AddMetadataList(MetadataKeyValuePair&& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(std::move(value)); return *this; }


    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline QuerySchemaVersionMetadataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    Aws::Vector<MetadataKeyValuePair> m_metadataList;
    bool m_metadataListHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
