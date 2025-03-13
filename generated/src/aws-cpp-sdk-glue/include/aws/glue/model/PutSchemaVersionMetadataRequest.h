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
  class PutSchemaVersionMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API PutSchemaVersionMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSchemaVersionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID for the schema.</p>
     */
    inline const SchemaId& GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    template<typename SchemaIdT = SchemaId>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = SchemaId>
    PutSchemaVersionMetadataRequest& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
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
    PutSchemaVersionMetadataRequest& WithSchemaVersionNumber(SchemaVersionNumberT&& value) { SetSchemaVersionNumber(std::forward<SchemaVersionNumberT>(value)); return *this;}
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
    PutSchemaVersionMetadataRequest& WithSchemaVersionId(SchemaVersionIdT&& value) { SetSchemaVersionId(std::forward<SchemaVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata key's corresponding value.</p>
     */
    inline const MetadataKeyValuePair& GetMetadataKeyValue() const { return m_metadataKeyValue; }
    inline bool MetadataKeyValueHasBeenSet() const { return m_metadataKeyValueHasBeenSet; }
    template<typename MetadataKeyValueT = MetadataKeyValuePair>
    void SetMetadataKeyValue(MetadataKeyValueT&& value) { m_metadataKeyValueHasBeenSet = true; m_metadataKeyValue = std::forward<MetadataKeyValueT>(value); }
    template<typename MetadataKeyValueT = MetadataKeyValuePair>
    PutSchemaVersionMetadataRequest& WithMetadataKeyValue(MetadataKeyValueT&& value) { SetMetadataKeyValue(std::forward<MetadataKeyValueT>(value)); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    MetadataKeyValuePair m_metadataKeyValue;
    bool m_metadataKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
