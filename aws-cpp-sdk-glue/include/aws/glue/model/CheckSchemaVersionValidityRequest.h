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
    AWS_GLUE_API CheckSchemaVersionValidityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckSchemaVersionValidity"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(const DataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(DataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline CheckSchemaVersionValidityRequest& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline CheckSchemaVersionValidityRequest& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline void SetSchemaDefinition(const Aws::String& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline void SetSchemaDefinition(Aws::String&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline void SetSchemaDefinition(const char* value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition.assign(value); }

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline CheckSchemaVersionValidityRequest& WithSchemaDefinition(const Aws::String& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline CheckSchemaVersionValidityRequest& WithSchemaDefinition(Aws::String&& value) { SetSchemaDefinition(std::move(value)); return *this;}

    /**
     * <p>The definition of the schema that has to be validated.</p>
     */
    inline CheckSchemaVersionValidityRequest& WithSchemaDefinition(const char* value) { SetSchemaDefinition(value); return *this;}

  private:

    DataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
