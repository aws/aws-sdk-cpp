/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The unique ID of the schema in the Glue schema registry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaId">AWS API
   * Reference</a></p>
   */
  class SchemaId
  {
  public:
    AWS_GLUE_API SchemaId();
    AWS_GLUE_API SchemaId(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline SchemaId& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline SchemaId& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline SchemaId& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline SchemaId& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
