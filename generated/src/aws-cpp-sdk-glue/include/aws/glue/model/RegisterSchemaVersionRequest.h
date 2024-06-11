/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
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
  class RegisterSchemaVersionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API RegisterSchemaVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterSchemaVersion"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline RegisterSchemaVersionRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}
    inline RegisterSchemaVersionRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for the
     * <code>SchemaName</code>.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const{ return m_schemaDefinition; }
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }
    inline void SetSchemaDefinition(const Aws::String& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }
    inline void SetSchemaDefinition(Aws::String&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }
    inline void SetSchemaDefinition(const char* value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition.assign(value); }
    inline RegisterSchemaVersionRequest& WithSchemaDefinition(const Aws::String& value) { SetSchemaDefinition(value); return *this;}
    inline RegisterSchemaVersionRequest& WithSchemaDefinition(Aws::String&& value) { SetSchemaDefinition(std::move(value)); return *this;}
    inline RegisterSchemaVersionRequest& WithSchemaDefinition(const char* value) { SetSchemaDefinition(value); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
