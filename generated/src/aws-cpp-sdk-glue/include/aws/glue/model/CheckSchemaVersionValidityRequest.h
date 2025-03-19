/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/DataFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CheckSchemaVersionValidityRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CheckSchemaVersionValidityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckSchemaVersionValidity"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline CheckSchemaVersionValidityRequest& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const { return m_schemaDefinition; }
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }
    template<typename SchemaDefinitionT = Aws::String>
    void SetSchemaDefinition(SchemaDefinitionT&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::forward<SchemaDefinitionT>(value); }
    template<typename SchemaDefinitionT = Aws::String>
    CheckSchemaVersionValidityRequest& WithSchemaDefinition(SchemaDefinitionT&& value) { SetSchemaDefinition(std::forward<SchemaDefinitionT>(value)); return *this;}
    ///@}
  private:

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
