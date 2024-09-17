/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdNamespaceType.h>
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
   * <p>An object containing <code>InputSourceARN</code>, <code>SchemaName</code>,
   * and <code>Type</code>.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>An Glue table Amazon Resource Name (ARN) or a matching workflow ARN for the
     * input source table.</p>
     */
    inline const Aws::String& GetInputSourceARN() const{ return m_inputSourceARN; }
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }
    inline void SetInputSourceARN(const Aws::String& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = value; }
    inline void SetInputSourceARN(Aws::String&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::move(value); }
    inline void SetInputSourceARN(const char* value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN.assign(value); }
    inline IdMappingWorkflowInputSource& WithInputSourceARN(const Aws::String& value) { SetInputSourceARN(value); return *this;}
    inline IdMappingWorkflowInputSource& WithInputSourceARN(Aws::String&& value) { SetInputSourceARN(std::move(value)); return *this;}
    inline IdMappingWorkflowInputSource& WithInputSourceARN(const char* value) { SetInputSourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline IdMappingWorkflowInputSource& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline IdMappingWorkflowInputSource& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline IdMappingWorkflowInputSource& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> which all <code>sourceIds</code> will resolve to.</p>
     */
    inline const IdNamespaceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IdNamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IdNamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline IdMappingWorkflowInputSource& WithType(const IdNamespaceType& value) { SetType(value); return *this;}
    inline IdMappingWorkflowInputSource& WithType(IdNamespaceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    IdNamespaceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
