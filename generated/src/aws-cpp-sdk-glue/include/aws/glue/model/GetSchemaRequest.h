/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetSchemaRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchema"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline GetSchemaRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline GetSchemaRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
