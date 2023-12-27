/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing <code>InputSourceARN</code> and
   * <code>SchemaName</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingWorkflowInputSource">AWS
   * API Reference</a></p>
   */
  class IdMappingWorkflowInputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource();
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline const Aws::String& GetInputSourceARN() const{ return m_inputSourceARN; }

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline void SetInputSourceARN(const Aws::String& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = value; }

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline void SetInputSourceARN(Aws::String&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::move(value); }

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline void SetInputSourceARN(const char* value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN.assign(value); }

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline IdMappingWorkflowInputSource& WithInputSourceARN(const Aws::String& value) { SetInputSourceARN(value); return *this;}

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline IdMappingWorkflowInputSource& WithInputSourceARN(Aws::String&& value) { SetInputSourceARN(std::move(value)); return *this;}

    /**
     * <p>An Gluetable ARN for the input source table.</p>
     */
    inline IdMappingWorkflowInputSource& WithInputSourceARN(const char* value) { SetInputSourceARN(value); return *this;}


    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline IdMappingWorkflowInputSource& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline IdMappingWorkflowInputSource& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline IdMappingWorkflowInputSource& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}

  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
