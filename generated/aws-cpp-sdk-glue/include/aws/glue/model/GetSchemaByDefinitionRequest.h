﻿/**
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
  class AWS_GLUE_API GetSchemaByDefinitionRequest : public GlueRequest
  {
  public:
    GetSchemaByDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaByDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline GetSchemaByDefinitionRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline GetSchemaByDefinitionRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}


    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline void SetSchemaDefinition(const Aws::String& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline void SetSchemaDefinition(Aws::String&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline void SetSchemaDefinition(const char* value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition.assign(value); }

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline GetSchemaByDefinitionRequest& WithSchemaDefinition(const Aws::String& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline GetSchemaByDefinitionRequest& WithSchemaDefinition(Aws::String&& value) { SetSchemaDefinition(std::move(value)); return *this;}

    /**
     * <p>The definition of the schema for which schema details are required.</p>
     */
    inline GetSchemaByDefinitionRequest& WithSchemaDefinition(const char* value) { SetSchemaDefinition(value); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet;

    Aws::String m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
