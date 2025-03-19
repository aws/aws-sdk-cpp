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
    AWS_GLUE_API QuerySchemaVersionMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QuerySchemaVersionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline const SchemaId& GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    template<typename SchemaIdT = SchemaId>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = SchemaId>
    QuerySchemaVersionMetadataRequest& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline const SchemaVersionNumber& GetSchemaVersionNumber() const { return m_schemaVersionNumber; }
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }
    template<typename SchemaVersionNumberT = SchemaVersionNumber>
    void SetSchemaVersionNumber(SchemaVersionNumberT&& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = std::forward<SchemaVersionNumberT>(value); }
    template<typename SchemaVersionNumberT = SchemaVersionNumber>
    QuerySchemaVersionMetadataRequest& WithSchemaVersionNumber(SchemaVersionNumberT&& value) { SetSchemaVersionNumber(std::forward<SchemaVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const { return m_schemaVersionId; }
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }
    template<typename SchemaVersionIdT = Aws::String>
    void SetSchemaVersionId(SchemaVersionIdT&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::forward<SchemaVersionIdT>(value); }
    template<typename SchemaVersionIdT = Aws::String>
    QuerySchemaVersionMetadataRequest& WithSchemaVersionId(SchemaVersionIdT&& value) { SetSchemaVersionId(std::forward<SchemaVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Search key-value pairs for metadata, if they are not provided all the
     * metadata information will be fetched.</p>
     */
    inline const Aws::Vector<MetadataKeyValuePair>& GetMetadataList() const { return m_metadataList; }
    inline bool MetadataListHasBeenSet() const { return m_metadataListHasBeenSet; }
    template<typename MetadataListT = Aws::Vector<MetadataKeyValuePair>>
    void SetMetadataList(MetadataListT&& value) { m_metadataListHasBeenSet = true; m_metadataList = std::forward<MetadataListT>(value); }
    template<typename MetadataListT = Aws::Vector<MetadataKeyValuePair>>
    QuerySchemaVersionMetadataRequest& WithMetadataList(MetadataListT&& value) { SetMetadataList(std::forward<MetadataListT>(value)); return *this;}
    template<typename MetadataListT = MetadataKeyValuePair>
    QuerySchemaVersionMetadataRequest& AddMetadataList(MetadataListT&& value) { m_metadataListHasBeenSet = true; m_metadataList.emplace_back(std::forward<MetadataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline QuerySchemaVersionMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QuerySchemaVersionMetadataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    Aws::Vector<MetadataKeyValuePair> m_metadataList;
    bool m_metadataListHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
